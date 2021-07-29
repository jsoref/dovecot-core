#ifndef DOVEADM_PROTOCOL_H
#define DOVEADM_PROTOCOL_H

#define DOVEADM_SERVER_PROTOCOL_VERSION_MAJOR 1
#define DOVEADM_SERVER_PROTOCOL_VERSION_MINOR 3
#define DOVEADM_SERVER_PROTOCOL_VERSION_LINE "VERSION\tdoveadm-server\t1\t3"
#define DOVEADM_CLIENT_PROTOCOL_VERSION_LINE "VERSION\tdoveadm-client\t1\t3"
#define DOVEADM_TCP_CONNECT_TIMEOUT_SECS 30

#define DOVEADM_EX_NOTFOUND EX_NOHOST
#define DOVEADM_EX_NOTPOSSIBLE EX_DATAERR
#define DOVEADM_EX_UNKNOWN -1

#define DOVEADM_EX_NOREPLICATE 1001
#define DOVEADM_EX_REFERRAL 1002

const char *doveadm_exit_code_to_str(int code);
int doveadm_str_to_exit_code(const char *reason);

char doveadm_log_type_to_char(enum log_type type) ATTR_PURE;
bool doveadm_log_type_from_char(char c, enum log_type *type_r);

#endif
