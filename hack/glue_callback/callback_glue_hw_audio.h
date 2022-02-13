void glue_cs4231_mem_readl_dreg(uint32_t reg, uint32_t ret);
void glue_cs4231_mem_readl_reg(uint32_t reg, uint32_t ret);
void glue_cs4231_mem_writel_reg(uint32_t reg, uint32_t old, uint32_t val);
void glue_cs4231_mem_writel_dreg(uint32_t reg, uint32_t old, uint32_t val);
void glue_hda_audio_running(const char *stream, int nr, bool running);
void glue_hda_audio_format(const char *stream, int chan, const char *fmt, int freq);
void glue_hda_audio_adjust(const char *stream, int pos);
void glue_hda_audio_overrun(const char *stream);
