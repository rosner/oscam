
#ifndef AZBOX_H_
#define AZBOX_H_

#include <sys/ioctl.h>

#include "openxcas/openxcas_api.h"
#include "openxcas/openxcas_message.h"
#include "openxcas/openxcas_smartcard.h"

typedef enum {
  T0,
  T1,
  T14
} xcas_sc_type;

int xcas_sc_open(void);
int xcas_sc_read(int rfd, unsigned char *buf, int l);
int xcas_sc_write(int rfd, unsigned char *buf, int l);
int xcas_sc_get_atr(int rfd, unsigned char *atr);
int xcas_sc_reset(int rfd);
int xcas_sc_set_type(int rfd, xcas_sc_type type);
int xcas_sc_close(int rfd);

#endif /* AZBOX_H_ */
