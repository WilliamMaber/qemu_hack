
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_hw_char.h"

void glue_parallel_ioport_read(const char *desc, uint16_t addr, uint8_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"parallel_ioport_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,B)" ,&desc,addr,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_parallel_ioport_write(const char *desc, uint16_t addr, uint8_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"parallel_ioport_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,B)" ,&desc,addr,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_serial_read(uint16_t addr, uint8_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"serial_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B)" ,addr,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_serial_write(uint16_t addr, uint8_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"serial_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B)" ,addr,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_serial_update_parameters(uint64_t baudrate, char parity, int data_bits, int stop_bits){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"serial_update_parameters");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,b,i,i)" ,baudrate,parity,data_bits,stop_bits);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_serial_send_control_event(unsigned int port, uint16_t event, uint16_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_serial_send_control_event");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I,i,i)" ,port,event,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_serial_throttle_port(unsigned int port, bool throttle){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_serial_throttle_port");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I,p)" ,port,throttle);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_serial_handle_control_message(uint16_t event, uint16_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_serial_handle_control_message");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,event,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_serial_handle_control_message_port(unsigned int port){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_serial_handle_control_message_port");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I)" ,port);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_console_flush_buf(unsigned int port, size_t len, ssize_t ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_console_flush_buf");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I,i,i)" ,port,len,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_console_chr_read(unsigned int port, int size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_console_chr_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I,i)" ,port,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_console_chr_event(unsigned int port, int event){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_console_chr_event");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I,i)" ,port,event);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_goldfish_tty_read(void *dev, unsigned int addr, unsigned int size, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"goldfish_tty_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,I,I,K)" ,&dev,addr,size,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_goldfish_tty_write(void *dev, unsigned int addr, unsigned int size, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"goldfish_tty_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,I,I,K)" ,&dev,addr,size,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_goldfish_tty_can_receive(void *dev, unsigned int available){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"goldfish_tty_can_receive");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,I)" ,&dev,available);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_goldfish_tty_receive(void *dev, unsigned int size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"goldfish_tty_receive");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,I)" ,&dev,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_goldfish_tty_reset(void *dev){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"goldfish_tty_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&dev);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_goldfish_tty_realize(void *dev){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"goldfish_tty_realize");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&dev);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_goldfish_tty_unrealize(void *dev){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"goldfish_tty_unrealize");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&dev);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_goldfish_tty_instance_init(void *dev){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"goldfish_tty_instance_init");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&dev);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_grlib_apbuart_event(int event){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"grlib_apbuart_event");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,event);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_grlib_apbuart_writel_unknown(uint64_t addr, uint32_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"grlib_apbuart_writel_unknown");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_grlib_apbuart_readl_unknown(uint64_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"grlib_apbuart_readl_unknown");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_escc_hard_reset(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"escc_hard_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_escc_soft_reset_chn(char channel){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"escc_soft_reset_chn");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,channel);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_escc_put_queue(char channel, int b){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"escc_put_queue");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i)" ,channel,b);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_escc_get_queue(char channel, int val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"escc_get_queue");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i)" ,channel,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_escc_update_irq(int irq){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"escc_update_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,irq);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_escc_update_parameters(char channel, int speed, int parity, int data_bits, int stop_bits){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"escc_update_parameters");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,i,i,i)" ,channel,speed,parity,data_bits,stop_bits);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_escc_mem_writeb_ctrl(char channel, uint32_t reg, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"escc_mem_writeb_ctrl");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K)" ,channel,reg,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_escc_mem_writeb_data(char channel, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"escc_mem_writeb_data");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K)" ,channel,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_escc_mem_readb_ctrl(char channel, uint32_t reg, uint8_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"escc_mem_readb_ctrl");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,B)" ,channel,reg,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_escc_mem_readb_data(char channel, uint32_t ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"escc_mem_readb_data");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K)" ,channel,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_escc_serial_receive_byte(char channel, int ch){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"escc_serial_receive_byte");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i)" ,channel,ch);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_escc_sunkbd_event_in(int ch, const char *name, int down){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"escc_sunkbd_event_in");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b,i)" ,ch,&name,down);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_escc_sunkbd_event_out(int ch){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"escc_sunkbd_event_out");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,ch);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_escc_kbd_command(int val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"escc_kbd_command");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_escc_sunmouse_event(int dx, int dy, int buttons_state){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"escc_sunmouse_event");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,dx,dy,buttons_state);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pl011_irq_state(int level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pl011_irq_state");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pl011_read(uint32_t addr, uint32_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pl011_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pl011_read_fifo(int read_count){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pl011_read_fifo");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,read_count);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pl011_write(uint32_t addr, uint32_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pl011_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pl011_can_receive(uint32_t lcr, int read_count, int r){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pl011_can_receive");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i,i)" ,lcr,read_count,r);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pl011_put_fifo(uint32_t c, int read_count){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pl011_put_fifo");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i)" ,c,read_count);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pl011_put_fifo_full(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pl011_put_fifo_full");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pl011_baudrate_change(unsigned int baudrate, uint64_t clock, uint32_t ibrd, uint32_t fbrd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pl011_baudrate_change");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I,K,K,K)" ,baudrate,clock,ibrd,fbrd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cmsdk_apb_uart_read(uint64_t offset, uint64_t data, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cmsdk_apb_uart_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,offset,data,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cmsdk_apb_uart_write(uint64_t offset, uint64_t data, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cmsdk_apb_uart_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,offset,data,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cmsdk_apb_uart_reset(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cmsdk_apb_uart_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cmsdk_apb_uart_receive(uint8_t c){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cmsdk_apb_uart_receive");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,c);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cmsdk_apb_uart_tx_pending(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cmsdk_apb_uart_tx_pending");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cmsdk_apb_uart_tx(uint8_t c){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cmsdk_apb_uart_tx");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,c);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cmsdk_apb_uart_set_params(int speed){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cmsdk_apb_uart_set_params");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,speed);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nrf51_uart_read(uint64_t addr, uint64_t r, unsigned int size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nrf51_uart_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,addr,r,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nrf51_uart_write(uint64_t addr, uint64_t value, unsigned int size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nrf51_uart_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,addr,value,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_shakti_uart_read(uint64_t addr, uint16_t r, unsigned int size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"shakti_uart_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i,I)" ,addr,r,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_shakti_uart_write(uint64_t addr, uint64_t value, unsigned int size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"shakti_uart_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,addr,value,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_exynos_uart_dmabusy(uint32_t channel){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"exynos_uart_dmabusy");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,channel);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_exynos_uart_dmaready(uint32_t channel){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"exynos_uart_dmaready");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,channel);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_exynos_uart_irq_raised(uint32_t channel, uint32_t reg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"exynos_uart_irq_raised");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,channel,reg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_exynos_uart_irq_lowered(uint32_t channel){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"exynos_uart_irq_lowered");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,channel);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_exynos_uart_update_params(uint32_t channel, int speed, uint8_t parity, int data, int stop, uint64_t wordtime){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"exynos_uart_update_params");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i,B,i,i,K)" ,channel,speed,parity,data,stop,wordtime);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_exynos_uart_write(uint32_t channel, uint32_t offset, const char *name, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"exynos_uart_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,b,K)" ,channel,offset,&name,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_exynos_uart_read(uint32_t channel, uint32_t offset, const char *name, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"exynos_uart_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,b,K)" ,channel,offset,&name,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_exynos_uart_rx_fifo_reset(uint32_t channel){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"exynos_uart_rx_fifo_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,channel);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_exynos_uart_tx_fifo_reset(uint32_t channel){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"exynos_uart_tx_fifo_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,channel);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_exynos_uart_tx(uint32_t channel, uint8_t ch){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"exynos_uart_tx");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,B)" ,channel,ch);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_exynos_uart_intclr(uint32_t channel, uint32_t reg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"exynos_uart_intclr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,channel,reg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_exynos_uart_ro_write(uint32_t channel, const char *name, uint32_t reg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"exynos_uart_ro_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,b,K)" ,channel,&name,reg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_exynos_uart_rx(uint32_t channel, uint8_t ch){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"exynos_uart_rx");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,B)" ,channel,ch);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_exynos_uart_rx_error(uint32_t channel){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"exynos_uart_rx_error");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,channel);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_exynos_uart_wo_read(uint32_t channel, const char *name, uint32_t reg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"exynos_uart_wo_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,b,K)" ,channel,&name,reg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_exynos_uart_rxsize(uint32_t channel, uint32_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"exynos_uart_rxsize");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,channel,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_exynos_uart_channel_error(uint32_t channel){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"exynos_uart_channel_error");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,channel);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_exynos_uart_rx_timeout(uint32_t channel, uint32_t stat, uint32_t intsp){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"exynos_uart_rx_timeout");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,channel,stat,intsp);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cadence_uart_baudrate(unsigned baudrate){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cadence_uart_baudrate");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I)" ,baudrate);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sh_serial_read(char *id, unsigned size, uint64_t offs, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sh_serial_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,I,K,K)" ,&id,size,offs,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sh_serial_write(char *id, unsigned size, uint64_t offs, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sh_serial_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,I,K,K)" ,&id,size,offs,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
