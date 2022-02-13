void glue_qauthz_simple_is_allowed(void *authz, const char *wantidentity, const char *gotidentity);
void glue_qauthz_list_check_rule(void *authz, const char *identity, const char *rule, int format, int policy);
void glue_qauthz_list_default_policy(void *authz, const char *identity, int policy);
void glue_qauthz_list_file_load(void *authz, const char *filename);
void glue_qauthz_list_file_refresh(void *authz, const char *filename, int success);
void glue_qauthz_pam_check(void *authz, const char *identity, const char *service);
