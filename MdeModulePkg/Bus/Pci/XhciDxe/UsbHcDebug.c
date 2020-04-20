#include "Xhci.h"
#include <Protocol/UsbDebug.h>

EFI_GUID  gUsbHcDebugProtGuid = USB_HC_DEBUG_PROT_GUID ;

USB_HC_DEBUG_PROTOCOL gXhciDebugProt = {
  XhcHcPrint
};

/**
  Print the Host Controller detail
**/
VOID
XhcHcPrint (
  IN EFI_USB2_HC_PROTOCOL *HcInstance
  )
{
  USB_XHCI_INSTANCE  *Xhc;

  Xhc             = XHC_FROM_THIS (HcInstance);
  DEBUG ((DEBUG_INFO, "guomin: XHCI message ============================================\n"));
  DEBUG ((DEBUG_INFO, "USB_XHCI_INSTANCE = 0x%X\n", sizeof(USB_XHCI_INSTANCE)));
  DEBUG ((DEBUG_INFO, " +0x%p Signature\n", &((USB_XHCI_INSTANCE*)0)->Signature));
  DEBUG ((DEBUG_INFO, " +0x%p PciIo\n",     &((USB_XHCI_INSTANCE*)0)->PciIo));
  DEBUG ((DEBUG_INFO, " +0x%p OriginalPciAttributes\n", &((USB_XHCI_INSTANCE*)0)->OriginalPciAttributes));
  DEBUG ((DEBUG_INFO, " +0x%p MemPool\n", &((USB_XHCI_INSTANCE*)0)->MemPool));
  DEBUG ((DEBUG_INFO, " +0x%p Usb2Hc\n", &((USB_XHCI_INSTANCE*)0)->Usb2Hc));
  DEBUG ((DEBUG_INFO, " +0x%p DevicePath\n", &((USB_XHCI_INSTANCE*)0)->DevicePath));
  DEBUG ((DEBUG_INFO, " +0x%p ExitBootServiceEvent\n", &((USB_XHCI_INSTANCE*)0)->ExitBootServiceEvent));
  DEBUG ((DEBUG_INFO, " +0x%p PollTimer\n", &((USB_XHCI_INSTANCE*)0)->PollTimer));
  DEBUG ((DEBUG_INFO, " +0x%p AsyncIntTransfers\n", &((USB_XHCI_INSTANCE*)0)->AsyncIntTransfers));
  DEBUG ((DEBUG_INFO, " +0x%p CapLength\n", &((USB_XHCI_INSTANCE*)0)->CapLength));
  DEBUG ((DEBUG_INFO, " +0x%p HcSParams1\n", &((USB_XHCI_INSTANCE*)0)->HcSParams1));
  DEBUG ((DEBUG_INFO, " +0x%p HcSParams2\n", &((USB_XHCI_INSTANCE*)0)->HcSParams2));
  DEBUG ((DEBUG_INFO, " +0x%p HcCParams\n", &((USB_XHCI_INSTANCE*)0)->HcCParams));
  DEBUG ((DEBUG_INFO, " +0x%p DBOff\n", &((USB_XHCI_INSTANCE*)0)->DBOff));
  DEBUG ((DEBUG_INFO, " +0x%p RTSOff\n", &((USB_XHCI_INSTANCE*)0)->RTSOff));
  DEBUG ((DEBUG_INFO, " +0x%p MaxInterrupt\n", &((USB_XHCI_INSTANCE*)0)->MaxInterrupt));
  DEBUG ((DEBUG_INFO, " +0x%p PageSize\n", &((USB_XHCI_INSTANCE*)0)->PageSize));
  DEBUG ((DEBUG_INFO, " +0x%p ScratchBuf\n", &((USB_XHCI_INSTANCE*)0)->ScratchBuf));
  DEBUG ((DEBUG_INFO, " +0x%p ScratchMap\n", &((USB_XHCI_INSTANCE*)0)->ScratchMap));
  DEBUG ((DEBUG_INFO, " +0x%p MaxScratchpadBufs\n", &((USB_XHCI_INSTANCE*)0)->MaxScratchpadBufs));
  DEBUG ((DEBUG_INFO, " +0x%p ScratchEntry\n", &((USB_XHCI_INSTANCE*)0)->ScratchEntry));
  DEBUG ((DEBUG_INFO, " +0x%p ScratchEntryMap\n", &((USB_XHCI_INSTANCE*)0)->ScratchEntryMap));
  DEBUG ((DEBUG_INFO, " +0x%p ExtCapRegBase\n", &((USB_XHCI_INSTANCE*)0)->ExtCapRegBase));
  DEBUG ((DEBUG_INFO, " +0x%p UsbLegSupOffset\n", &((USB_XHCI_INSTANCE*)0)->UsbLegSupOffset));
  DEBUG ((DEBUG_INFO, " +0x%p DebugCapSupOffset\n", &((USB_XHCI_INSTANCE*)0)->DebugCapSupOffset));
  DEBUG ((DEBUG_INFO, " +0x%p DCBAA\n", &((USB_XHCI_INSTANCE*)0)->DCBAA));
  DEBUG ((DEBUG_INFO, " +0x%p DCBAAMap\n", &((USB_XHCI_INSTANCE*)0)->DCBAAMap));
  DEBUG ((DEBUG_INFO, " +0x%p MaxSlotsEn\n", &((USB_XHCI_INSTANCE*)0)->MaxSlotsEn));
  DEBUG ((DEBUG_INFO, " +0x%p PendingUrb\n", &((USB_XHCI_INSTANCE*)0)->PendingUrb));
  DEBUG ((DEBUG_INFO, " +0x%p CmdRing\n", &((USB_XHCI_INSTANCE*)0)->CmdRing));
  DEBUG ((DEBUG_INFO, " +0x%p EventRing\n", &((USB_XHCI_INSTANCE*)0)->EventRing));
  DEBUG ((DEBUG_INFO, " +0x%p ControllerNameTable\n", &((USB_XHCI_INSTANCE*)0)->ControllerNameTable));
  DEBUG ((DEBUG_INFO, " +0x%p UsbDevContext[256]\n", &((USB_XHCI_INSTANCE*)0)->UsbDevContext[0]));
  DEBUG ((DEBUG_INFO, " +0x%p Support64BitDma\n\n", &((USB_XHCI_INSTANCE*)0)->Support64BitDma));
  DEBUG ((DEBUG_INFO, "USB_DEV_CONTEXT = 0x%X\n", sizeof(USB_DEV_CONTEXT)));
  DEBUG ((DEBUG_INFO, " +0x%p Enabled\n", &((USB_DEV_CONTEXT*)0)->Enabled));
  DEBUG ((DEBUG_INFO, " +0x%p SlotId\n", &((USB_DEV_CONTEXT*)0)->SlotId));
  DEBUG ((DEBUG_INFO, " +0x%p RouteString\n", &((USB_DEV_CONTEXT*)0)->RouteString));
  DEBUG ((DEBUG_INFO, " +0x%p ParentRouteString\n", &((USB_DEV_CONTEXT*)0)->ParentRouteString));
  DEBUG ((DEBUG_INFO, " +0x%p XhciDevAddr\n", &((USB_DEV_CONTEXT*)0)->XhciDevAddr));
  DEBUG ((DEBUG_INFO, " +0x%p BusDevAddr\n", &((USB_DEV_CONTEXT*)0)->BusDevAddr));
  DEBUG ((DEBUG_INFO, " +0x%p InputContext\n", &((USB_DEV_CONTEXT*)0)->InputContext));
  DEBUG ((DEBUG_INFO, " +0x%p OutputContext\n", &((USB_DEV_CONTEXT*)0)->OutputContext));
  DEBUG ((DEBUG_INFO, " +0x%p EndpointTransferRing[31]\n", &((USB_DEV_CONTEXT*)0)->EndpointTransferRing[0]));
  DEBUG ((DEBUG_INFO, " +0x%p DevDesc\n", &((USB_DEV_CONTEXT*)0)->DevDesc));
  DEBUG ((DEBUG_INFO, " +0x%p ConfDesc\n", &((USB_DEV_CONTEXT*)0)->ConfDesc));
  DEBUG ((DEBUG_INFO, " +0x%p ActiveConfiguration\n", &((USB_DEV_CONTEXT*)0)->ActiveConfiguration));
  DEBUG ((DEBUG_INFO, " +0x%p ActiveAlternateSetting\n\n", &((USB_DEV_CONTEXT*)0)->ActiveAlternateSetting));

  for (UINT32 Idx = 0; Idx < (sizeof(USB_XHCI_INSTANCE) - 1); Idx++) {
    if ((Idx % 16) == 0) {
      DEBUG ((DEBUG_INFO, "%08X: ", Idx));
    }
    if (((Idx + 1) % 16) == 0) {
      DEBUG ((DEBUG_INFO, "%02X\n", *(((UINT8*)Xhc) + Idx)));
    } else if (((Idx + 1) % 8) == 0) {
      DEBUG ((DEBUG_INFO, "%02X-", *(((UINT8*)Xhc) + Idx)));
    } else {
      DEBUG ((DEBUG_INFO, "%02X ", *(((UINT8*)Xhc) + Idx)));
    }
  }
  DEBUG ((DEBUG_INFO, "%02X\n", *(((UINT8*)Xhc) + sizeof(USB_XHCI_INSTANCE) - 1)));
}

/**
  Install debug protocol
**/
VOID
InstallUsbHcProt (
  VOID
  )
{
  EFI_HANDLE  Handle = NULL;
  EFI_STATUS  Status ;

  Status = gBS->InstallMultipleProtocolInterfaces (&Handle,
                           &gUsbHcDebugProtGuid, &gXhciDebugProt,
                           NULL) ;
  DEBUG ((DEBUG_INFO, "guomin: Install XhciDebugPort %r\n", Status));
}
