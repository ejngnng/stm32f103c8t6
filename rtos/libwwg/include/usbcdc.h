/* libusbcdc header
 * Warren W. Gay VE3WWG
 */
#ifndef LIBUSBCDC_H
#define LIBUSBCDC_H

#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

void usb_start(bool gpio_init);
int usb_ready(void);
int usb_set_cooked(int cooked);

void usb_putc(char ch);
void usb_puts(const char *buf);
int usb_vprintf(const char *format,va_list ap);

int usb_printf(const char *format,...);

int usb_getc(void);
int usb_peek(void);
int usb_gets(char *buf,unsigned maxbuf);

#endif /* LIBUSBCDC_H */

/* End libusbcdc.h */
