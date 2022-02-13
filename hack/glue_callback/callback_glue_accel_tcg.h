void glue_exec_tb(void *tb, uintptr_t pc);
void glue_exec_tb_nocache(void *tb, uintptr_t pc);
void glue_exec_tb_exit(void *last_tb, unsigned int flags);
void glue_translate_block(void *tb, uintptr_t pc, const void *tb_code);
