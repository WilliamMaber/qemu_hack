import os
import re
C_to_pys = [
    ("int", "i"),
    ("bool", "p"),
    ("char", "b"),
    ("uint8_t", "B"),
    ("uint16_t", "I"),
    ("uint32_t", "L"),
    ("uint64_t", "K "),
    ("unsigned int", "I"),
    ("unsigned", "I"),
    ("const char *", "s"),
    ("int *", "i"),
    ("void *", "O&"),
    ("bool *", "p"),
    ("char *", "b"),
    ("uint8_t *", "B"),
    ("uint16_t *", "I"),
    ("uint32_t *", "L"),
    ("uint64_t *", "K"),
    ("unsigned int *", "I"),
    ("unsigned *", "I"),
    ("uint8_t *", "B"),
    ("uint16_t *", "I"),
    ("uint32_t *", "L"),
    ("uint64_t *", "K"),
]


def traceFile_ToC(dir_, hname):
    output = """
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include \"../callbackhelper.h\"
# include \""""+hname + """\"\n
"""
    f = open(dir_, "r")
    text = f.read()
    r1 = re.findall(r"[0-z_]*\([0-z_* ,]*\)",
                    text, flags=re.I | re.M)

    for r in r1:
        pnames = []
        p = []
        f_prem = ""
        r_fname = re.findall(".*(?=\()", r)[0]
        if r_fname == "":
            continue
        r_prem = re.findall("(?=\().*(?<=\))", r)[0][1:-1]
        pz_prems = re.findall(
            "[ \(]?(const ?)?(unsigned ?)?(unsigned |unsigned int |short |uintptr_t |long |char |void |uint[0-9]*_t |int[0-9]*_t |size_t |u[0-9]*_t |bool |char |int ) *(\*+)? *([0-z_]*)", r_prem)

        print(pz_prems)
        for pz_prem in pz_prems:
            pname = pz_prem[-1]
            pz_prem = "".join(pz_prem[1:-1])
            pz_prem = pz_prem.replace(" ", "")
            if "void*" == pz_prem:
                pnames.append("&"+pname)
                p.append("O&")
            elif "constchar*" == pz_prem:
                pnames.append(pname)
                p.append("s")
            elif "int" == pz_prem:
                pnames.append(pname)
                p.append("i")
            elif "size_t" == pz_prem:
                pnames.append(""+pname)
                p.append("i")
            elif "uint32_t" == pz_prem:
                pnames.append(""+pname)
                p.append("K")
            elif "uint8_t" == pz_prem:
                pnames.append(""+pname)
                p.append("B")
            elif "bool" == pz_prem:
                pnames.append(""+pname)
                p.append("p")
            elif "unsigned" == pz_prem:
                pnames.append(""+pname)
                p.append("I")
            elif "unsigned int" == pz_prem:
                pnames.append(""+pname)
                p.append("I")
            elif "uint64_t" == pz_prem:
                pnames.append(pname)
                p.append("K")
            elif "uint32_t" == pz_prem:
                pnames.append(""+pname)
                p.append("l")
            elif "uint16_t" == pz_prem:
                pnames.append(""+pname)
                p.append("i")
            elif "int64_t" == pz_prem:
                pnames.append(""+pname)
                p.append("L")
            elif "int32_t" == pz_prem:
                pnames.append(""+pname)
                p.append("l")

            elif "int16_t" == pz_prem:
                pnames.append(""+pname)
                p.append("O&")
            elif "int64_t" == pz_prem:
                pnames.append(""+pname)
                p.append("O&")
            elif "int8_t" == pz_prem:
                pnames.append(""+pname)
                p.append("O&")
            elif "bool*" == pz_prem:
                pnames.append(""+pname)
                p.append("p")
            elif "char" == pz_prem:
                pnames.append(""+pname)
                p.append("b")
            elif "unsignedint" == pz_prem:
                pnames.append(""+pname)
                p.append("I")
            #
            elif "char*" == pz_prem:
                pnames.append("&"+pname)
                p.append("b")
            elif "uint8_t*" == pz_prem:
                pnames.append("&"+pname)
                p.append("B")
            elif "uint64_t*" == pz_prem:
                pnames.append(pname)
                p.append("K")
            elif "int*" == pz_prem:
                pnames.append(pname)
                p.append("i")
            elif "int64_t*" == pz_prem:
                pnames.append(""+pname)
                p.append("O&")
            elif "uint16_t*" == pz_prem:
                pnames.append(""+pname)
                p.append("i")
            elif "uint32_t*" == pz_prem:
                pnames.append("&"+pname)
                p.append("O&")
            elif "int8_t*" == pz_prem:
                pnames.append("&"+pname)
                p.append("O&")
            elif "int16_t*" == pz_prem:
                pnames.append("&"+pname)
                p.append("O&")
            elif "int32_t*" == pz_prem:
                pnames.append("&"+pname)
                p.append("O&")
            elif "int64_t*" == pz_prem:
                pnames.append("&"+pname)
                p.append("O&")
            elif "char**" == pz_prem:
                pnames.append("&"+pname)
                p.append("O&")
            elif "unsignedchar" == pz_prem:
                pnames.append("&"+pname)
                p.append("O&")
            elif "constvoid*" == pz_prem:
                pnames.append("&"+pname)
                p.append("O&")
            elif "constuint8_t*" == pz_prem:
                pnames.append("&"+pname)
                p.append("O&")
            elif "constint" == pz_prem:
                pnames.append("&"+pname)
                p.append("O&")
            elif "constuint8_t" == pz_prem:
                pnames.append("&"+pname)
                p.append("O&")
            elif "void" == pz_prem:
                continue
            else:
                pass
        if len(p) > 0:
            f_prem = (",".join(p))
        else:
            pass

        t_prem = r_prem
        if r_prem == "void":
            t_prem = ""
        else:
            t_prem = "," + t_prem
        if "all" in t_prem:
            continue

        if len(pnames) > 0:
            ff_name = "," + ",".join(pnames)
        else:
            ff_name = ""

        r_prem = re.findall("(?=\().*(?<=\))", r)[0][1:-1]
        if r_prem == "":
            r_prem = "void"
        if r_prem == "":
            r_prem = "void"
        if r_prem == "s":
            continue
        if r_prem == "16":
            continue
        if r_prem == "6":
            continue
        if r_prem == "10":
            continue
        if r_fname == "block":
            continue
        if r_fname == "CAPACITY":
            continue
        if r_fname == "Select":
            continue
        output = output + "void glue_" + r_fname + "(" + r_prem + """){\n
        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,""" + "\"" + r_fname + "\""+""");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(""" + f_prem + """)" """+ff_name+""");
            PyObject_CallObject(pFunc, pValue);
        }
        }
        \n}\n"""
    output.replace("()", "(void)")
    return output


