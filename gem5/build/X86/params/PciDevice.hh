#ifndef __PARAMS__PciDevice__
#define __PARAMS__PciDevice__

class PciDevice;

#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include <cstddef>
#include "params/Platform.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"

#include "params/DmaDevice.hh"

struct PciDeviceParams
    : public DmaDeviceParams
{
    uint16_t VendorID;
    uint16_t MSIXMsgCtrl;
    uint8_t HeaderType;
    uint8_t PMCAPNextCapability;
    uint32_t BAR2Size;
    int pci_dev;
    uint16_t MSICAPMsgCtrl;
    uint8_t InterruptPin;
    uint32_t MSICAPMsgAddr;
    uint32_t BAR5Size;
    uint16_t PMCAPCtrlStatus;
    uint16_t SubsystemID;
    uint8_t PXCAPCapId;
    uint32_t CardbusCIS;
    uint8_t MinimumGrant;
    uint8_t MSIXCAPNextCapability;
    uint16_t PXCAPLinkCtrl;
    uint8_t Revision;
    uint16_t Status;
    uint8_t MSICAPBaseOffset;
    Addr LegacyIOBase;
    bool BAR2LegacyIO;
    uint32_t BAR0Size;
    Tick pio_latency;
    uint8_t LatencyTimer;
    bool BAR1LegacyIO;
    Platform * platform;
    uint8_t PXCAPNextCapability;
    bool BAR4LegacyIO;
    uint8_t CapabilityPtr;
    uint8_t PMCAPBaseOffset;
    uint32_t PXCAPLinkCap;
    uint8_t MSIXCAPBaseOffset;
    uint32_t PXCAPDevCap2;
    uint32_t PXCAPDevCtrl2;
    uint32_t MSICAPPendingBits;
    uint16_t SubsystemVendorID;
    uint8_t MSIXCAPCapId;
    uint32_t BAR3Size;
    uint32_t MSIXTableOffset;
    uint32_t MSICAPMsgUpperAddr;
    uint8_t MSICAPCapId;
    Tick config_latency;
    uint8_t MaximumLatency;
    uint16_t PXCAPDevCtrl;
    bool BAR0LegacyIO;
    uint32_t MSICAPMaskBits;
    uint16_t MSICAPMsgData;
    uint16_t PMCAPCapabilities;
    uint16_t DeviceID;
    uint8_t ProgIF;
    uint8_t SubClassCode;
    uint16_t PXCAPLinkStatus;
    int pci_func;
    uint32_t BAR4Size;
    uint16_t PXCAPDevStatus;
    uint32_t BAR1;
    uint32_t BAR0;
    uint32_t BAR3;
    uint32_t BAR2;
    uint32_t BAR5;
    uint32_t BAR4;
    uint8_t ClassCode;
    uint8_t PXCAPBaseOffset;
    uint8_t PMCAPCapId;
    uint8_t BIST;
    bool BAR5LegacyIO;
    uint32_t PXCAPDevCapabilities;
    uint8_t MSICAPNextCapability;
    uint32_t ExpansionROM;
    uint16_t PXCAPCapabilities;
    bool BAR3LegacyIO;
    uint8_t CacheLineSize;
    uint32_t MSIXPbaOffset;
    uint16_t Command;
    int pci_bus;
    uint8_t InterruptLine;
    uint32_t BAR1Size;
    unsigned int port_config_connection_count;
};

#endif // __PARAMS__PciDevice__
