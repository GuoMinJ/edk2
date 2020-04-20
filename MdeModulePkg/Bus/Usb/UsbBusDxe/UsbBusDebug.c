#include "UsbBus.h"
#include <Protocol/UsbDebug.h>

EFI_GUID gUsbHcDebugProtGuid = USB_HC_DEBUG_PROT_GUID;
EFI_GUID gUsbIoDebugProtGuid = USB_IO_DEBUG_PROT_GUID;

USB_IO_DEBUG_PROTOCOL gUsbIoDebugProt = {
  UsbIoPrint
} ;

/**
  Print USB IO message
**/
VOID
UsbIoPrint (
  IN  EFI_USB_IO_PROTOCOL *UsbIoInstance
  )
{
  EFI_STATUS              Status;
  USB_DEVICE              *Dev;
  USB_INTERFACE           *UsbIf;
  USB_HC_DEBUG_PROTOCOL   *UsbHcDebugProt;

  UsbIf  = USB_INTERFACE_FROM_USBIO (UsbIoInstance);
  Dev    = UsbIf->Device;

  ASSERT (Dev->Bus->Usb2Hc != NULL);

  Status = gBS->LocateProtocol (&gUsbHcDebugProtGuid, NULL, &UsbHcDebugProt);
  DEBUG ((DEBUG_INFO, "guomin: Locate UsbHcDebugPort %r\n", Status));
  if (EFI_ERROR(Status)) {
    return;
  }

  UsbHcDebugProt->UsbHcPrint (Dev->Bus->Usb2Hc);
}

/**
  Install UsbIoPrint protocol
**/
VOID
InstallUsbIoPrintProt (
  VOID
  )
{
  EFI_HANDLE  Handle = NULL;
  EFI_STATUS  Status ;

  Status = gBS->InstallMultipleProtocolInterfaces (&Handle,
                           &gUsbIoDebugProtGuid, &gUsbIoDebugProt,
                           NULL);
}
