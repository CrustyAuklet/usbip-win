#pragma once

#define DRVPREFIX	"usbip_stub"
#include "dbgcommon.h"
#include "dbgcode.h"

#ifdef DBG

#include "stub_dev.h"

#define DBG_GENERAL	0x00000001
#define DBG_DISPATCH	0x00000010
#define DBG_DEV		0x00000100
#define DBG_IOCTL	0x00001000
#define DBG_PNP		0x00010000
#define DBG_POWER	0x00100000

const char *dbg_device(PDEVICE_OBJECT devobj);
const char *dbg_devices(PDEVICE_OBJECT devobj, BOOLEAN is_attached);
const char *dbg_devstub(usbip_stub_dev_t *devstub);
const char *dbg_devstub_confdescs(usbip_stub_dev_t *devstub);

const char *dbg_stub_ioctl_code(ULONG ioctl_code);

#endif