def traceFile_meson(namecs):
    files = ""
    for namec in namecs:
        files = files + "'" + namec + "',\n"
    output = """
hack_ss = ss.source_set()
hack_ss.add(files(
  """+files+"""
))
    """
    f = open(os.path.join("./hack/glue_callback", "meson.build"), "w")
    f.write(output)


def traceFile_ToH(dir_):
    output = ""
    f = open(dir_, "r")
    text = f.read()
    r1 = re.findall(r"[0-z_]*\([0-z_* ,]*\)",
                    text, flags=re.I | re.M)
    for r in r1:
        r_prem = re.findall("(?=\().*(?<=\))", r)[0][1:-1]
        t_prem = r_prem
        if "all" in t_prem:
            continue
        if len(r) == 0:
            continue
        r_fname = re.findall(".*(?=\()", r)[0]
        if "TCG" in r_fname:
            print(r_fname)
            continue
        if "" == r_fname:
            continue
        if r_prem == "void":
            t_prem = ""
        else:
            t_prem = "," + t_prem
        if t_prem == "s":
            print(t_prem)
            continue
        if r_prem == "s":
            print(r_prem)
            continue
        r_prem = re.findall("(?=\().*(?<=\))", r)[0][1:-1]
        if r_prem == "":
            r_prem = "void"
        if r_prem == "s":
            continue
        if r_prem == "16":
            continue
        if r_prem == "6":
            continue
        if r_prem == "10":
            continue
        if r_fname == "block":
            continue
        if r_fname == "CAPACITY":
            continue
        if r_fname == "Select":
            continue
        if r_fname == "block":
            continue
        output = output + "void glue_" + r_fname + "(" + r_prem + ");\n"
    output.replace("()", "(void)")
    return output


def main():
    nameCs = []
    for root, dirs, files in os.walk("./"):
        for file in files:
            if "trace-events" == file:
                name = root
                name = name.replace("./", "")
                name = name.replace("/", "_")
                name = "callback_glue_" + name
                nameh = name + ".h"
                namec = name + ".c"
                nameCs.append(namec)
                dir_ = os.path.join(root, file)
                h_file = traceFile_ToH(dir_)
                c_file = traceFile_ToC(dir_, nameh)
                p = os.path.join("./hack/glue_callback", namec)
                f = open(p, "w")
                f.write(c_file)
                f.close()
                # os.system("clang-format " + p)
                p = os.path.join("./hack/glue_callback", nameh)
                f = open(p, "w")
                f.write(h_file)
                f.close()
                # os.system("clang-format " + p)
    traceFile_meson(nameCs)


main()
