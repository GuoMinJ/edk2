/** @file
  Just for USB debug
**/

#ifndef __USB_DEBUG_H__
#define __USB_DEBUG_H__

#include <Uefi/UefiBaseType.h>
#include <Protocol/Usb2HostController.h>

// {93B27E3A-15E0-40EF-A578-2C49AD377730}
#define USB_HC_DEBUG_PROT_GUID \
    {0x93b27e3a, 0x15e0, 0x40ef, 0xa5, 0x78, 0x2c, 0x49, 0xad, 0x37, 0x77, 0x30}

// {CC1DD3D8-CDE3-41B9-B7D5-74DAFEFDF25B}
#define USB_IO_DEBUG_PROT_GUID \
    {0xcc1dd3d8, 0xcde3, 0x41b9, 0xb7, 0xd5, 0x74, 0xda, 0xfe, 0xfd, 0xf2, 0x5b}

typedef struct _USB_IO_DEBUG_PROTOCOL USB_IO_DEBUG_PROTOCOL;
typedef struct _USB_HC_DEBUG_PROTOCOL USB_HC_DEBUG_PROTOCOL;

typedef
VOID
(*USB_IO_PRINT)(
  IN EFI_USB_IO_PROTOCOL *UsbIoInstance
  );

typedef
VOID
(*USB_HC_PRINT)(
  IN EFI_USB2_HC_PROTOCOL *UsbHcInstance
  );

struct _USB_IO_DEBUG_PROTOCOL {
  USB_IO_PRINT  UsbIoPrint;
};

struct _USB_HC_DEBUG_PROTOCOL {
  USB_HC_PRINT  UsbHcPrint;
};

VOID
UsbIoPrint (
  IN  EFI_USB_IO_PROTOCOL *UsbIoInstance
  );

VOID
XhcHcPrint (
  IN EFI_USB2_HC_PROTOCOL *HcInstance
  );

#endif
