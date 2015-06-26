/******************************************************************************
 * FileName: wdt.h
 * Description: Alternate SDK (libmain.a)
 * Author: PV`
 * (c) PV` 2015
 * ver 0.0.0 (b0)
*******************************************************************************/

#ifndef _INCLUDE_WDT_H_
#define _INCLUDE_WDT_H_

#include "ets_sys.h"
#include "fatal_errs.h"


#if SDK_VERSION >= 1119 // (SDK 1.1.1..1.1.2)
void wdt_init(int flg);
#else
void wdt_init(void);
void wdt_feed(void);
void wdt_task(ETSEvent *e);
#endif

void default_exception_handler(void);
void store_exception_error(uint32_t errn);

void os_print_reset_error(void);


#endif /* _INCLUDE_WDT_H_ */
