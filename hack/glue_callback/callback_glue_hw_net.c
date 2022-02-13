
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_hw_net.h"

void glue_allwinner_sun8i_emac_mii_write_reg(uint32_t reg, uint32_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"allwinner_sun8i_emac_mii_write_reg");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,reg,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_allwinner_sun8i_emac_mii_read_reg(uint32_t reg, uint32_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"allwinner_sun8i_emac_mii_read_reg");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,reg,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_allwinner_sun8i_emac_receive(uint32_t desc, uint32_t paddr, uint32_t bytes){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"allwinner_sun8i_emac_receive");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,desc,paddr,bytes);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_allwinner_sun8i_emac_transmit(uint32_t desc, uint32_t paddr, uint32_t bytes){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"allwinner_sun8i_emac_transmit");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,desc,paddr,bytes);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_allwinner_sun8i_emac_reset(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"allwinner_sun8i_emac_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_allwinner_sun8i_emac_set_link(bool active){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"allwinner_sun8i_emac_set_link");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(p)" ,active);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_allwinner_sun8i_emac_read(uint64_t offset, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"allwinner_sun8i_emac_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,offset,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_allwinner_sun8i_emac_write(uint64_t offset, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"allwinner_sun8i_emac_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,offset,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mdio_phy_read(int regnum, uint16_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mdio_phy_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,regnum,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mdio_phy_write(int regnum, uint16_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mdio_phy_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,regnum,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mdio_bitbang(bool mdc, bool mdio, int state, uint16_t cnt, unsigned int drive){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mdio_bitbang");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(p,p,i,i,I)" ,mdc,mdio,state,cnt,drive);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lance_mem_readw(uint64_t addr, uint32_t ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lance_mem_readw");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lance_mem_writew(uint64_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lance_mem_writew");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mipsnet_send(uint32_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mipsnet_send");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mipsnet_receive(uint32_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mipsnet_receive");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mipsnet_read(uint64_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mipsnet_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mipsnet_write(uint64_t addr, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mipsnet_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mipsnet_irq(uint32_t isr, uint32_t intctl){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mipsnet_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,isr,intctl);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ne2000_read(uint64_t addr, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ne2000_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ne2000_write(uint64_t addr, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ne2000_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ne2000_ioport_read(uint64_t addr, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ne2000_ioport_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ne2000_ioport_write(uint64_t addr, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ne2000_ioport_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_open_eth_mii_write(unsigned idx, uint16_t v){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"open_eth_mii_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I,i)" ,idx,v);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_open_eth_mii_read(unsigned idx, uint16_t v){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"open_eth_mii_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I,i)" ,idx,v);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_open_eth_update_irq(uint32_t v){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"open_eth_update_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,v);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_open_eth_receive(unsigned len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"open_eth_receive");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I)" ,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_open_eth_receive_mcast(unsigned idx, uint32_t h0, uint32_t h1){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"open_eth_receive_mcast");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I,K,K)" ,idx,h0,h1);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_open_eth_receive_reject(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"open_eth_receive_reject");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_open_eth_receive_desc(uint32_t addr, uint32_t len_flags){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"open_eth_receive_desc");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,len_flags);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_open_eth_start_xmit(uint32_t addr, unsigned len, unsigned tx_len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"open_eth_start_xmit");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,I,I)" ,addr,len,tx_len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_open_eth_reg_read(uint32_t addr, uint32_t v){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"open_eth_reg_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,v);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_open_eth_reg_write(uint32_t addr, uint32_t v){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"open_eth_reg_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,v);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_open_eth_desc_read(uint32_t addr, uint32_t v){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"open_eth_desc_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,v);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_open_eth_desc_write(uint32_t addr, uint32_t v){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"open_eth_desc_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,v);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pcnet_s_reset(void *s){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pcnet_s_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&s);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pcnet_user_int(void *s){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pcnet_user_int");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&s);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pcnet_isr_change(void *s, uint32_t isr, uint32_t isr_old){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pcnet_isr_change");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,K)" ,&s,isr,isr_old);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pcnet_init(void *s, uint64_t init_addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pcnet_init");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K)" ,&s,init_addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pcnet_rlen_tlen(void *s, uint32_t rlen, uint32_t tlen){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pcnet_rlen_tlen");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,K)" ,&s,rlen,tlen);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pcnet_ss32_rdra_tdra(void *s, uint32_t ss32, uint32_t rdra, uint32_t rcvrl, uint32_t tdra, uint32_t xmtrl){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pcnet_ss32_rdra_tdra");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,K,K,K,K)" ,&s,ss32,rdra,rcvrl,tdra,xmtrl);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pcnet_aprom_writeb(void *opaque, uint32_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pcnet_aprom_writeb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,K)" ,&opaque,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pcnet_aprom_readb(void *opaque, uint32_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pcnet_aprom_readb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,K)" ,&opaque,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pcnet_ioport_read(void *opaque, uint64_t addr, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pcnet_ioport_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,I)" ,&opaque,addr,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pcnet_ioport_write(void *opaque, uint64_t addr, uint64_t data, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pcnet_ioport_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,K,I)" ,&opaque,addr,data,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_net_rx_pkt_parsed(bool ip4, bool ip6, bool udp, bool tcp, size_t l3o, size_t l4o, size_t l5o){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"net_rx_pkt_parsed");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(p,p,p,p,i,i,i)" ,ip4,ip6,udp,tcp,l3o,l4o,l5o);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_net_rx_pkt_l4_csum_validate_entry(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"net_rx_pkt_l4_csum_validate_entry");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_net_rx_pkt_l4_csum_validate_not_xxp(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"net_rx_pkt_l4_csum_validate_not_xxp");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_net_rx_pkt_l4_csum_validate_udp_with_no_checksum(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"net_rx_pkt_l4_csum_validate_udp_with_no_checksum");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_net_rx_pkt_l4_csum_validate_ip4_fragment(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"net_rx_pkt_l4_csum_validate_ip4_fragment");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_net_rx_pkt_l4_csum_validate_csum(bool csum_valid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"net_rx_pkt_l4_csum_validate_csum");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(p)" ,csum_valid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_net_rx_pkt_l4_csum_calc_entry(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"net_rx_pkt_l4_csum_calc_entry");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_net_rx_pkt_l4_csum_calc_ip4_udp(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"net_rx_pkt_l4_csum_calc_ip4_udp");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_net_rx_pkt_l4_csum_calc_ip4_tcp(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"net_rx_pkt_l4_csum_calc_ip4_tcp");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_net_rx_pkt_l4_csum_calc_ip6_udp(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"net_rx_pkt_l4_csum_calc_ip6_udp");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_net_rx_pkt_l4_csum_calc_ip6_tcp(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"net_rx_pkt_l4_csum_calc_ip6_tcp");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_net_rx_pkt_l4_csum_calc_ph_csum(uint32_t cntr, uint16_t csl){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"net_rx_pkt_l4_csum_calc_ph_csum");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i)" ,cntr,csl);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_net_rx_pkt_l4_csum_calc_csum(size_t l4hdr_off, uint16_t csl, uint32_t cntr, uint16_t csum){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"net_rx_pkt_l4_csum_calc_csum");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,K,i)" ,l4hdr_off,csl,cntr,csum);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_net_rx_pkt_l4_csum_fix_entry(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"net_rx_pkt_l4_csum_fix_entry");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_net_rx_pkt_l4_csum_fix_tcp(uint32_t l4_cso){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"net_rx_pkt_l4_csum_fix_tcp");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,l4_cso);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_net_rx_pkt_l4_csum_fix_udp(uint32_t l4_cso){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"net_rx_pkt_l4_csum_fix_udp");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,l4_cso);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_net_rx_pkt_l4_csum_fix_not_xxp(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"net_rx_pkt_l4_csum_fix_not_xxp");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_net_rx_pkt_l4_csum_fix_ip4_fragment(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"net_rx_pkt_l4_csum_fix_ip4_fragment");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_net_rx_pkt_l4_csum_fix_udp_with_no_checksum(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"net_rx_pkt_l4_csum_fix_udp_with_no_checksum");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_net_rx_pkt_l4_csum_fix_csum(uint32_t cso, uint16_t csum){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"net_rx_pkt_l4_csum_fix_csum");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i)" ,cso,csum);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_net_rx_pkt_l3_csum_validate_entry(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"net_rx_pkt_l3_csum_validate_entry");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_net_rx_pkt_l3_csum_validate_not_ip4(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"net_rx_pkt_l3_csum_validate_not_ip4");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_net_rx_pkt_l3_csum_validate_csum(size_t l3hdr_off, uint32_t csl, uint32_t cntr, uint16_t csum, bool csum_valid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"net_rx_pkt_l3_csum_validate_csum");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K,i,p)" ,l3hdr_off,csl,cntr,csum,csum_valid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_net_rx_pkt_rss_ip4(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"net_rx_pkt_rss_ip4");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_net_rx_pkt_rss_ip4_tcp(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"net_rx_pkt_rss_ip4_tcp");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_net_rx_pkt_rss_ip4_udp(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"net_rx_pkt_rss_ip4_udp");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_net_rx_pkt_rss_ip6_tcp(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"net_rx_pkt_rss_ip6_tcp");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_net_rx_pkt_rss_ip6_udp(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"net_rx_pkt_rss_ip6_udp");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_net_rx_pkt_rss_ip6(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"net_rx_pkt_rss_ip6");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_net_rx_pkt_rss_ip6_ex(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"net_rx_pkt_rss_ip6_ex");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_net_rx_pkt_rss_ip6_ex_tcp(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"net_rx_pkt_rss_ip6_ex_tcp");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_net_rx_pkt_rss_ip6_ex_udp(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"net_rx_pkt_rss_ip6_ex_udp");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_net_rx_pkt_rss_hash(size_t rss_length, uint32_t rss_hash){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"net_rx_pkt_rss_hash");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K)" ,rss_length,rss_hash);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_net_rx_pkt_rss_add_chunk(void* ptr, size_t size, size_t input_offset){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"net_rx_pkt_rss_add_chunk");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,size,input_offset);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000_receiver_overrun(size_t s, uint32_t rdh, uint32_t rdt){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000_receiver_overrun");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K)" ,s,rdh,rdt);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000x_rx_can_recv_disabled(bool link_up, bool rx_enabled, bool pci_master){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000x_rx_can_recv_disabled");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(p,p,p)" ,link_up,rx_enabled,pci_master);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000x_vlan_is_vlan_pkt(bool is_vlan_pkt, uint16_t eth_proto, uint16_t vet){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000x_vlan_is_vlan_pkt");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(p,i,i)" ,is_vlan_pkt,eth_proto,vet);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000x_rx_flt_ucast_match(uint32_t idx, uint8_t b0, uint8_t b1, uint8_t b2, uint8_t b3, uint8_t b4, uint8_t b5){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000x_rx_flt_ucast_match");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,B,B,B,B,B,B)" ,idx,b0,b1,b2,b3,b4,b5);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000x_rx_flt_ucast_mismatch(uint8_t b0, uint8_t b1, uint8_t b2, uint8_t b3, uint8_t b4, uint8_t b5){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000x_rx_flt_ucast_mismatch");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B,B,B,B,B)" ,b0,b1,b2,b3,b4,b5);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000x_rx_flt_inexact_mismatch(uint8_t b0, uint8_t b1, uint8_t b2, uint8_t b3, uint8_t b4, uint8_t b5, uint32_t mo, uint32_t mta, uint32_t mta_val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000x_rx_flt_inexact_mismatch");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B,B,B,B,B,K,K,K)" ,b0,b1,b2,b3,b4,b5,mo,mta,mta_val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000x_rx_link_down(uint32_t status_reg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000x_rx_link_down");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,status_reg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000x_rx_disabled(uint32_t rctl_reg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000x_rx_disabled");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,rctl_reg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000x_rx_oversized(size_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000x_rx_oversized");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000x_mac_indicate(uint8_t b0, uint8_t b1, uint8_t b2, uint8_t b3, uint8_t b4, uint8_t b5){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000x_mac_indicate");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B,B,B,B,B)" ,b0,b1,b2,b3,b4,b5);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000x_link_negotiation_start(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000x_link_negotiation_start");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000x_link_negotiation_done(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000x_link_negotiation_done");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_core_write(uint64_t index, uint32_t size, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_core_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,index,size,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_core_read(uint64_t index, uint32_t size, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_core_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,index,size,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_core_mdic_read(uint8_t page, uint32_t addr, uint32_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_core_mdic_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,K,K)" ,page,addr,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_core_mdic_read_unhandled(uint8_t page, uint32_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_core_mdic_read_unhandled");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,K)" ,page,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_core_mdic_write(uint8_t page, uint32_t addr, uint32_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_core_mdic_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,K,K)" ,page,addr,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_core_mdic_write_unhandled(uint8_t page, uint32_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_core_mdic_write_unhandled");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,K)" ,page,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_core_ctrl_write(uint64_t index, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_core_ctrl_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,index,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_core_ctrl_sw_reset(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_core_ctrl_sw_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_core_ctrl_phy_reset(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_core_ctrl_phy_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_link_autoneg_flowctl(bool enabled){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_link_autoneg_flowctl");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(p)" ,enabled);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_link_set_params(bool autodetect, uint32_t speed, bool force_spd, bool force_dplx, bool rx_fctl, bool tx_fctl){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_link_set_params");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(p,K,p,p,p,p)" ,autodetect,speed,force_spd,force_dplx,rx_fctl,tx_fctl);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_link_read_params(bool autodetect, uint32_t speed, bool force_spd, bool force_dplx, bool rx_fctl, bool tx_fctl){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_link_read_params");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(p,K,p,p,p,p)" ,autodetect,speed,force_spd,force_dplx,rx_fctl,tx_fctl);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_link_set_ext_params(bool asd_check, bool speed_select_bypass){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_link_set_ext_params");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(p,p)" ,asd_check,speed_select_bypass);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_link_status(bool link_up, bool full_dplx, uint32_t speed, uint32_t asdv){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_link_status");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(p,p,K,K)" ,link_up,full_dplx,speed,asdv);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_link_status_changed(bool status){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_link_status_changed");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(p)" ,status);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_wrn_regs_write_ro(uint64_t index, uint32_t size, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_wrn_regs_write_ro");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,index,size,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_wrn_regs_write_unknown(uint64_t index, uint32_t size, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_wrn_regs_write_unknown");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,index,size,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_wrn_regs_read_unknown(uint64_t index, uint32_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_wrn_regs_read_unknown");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,index,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_wrn_regs_read_trivial(uint32_t index){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_wrn_regs_read_trivial");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,index);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_wrn_regs_write_trivial(uint32_t index){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_wrn_regs_write_trivial");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,index);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_wrn_no_ts_support(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_wrn_no_ts_support");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_wrn_no_snap_support(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_wrn_no_snap_support");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_wrn_iscsi_filtering_not_supported(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_wrn_iscsi_filtering_not_supported");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_wrn_nfsw_filtering_not_supported(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_wrn_nfsw_filtering_not_supported");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_wrn_nfsr_filtering_not_supported(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_wrn_nfsr_filtering_not_supported");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_tx_disabled(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_tx_disabled");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_tx_descr(void *addr, uint32_t lower, uint32_t upper){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_tx_descr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,K)" ,&addr,lower,upper);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_ring_free_space(int ridx, uint32_t rdlen, uint32_t rdh, uint32_t rdt){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_ring_free_space");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K,K)" ,ridx,rdlen,rdh,rdt);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_rx_can_recv_rings_full(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_rx_can_recv_rings_full");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_rx_can_recv(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_rx_can_recv");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_rx_has_buffers(int ridx, uint32_t free_desc, size_t total_size, uint32_t desc_buf_size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_rx_has_buffers");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,i,K)" ,ridx,free_desc,total_size,desc_buf_size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_rx_null_descriptor(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_rx_null_descriptor");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_rx_flt_vlan_mismatch(uint16_t vid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_rx_flt_vlan_mismatch");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,vid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_rx_flt_vlan_match(uint16_t vid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_rx_flt_vlan_match");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,vid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_rx_desc_ps_read(uint64_t a0, uint64_t a1, uint64_t a2, uint64_t a3){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_rx_desc_ps_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K)" ,a0,a1,a2,a3);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_rx_desc_ps_write(uint16_t a0, uint16_t a1, uint16_t a2, uint16_t a3){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_rx_desc_ps_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i,i)" ,a0,a1,a2,a3);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_rx_desc_buff_sizes(uint32_t b0, uint32_t b1, uint32_t b2, uint32_t b3){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_rx_desc_buff_sizes");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K)" ,b0,b1,b2,b3);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_rx_desc_len(uint8_t rx_desc_len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_rx_desc_len");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,rx_desc_len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_rx_desc_buff_write(uint8_t idx, uint64_t addr, uint16_t offset, const void* source, uint32_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_rx_desc_buff_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,K,i,K)" ,idx,addr,offset,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_rx_descr(int ridx, uint64_t base, uint8_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_rx_descr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,B)" ,ridx,base,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_rx_set_rctl(uint32_t rctl){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_rx_set_rctl");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,rctl);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_rx_receive_iov(int iovcnt){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_rx_receive_iov");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,iovcnt);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_rx_flt_dropped(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_rx_flt_dropped");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_rx_written_to_guest(uint32_t causes){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_rx_written_to_guest");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,causes);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_rx_not_written_to_guest(uint32_t causes){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_rx_not_written_to_guest");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,causes);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_rx_interrupt_set(uint32_t causes){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_rx_interrupt_set");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,causes);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_rx_interrupt_delayed(uint32_t causes){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_rx_interrupt_delayed");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,causes);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_rx_set_cso(int cso_state){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_rx_set_cso");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,cso_state);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_rx_set_rdt(int queue_idx, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_rx_set_rdt");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K)" ,queue_idx,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_rx_set_rfctl(uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_rx_set_rfctl");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_rx_start_recv(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_rx_start_recv");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_rx_rss_started(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_rx_rss_started");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_rx_rss_disabled(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_rx_rss_disabled");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_rx_rss_type(uint32_t type){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_rx_rss_type");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,type);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_rx_rss_ip4(bool isfragment, bool istcp, uint32_t mrqc, bool tcpipv4_enabled, bool ipv4_enabled){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_rx_rss_ip4");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(p,p,K,p,p)" ,isfragment,istcp,mrqc,tcpipv4_enabled,ipv4_enabled);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_rx_rss_ip6_rfctl(uint32_t rfctl){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_rx_rss_ip6_rfctl");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,rfctl);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_rx_rss_ip6(bool ex_dis, bool new_ex_dis, bool istcp, bool has_ext_headers, bool ex_dst_valid, bool ex_src_valid, uint32_t mrqc, bool tcpipv6_enabled, bool ipv6ex_enabled, bool ipv6_enabled){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_rx_rss_ip6");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(p,p,p,p,p,p,K,p,p,p)" ,ex_dis,new_ex_dis,istcp,has_ext_headers,ex_dst_valid,ex_src_valid,mrqc,tcpipv6_enabled,ipv6ex_enabled,ipv6_enabled);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_rx_rss_dispatched_to_queue(int queue_idx){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_rx_rss_dispatched_to_queue");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,queue_idx);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_rx_metadata_protocols(bool isip4, bool isip6, bool isudp, bool istcp){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_rx_metadata_protocols");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(p,p,p,p)" ,isip4,isip6,isudp,istcp);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_rx_metadata_vlan(uint16_t vlan_tag){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_rx_metadata_vlan");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,vlan_tag);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_rx_metadata_rss(uint32_t rss, uint32_t mrq){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_rx_metadata_rss");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,rss,mrq);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_rx_metadata_ip_id(uint16_t ip_id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_rx_metadata_ip_id");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,ip_id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_rx_metadata_ack(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_rx_metadata_ack");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_rx_metadata_pkt_type(uint32_t pkt_type){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_rx_metadata_pkt_type");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,pkt_type);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_rx_metadata_no_virthdr(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_rx_metadata_no_virthdr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_rx_metadata_virthdr_no_csum_info(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_rx_metadata_virthdr_no_csum_info");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_rx_metadata_l3_cso_disabled(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_rx_metadata_l3_cso_disabled");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_rx_metadata_l4_cso_disabled(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_rx_metadata_l4_cso_disabled");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_rx_metadata_l3_csum_validation_failed(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_rx_metadata_l3_csum_validation_failed");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_rx_metadata_l4_csum_validation_failed(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_rx_metadata_l4_csum_validation_failed");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_rx_metadata_status_flags(uint32_t status_flags){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_rx_metadata_status_flags");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,status_flags);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_rx_metadata_ipv6_sum_disabled(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_rx_metadata_ipv6_sum_disabled");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_rx_metadata_ipv6_filtering_disabled(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_rx_metadata_ipv6_filtering_disabled");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_vlan_vet(uint16_t vet){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_vlan_vet");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,vet);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_irq_msi_notify(uint32_t cause){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_irq_msi_notify");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,cause);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_irq_throttling_no_pending_interrupts(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_irq_throttling_no_pending_interrupts");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_irq_msi_notify_postponed(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_irq_msi_notify_postponed");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_irq_legacy_notify_postponed(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_irq_legacy_notify_postponed");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_irq_throttling_no_pending_vec(int idx){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_irq_throttling_no_pending_vec");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,idx);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_irq_msix_notify_postponed_vec(int idx){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_irq_msix_notify_postponed_vec");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,idx);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_irq_legacy_notify(bool level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_irq_legacy_notify");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(p)" ,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_irq_msix_notify_vec(uint32_t vector){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_irq_msix_notify_vec");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,vector);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_irq_postponed_by_xitr(uint32_t reg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_irq_postponed_by_xitr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,reg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_irq_clear_ims(uint32_t bits, uint32_t old_ims, uint32_t new_ims){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_irq_clear_ims");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,bits,old_ims,new_ims);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_irq_set_ims(uint32_t bits, uint32_t old_ims, uint32_t new_ims){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_irq_set_ims");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,bits,old_ims,new_ims);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_irq_fix_icr_asserted(uint32_t new_val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_irq_fix_icr_asserted");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,new_val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_irq_add_msi_other(uint32_t new_val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_irq_add_msi_other");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,new_val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_irq_pending_interrupts(uint32_t pending, uint32_t icr, uint32_t ims){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_irq_pending_interrupts");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,pending,icr,ims);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_irq_set_cause_entry(uint32_t val, uint32_t icr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_irq_set_cause_entry");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,val,icr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_irq_set_cause_exit(uint32_t val, uint32_t icr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_irq_set_cause_exit");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,val,icr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_irq_icr_write(uint32_t bits, uint32_t old_icr, uint32_t new_icr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_irq_icr_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,bits,old_icr,new_icr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_irq_write_ics(uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_irq_write_ics");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_irq_icr_process_iame(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_irq_icr_process_iame");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_irq_read_ics(uint32_t ics){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_irq_read_ics");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,ics);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_irq_read_ims(uint32_t ims){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_irq_read_ims");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,ims);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_irq_icr_read_entry(uint32_t icr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_irq_icr_read_entry");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,icr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_irq_icr_read_exit(uint32_t icr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_irq_icr_read_exit");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,icr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_irq_icr_clear_zero_ims(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_irq_icr_clear_zero_ims");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_irq_icr_clear_iame(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_irq_icr_clear_iame");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_irq_iam_clear_eiame(uint32_t iam, uint32_t cause){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_irq_iam_clear_eiame");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,iam,cause);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_irq_icr_clear_eiac(uint32_t icr, uint32_t eiac){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_irq_icr_clear_eiac");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,icr,eiac);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_irq_ims_clear_set_imc(uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_irq_ims_clear_set_imc");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_irq_fire_delayed_interrupts(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_irq_fire_delayed_interrupts");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_irq_rearm_timer(uint32_t reg, int64_t delay_ns){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_irq_rearm_timer");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,L)" ,reg,delay_ns);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_irq_throttling_timer(uint32_t reg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_irq_throttling_timer");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,reg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_irq_rdtr_fpd_running(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_irq_rdtr_fpd_running");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_irq_rdtr_fpd_not_running(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_irq_rdtr_fpd_not_running");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_irq_tidv_fpd_running(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_irq_tidv_fpd_running");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_irq_tidv_fpd_not_running(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_irq_tidv_fpd_not_running");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_irq_eitr_set(uint32_t eitr_num, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_irq_eitr_set");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,eitr_num,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_irq_itr_set(uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_irq_itr_set");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_irq_fire_all_timers(uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_irq_fire_all_timers");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_irq_adding_delayed_causes(uint32_t val, uint32_t icr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_irq_adding_delayed_causes");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,val,icr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_irq_msix_pending_clearing(uint32_t cause, uint32_t int_cfg, uint32_t vec){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_irq_msix_pending_clearing");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,cause,int_cfg,vec);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_wrn_msix_vec_wrong(uint32_t cause, uint32_t cfg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_wrn_msix_vec_wrong");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,cause,cfg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_wrn_msix_invalid(uint32_t cause, uint32_t cfg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_wrn_msix_invalid");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,cause,cfg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_mac_set_sw(uint8_t b0, uint8_t b1, uint8_t b2, uint8_t b3, uint8_t b4, uint8_t b5){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_mac_set_sw");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B,B,B,B,B)" ,b0,b1,b2,b3,b4,b5);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_vm_state_running(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_vm_state_running");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_vm_state_stopped(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_vm_state_stopped");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_cb_pci_realize(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_cb_pci_realize");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_cb_pci_uninit(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_cb_pci_uninit");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_cb_qdev_reset(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_cb_qdev_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_cb_pre_save(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_cb_pre_save");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_cb_post_load(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_cb_post_load");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_io_write_addr(uint64_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_io_write_addr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_io_write_data(uint64_t addr, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_io_write_data");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_io_read_addr(uint64_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_io_read_addr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_io_read_data(uint64_t addr, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_io_read_data");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_wrn_io_write_unknown(uint64_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_wrn_io_write_unknown");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_wrn_io_read_unknown(uint64_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_wrn_io_read_unknown");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_wrn_io_addr_undefined(uint64_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_wrn_io_addr_undefined");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_wrn_io_addr_flash(uint64_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_wrn_io_addr_flash");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_wrn_io_addr_unknown(uint64_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_wrn_io_addr_unknown");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_msi_init_fail(int32_t res){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_msi_init_fail");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(l)" ,res);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_msix_init_fail(int32_t res){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_msix_init_fail");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(l)" ,res);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_msix_use_vector_fail(uint32_t vec, int32_t res){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_msix_use_vector_fail");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,l)" ,vec,res);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_mac_set_permanent(uint8_t b0, uint8_t b1, uint8_t b2, uint8_t b3, uint8_t b4, uint8_t b5){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_mac_set_permanent");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B,B,B,B,B)" ,b0,b1,b2,b3,b4,b5);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_e1000e_cfg_support_virtio(bool support){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"e1000e_cfg_support_virtio");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(p)" ,support);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_vlan_get_rx_bd_from_pool_found(int pool, int32_t count, uint32_t rx_bufs){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_vlan_get_rx_bd_from_pool_found");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,l,K)" ,pool,count,rx_bufs);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_vlan_get_rx_bd_from_page(int buf_ptr, uint64_t bd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_vlan_get_rx_bd_from_page");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K)" ,buf_ptr,bd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_vlan_get_rx_bd_from_page_found(uint32_t use_buf_ptr, uint32_t rx_bufs){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_vlan_get_rx_bd_from_page_found");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,use_buf_ptr,rx_bufs);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_vlan_receive(const char *id, uint32_t rx_bufs){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_vlan_receive");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K)" ,&id,rx_bufs);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_vlan_receive_dma_completed(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_vlan_receive_dma_completed");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_vlan_receive_wrote(uint64_t ptr, uint64_t hi, uint64_t lo){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_vlan_receive_wrote");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,ptr,hi,lo);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_vlan_add_rxbuf_to_pool_create(int pool, uint64_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_vlan_add_rxbuf_to_pool_create");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K)" ,pool,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_vlan_add_rxbuf_to_pool(int pool, uint64_t len, int32_t count){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_vlan_add_rxbuf_to_pool");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,l)" ,pool,len,count);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_vlan_add_rxbuf_to_page(uint32_t ptr, uint32_t rx_bufs, uint64_t bd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_vlan_add_rxbuf_to_page");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,ptr,rx_bufs,bd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_vlan_h_add_logical_lan_buffer(uint64_t reg, uint64_t buf){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_vlan_h_add_logical_lan_buffer");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,reg,buf);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_vlan_h_send_logical_lan(uint64_t reg, uint64_t continue_token){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_vlan_h_send_logical_lan");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,reg,continue_token);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_vlan_h_send_logical_lan_rxbufs(uint32_t rx_bufs){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_vlan_h_send_logical_lan_rxbufs");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,rx_bufs);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_vlan_h_send_logical_lan_buf_desc(uint64_t buf){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_vlan_h_send_logical_lan_buf_desc");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,buf);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_vlan_h_send_logical_lan_total(int nbufs, unsigned total_len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_vlan_h_send_logical_lan_total");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,I)" ,nbufs,total_len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sungem_tx_checksum(uint16_t start, uint16_t off){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sungem_tx_checksum");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,start,off);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sungem_tx_checksum_oob(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sungem_tx_checksum_oob");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sungem_tx_unfinished(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sungem_tx_unfinished");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sungem_tx_overflow(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sungem_tx_overflow");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sungem_tx_finished(uint32_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sungem_tx_finished");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sungem_tx_kick(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sungem_tx_kick");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sungem_tx_disabled(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sungem_tx_disabled");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sungem_tx_process(uint32_t comp, uint32_t kick, uint32_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sungem_tx_process");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,comp,kick,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sungem_tx_desc(uint32_t comp, uint64_t control, uint64_t buffer){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sungem_tx_desc");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,comp,control,buffer);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sungem_tx_reset(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sungem_tx_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sungem_rx_mac_disabled(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sungem_rx_mac_disabled");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sungem_rx_txdma_disabled(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sungem_rx_txdma_disabled");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sungem_rx_check(bool full, uint32_t kick, uint32_t done){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sungem_rx_check");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(p,K,K)" ,full,kick,done);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sungem_rx_mac_check(uint32_t mac0, uint32_t mac1, uint32_t mac2){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sungem_rx_mac_check");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,mac0,mac1,mac2);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sungem_rx_mac_multicast(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sungem_rx_mac_multicast");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sungem_rx_mac_compare(uint32_t mac0, uint32_t mac1, uint32_t mac2){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sungem_rx_mac_compare");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,mac0,mac1,mac2);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sungem_rx_packet(size_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sungem_rx_packet");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sungem_rx_disabled(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sungem_rx_disabled");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sungem_rx_bad_frame_size(size_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sungem_rx_bad_frame_size");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sungem_rx_unmatched(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sungem_rx_unmatched");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sungem_rx_process(uint32_t done, uint32_t kick, uint32_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sungem_rx_process");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,done,kick,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sungem_rx_ringfull(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sungem_rx_ringfull");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sungem_rx_desc(uint64_t control, uint64_t buffer){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sungem_rx_desc");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,control,buffer);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sungem_rx_reset(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sungem_rx_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sungem_rx_kick(uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sungem_rx_kick");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sungem_reset(bool pci_reset){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sungem_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(p)" ,pci_reset);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sungem_mii_write(uint8_t phy_addr, uint8_t reg_addr, uint16_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sungem_mii_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B,i)" ,phy_addr,reg_addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sungem_mii_read(uint8_t phy_addr, uint8_t reg_addr, uint16_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sungem_mii_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B,i)" ,phy_addr,reg_addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sungem_mii_invalid_sof(uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sungem_mii_invalid_sof");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sungem_mii_invalid_op(uint8_t op){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sungem_mii_invalid_op");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,op);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sungem_mmio_greg_write(uint64_t addr, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sungem_mmio_greg_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sungem_mmio_greg_read(uint64_t addr, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sungem_mmio_greg_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sungem_mmio_txdma_write(uint64_t addr, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sungem_mmio_txdma_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sungem_mmio_txdma_read(uint64_t addr, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sungem_mmio_txdma_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sungem_mmio_rxdma_write(uint64_t addr, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sungem_mmio_rxdma_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sungem_mmio_rxdma_read(uint64_t addr, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sungem_mmio_rxdma_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sungem_mmio_mac_write(uint64_t addr, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sungem_mmio_mac_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sungem_mmio_mac_read(uint64_t addr, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sungem_mmio_mac_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sungem_mmio_mif_write(uint64_t addr, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sungem_mmio_mif_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sungem_mmio_mif_read(uint64_t addr, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sungem_mmio_mif_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sungem_mmio_pcs_write(uint64_t addr, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sungem_mmio_pcs_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sungem_mmio_pcs_read(uint64_t addr, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sungem_mmio_pcs_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sunhme_seb_write(uint64_t addr, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sunhme_seb_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sunhme_seb_read(uint64_t addr, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sunhme_seb_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sunhme_etx_write(uint64_t addr, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sunhme_etx_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sunhme_etx_read(uint64_t addr, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sunhme_etx_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sunhme_erx_write(uint64_t addr, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sunhme_erx_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sunhme_erx_read(uint64_t addr, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sunhme_erx_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sunhme_mac_write(uint64_t addr, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sunhme_mac_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sunhme_mac_read(uint64_t addr, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sunhme_mac_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sunhme_mii_write(uint64_t addr, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sunhme_mii_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sunhme_mii_read(uint8_t addr, uint16_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sunhme_mii_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,i)" ,addr,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sunhme_mif_write(uint8_t addr, uint16_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sunhme_mif_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,i)" ,addr,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sunhme_mif_read(uint64_t addr, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sunhme_mif_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sunhme_tx_desc(uint64_t buffer, uint32_t status, int cr, int nr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sunhme_tx_desc");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,i,i)" ,buffer,status,cr,nr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sunhme_tx_xsum_add(int offset, int len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sunhme_tx_xsum_add");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,offset,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sunhme_tx_xsum_stuff(uint16_t xsum, int offset){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sunhme_tx_xsum_stuff");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,xsum,offset);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sunhme_tx_done(int len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sunhme_tx_done");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sunhme_rx_incoming(size_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sunhme_rx_incoming");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sunhme_rx_filter_destmac(uint8_t b0, uint8_t b1, uint8_t b2, uint8_t b3, uint8_t b4, uint8_t b5){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sunhme_rx_filter_destmac");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B,B,B,B,B)" ,b0,b1,b2,b3,b4,b5);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sunhme_rx_filter_local_match(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sunhme_rx_filter_local_match");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sunhme_rx_filter_bcast_match(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sunhme_rx_filter_bcast_match");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sunhme_rx_filter_hash_nomatch(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sunhme_rx_filter_hash_nomatch");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sunhme_rx_filter_hash_match(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sunhme_rx_filter_hash_match");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sunhme_rx_filter_promisc_match(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sunhme_rx_filter_promisc_match");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sunhme_rx_filter_reject(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sunhme_rx_filter_reject");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sunhme_rx_filter_accept(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sunhme_rx_filter_accept");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sunhme_rx_desc(uint32_t addr, int offset, uint32_t status, int len, int cr, int nr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sunhme_rx_desc");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i,K,i,i,i)" ,addr,offset,status,len,cr,nr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sunhme_rx_xsum_calc(uint16_t xsum){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sunhme_rx_xsum_calc");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,xsum);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sunhme_rx_norxd(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sunhme_rx_norxd");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sunhme_update_irq(uint32_t mifmask, uint32_t mif, uint32_t sebmask, uint32_t seb, int level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sunhme_update_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K,i)" ,mifmask,mif,sebmask,seb,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_net_announce_notify(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_net_announce_notify");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_net_announce_timer(int round){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_net_announce_timer");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,round);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_net_handle_announce(int round){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_net_handle_announce");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,round);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_net_post_load_device(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_net_post_load_device");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_net_rss_disable(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_net_rss_disable");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_net_rss_error(const char *msg, uint32_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_net_rss_error");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K)" ,&msg,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_net_rss_enable(uint32_t p1, uint16_t p2, uint8_t p3){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_net_rss_enable");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i,B)" ,p1,p2,p3);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tulip_reg_write(uint64_t addr, const char *name, int size, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tulip_reg_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,b,i,K)" ,addr,&name,size,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tulip_reg_read(uint64_t addr, const char *name, int size, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tulip_reg_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,b,i,K)" ,addr,&name,size,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tulip_receive(const uint8_t *buf, size_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tulip_receive");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,i)" ,&buf,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tulip_descriptor(const char *prefix, uint32_t addr, uint32_t status, uint32_t control, uint32_t len1, uint32_t len2, uint32_t buf1, uint32_t buf2){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tulip_descriptor");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K,K,K,K,K,K)" ,&prefix,addr,status,control,len1,len2,buf1,buf2);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tulip_rx_state(const char *state){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tulip_rx_state");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&state);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tulip_tx_state(const char *state){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tulip_tx_state");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&state);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tulip_irq(uint32_t mask, uint32_t en, const char *state){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tulip_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,b)" ,mask,en,&state);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tulip_mii_write(int phy, int reg, uint16_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tulip_mii_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,phy,reg,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tulip_mii_read(int phy, int reg, uint16_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tulip_mii_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,phy,reg,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tulip_reset(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tulip_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tulip_setup_frame(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tulip_setup_frame");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tulip_setup_filter(int n, uint8_t a, uint8_t b, uint8_t c, uint8_t d, uint8_t e, uint8_t f){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tulip_setup_filter");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B,B,B,B,B,B)" ,n,a,b,c,d,e,f);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lasi_82596_mem_readw(uint64_t addr, uint32_t ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lasi_82596_mem_readw");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lasi_82596_mem_writew(uint64_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lasi_82596_mem_writew");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_i82596_s_reset(void *s){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"i82596_s_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&s);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_i82596_transmit(uint32_t size, uint32_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"i82596_transmit");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,size,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_i82596_receive_analysis(const char *s){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"i82596_receive_analysis");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&s);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_i82596_receive_packet(size_t sz){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"i82596_receive_packet");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,sz);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_i82596_new_mac(const char *id_with_mac){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"i82596_new_mac");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&id_with_mac);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_i82596_set_multicast(uint16_t count){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"i82596_set_multicast");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,count);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_i82596_channel_attention(void *s){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"i82596_channel_attention");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&s);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_imx_phy_read(uint32_t val, int phy, int reg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"imx_phy_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i,i)" ,val,phy,reg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_imx_phy_read_num(int phy, int configured){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"imx_phy_read_num");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,phy,configured);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_imx_phy_write(uint32_t val, int phy, int reg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"imx_phy_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i,i)" ,val,phy,reg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_imx_phy_write_num(int phy, int configured){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"imx_phy_write_num");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,phy,configured);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_imx_phy_update_link(const char *s){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"imx_phy_update_link");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&s);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_imx_phy_reset(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"imx_phy_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_imx_fec_read_bd(uint64_t addr, int flags, int len, int data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"imx_fec_read_bd");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i,i,i)" ,addr,flags,len,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_imx_enet_read_bd(uint64_t addr, int flags, int len, int data, int options, int status){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"imx_enet_read_bd");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i,i,i,i,i)" ,addr,flags,len,data,options,status);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_imx_eth_tx_bd_busy(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"imx_eth_tx_bd_busy");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_imx_eth_rx_bd_full(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"imx_eth_rx_bd_full");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_imx_eth_read(int reg, const char *reg_name, uint32_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"imx_eth_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b,K)" ,reg,&reg_name,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_imx_eth_write(int reg, const char *reg_name, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"imx_eth_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b,K)" ,reg,&reg_name,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_imx_fec_receive(size_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"imx_fec_receive");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_imx_fec_receive_len(uint64_t addr, int len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"imx_fec_receive_len");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i)" ,addr,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_imx_fec_receive_last(int last){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"imx_fec_receive_last");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,last);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_imx_enet_receive(size_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"imx_enet_receive");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_imx_enet_receive_len(uint64_t addr, int len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"imx_enet_receive_len");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i)" ,addr,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_imx_enet_receive_last(int last){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"imx_enet_receive_last");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,last);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_npcm7xx_emc_reset(int emc_num){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_emc_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,emc_num);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_npcm7xx_emc_update_tx_irq(int level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_emc_update_tx_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_npcm7xx_emc_update_rx_irq(int level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_emc_update_rx_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_npcm7xx_emc_set_mista(uint32_t flags){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_emc_set_mista");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,flags);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_npcm7xx_emc_cpu_owned_desc(uint32_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_emc_cpu_owned_desc");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_npcm7xx_emc_sent_packet(uint32_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_emc_sent_packet");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_npcm7xx_emc_tx_done(uint32_t ctxdsa){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_emc_tx_done");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,ctxdsa);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_npcm7xx_emc_can_receive(int can_receive){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_emc_can_receive");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,can_receive);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_npcm7xx_emc_packet_filtered_out(const char* fail_reason){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_emc_packet_filtered_out");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_npcm7xx_emc_packet_dropped(uint32_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_emc_packet_dropped");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_npcm7xx_emc_receiving_packet(uint32_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_emc_receiving_packet");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_npcm7xx_emc_received_packet(uint32_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_emc_received_packet");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_npcm7xx_emc_rx_done(uint32_t crxdsa){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_emc_rx_done");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,crxdsa);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_npcm7xx_emc_reg_read(int emc_num, uint32_t result, const char *name, int regno){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_emc_reg_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,b,i)" ,emc_num,result,&name,regno);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_npcm7xx_emc_reg_write(int emc_num, const char *name, int regno, uint32_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_emc_reg_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b,i,K)" ,emc_num,&name,regno,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_dp8393x_raise_irq(int isr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"dp8393x_raise_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,isr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_dp8393x_lower_irq(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"dp8393x_lower_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_dp8393x_load_cam(int idx, int cam0, int cam1, int cam2, int cam3, int cam4, int cam5){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"dp8393x_load_cam");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i,i,i,i,i)" ,idx,cam0,cam1,cam2,cam3,cam4,cam5);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_dp8393x_load_cam_done(int cen){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"dp8393x_load_cam_done");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,cen);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_dp8393x_read_rra_regs(int crba0, int crba1, int rbwc0, int rbwc1){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"dp8393x_read_rra_regs");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i,i)" ,crba0,crba1,rbwc0,rbwc1);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_dp8393x_transmit_packet(int ttda){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"dp8393x_transmit_packet");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,ttda);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_dp8393x_transmit_txlen_error(int len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"dp8393x_transmit_txlen_error");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_dp8393x_read(int reg, const char *name, int val, int size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"dp8393x_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b,i,i)" ,reg,&name,val,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_dp8393x_write(int reg, const char *name, int val, int size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"dp8393x_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b,i,i)" ,reg,&name,val,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_dp8393x_write_invalid(int reg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"dp8393x_write_invalid");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,reg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_dp8393x_write_invalid_dcr(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"dp8393x_write_invalid_dcr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_dp8393x_receive_oversize(int size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"dp8393x_receive_oversize");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_dp8393x_receive_not_netcard(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"dp8393x_receive_not_netcard");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_dp8393x_receive_packet(int crba){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"dp8393x_receive_packet");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,crba);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_dp8393x_receive_write_status(int crba){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"dp8393x_receive_write_status");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,crba);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
