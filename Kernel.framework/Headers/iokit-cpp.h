#ifndef _KERNEL_IOKIT_CPP_H_
#define _KERNEL_IOKIT_CPP_H_

#include "types.h"

#ifdef __cplusplus

/* Forward declarations */
class IOBigMemoryCursor;
class IOBufferMemoryDescriptor;
class IOCPU;
class IOCPUInterruptController;
class IOCatalogue;
class IOCommand;
class IOCommandGate;
class IOCommandPool;
class IOConditionLock;
class IODMACommand;
class IODMAController;
class IODMAEventSource;
class IODTNVRAM;
class IODTPlatformExpert;
class IODataQueue;
class IODeviceMemory;
class IOEventSource;
class IOFilterInterruptEventSource;
class IOGeneralMemoryDescriptor;
class IOHistogramReporter;
class IOInterleavedMemoryDescriptor;
class IOInterruptController;
class IOInterruptEventSource;
class IOKitDiagnostics;
class IOLittleMemoryCursor;
class IOMachPort;
class IOMapper;
class IOMemoryCursor;
class IOMemoryDescriptor;
class IOMemoryMap;
class IOMultiMemoryDescriptor;
class IONVRAMController;
class IONaturalMemoryCursor;
class IONotifier;
class IOPMPowerSource;
class IOPMPowerSourceList;
class IOPMinformee;
class IOPMinformeeList;
class IOPMprot;
class IOPMrootDomain;
class IOPlatformDevice;
class IOPlatformExpert;
class IOPolledInterface;
class IOPowerConnection;
class IORangeAllocator;
class IORegistryEntry;
class IORegistryIterator;
class IORegistryPlane;
class IOReportLegend;
class IOReporter;
class IOResources;
class IORootParent;
class IOService;
class IOSharedDataQueue;
class IOSharedInterruptController;
class IOSimpleReporter;
class IOStateReporter;
class IOSubMemoryDescriptor;
class IOTimerEventSource;
class IOUserClient;
class IOUserNotification;
class IOWatchDogTimer;
class IOWorkLoop;
class OSArray;
class OSBoolean;
class OSCollection;
class OSCollectionIterator;
class OSData;
class OSDictionary;
class OSIterator;
class OSMetaClass;
class OSMetaClassBase;
class OSMetaClassMeta;
class OSNumber;
class OSObject;
class OSOrderedSet;
class OSSerialize;
class OSSerializer;
class OSSet;
class OSString;
class OSSymbol;
class OSSymbolPool;
class RootDomainUserClient;
class _IOOpenServiceIterator;
class _IOServiceInterestNotifier;
class _IOServiceJob;
class _IOServiceNotifier;
class IOAddressRange;
class IODMAMapSpecification;
class IOExternalMethodArguments;
class IOExternalMethodDispatch;
class IOHistogramSegmentConfig;
class IOInterruptVector;
class IONVRAMDescriptor;
class IOPMPowerState;
class IOPhysicalRange;
class IOReportChannelList;
class IOReportElementValues;
class IOVirtualRange;
class InitElement;
class OSSymbolPoolState;
class PE_Video;

/* IOKit types */
typedef int IOReturn;
typedef unsigned int IOOptionBits;
typedef unsigned long IOByteCount;
typedef unsigned long IOPhysicalAddress;
typedef unsigned long IOVirtualAddress;
typedef unsigned int IODirection;
typedef uint64_t AbsoluteTime;
typedef unsigned int IOReportChannelType;

/* Forward-declared kernel structs */
struct task;
struct ipc_port;
struct _vm_map;
struct upl_page_info;
struct semaphore;
struct mach_timespec { unsigned int tv_sec; int tv_nsec; };
struct IOExternalMethod { void *object; void *func; unsigned int count0; unsigned int type0; unsigned int count1; unsigned int type1; };
struct IOExternalTrap { void *object; void *func; };

/* Inner type stubs for correct mangling */
namespace _iokit_inner {
    struct PhysicalSegment { unsigned long location; unsigned long length; };
    struct Segment64 { uint64_t fIOVMAddr; uint64_t fLength; };
    typedef unsigned long MappingOptions;
    struct InitElement { unsigned long start; unsigned long length; };
    typedef unsigned int valueSelector;
}

class OSMetaClassBase {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    OSMetaClassBase();
    ~OSMetaClassBase();

    int checkTypeInst(OSMetaClassBase const*, OSMetaClassBase const*);
    bool isEqualTo(OSMetaClassBase const*) const;
    OSMetaClassBase * metaCast(OSMetaClass const*) const;
    OSMetaClassBase * metaCast(OSString const*) const;
    OSMetaClassBase * metaCast(OSSymbol const*) const;
    OSMetaClassBase * metaCast(char const*) const;
    int safeMetaCast(OSMetaClassBase const*, OSMetaClass const*);
};

class OSObject : public OSMetaClassBase {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    OSObject(OSMetaClass const*);
    OSObject();
    ~OSObject();

    void free();
    int getMetaClass() const;
    int getRetainCount() const;
    bool init();
    void operator delete(void*, unsigned long);
    void * operator new(unsigned long);
    void release(int) const;
    void release() const;
    void retain() const;
    bool serialize(OSSerialize*) const;
    void taggedRelease(void const*) const;
    void taggedRelease(void const*, int) const;
    void taggedRetain(void const*) const;
};

class IOMemoryCursor : public OSObject {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IOMemoryCursor(OSMetaClass const*);
    IOMemoryCursor();
    ~IOMemoryCursor();

    int genPhysicalSegments(IOMemoryDescriptor*, unsigned long, void*, unsigned long, unsigned long, unsigned long*);
    int getMetaClass() const;
    int initWithSpecification(void (*)(_iokit_inner::PhysicalSegment, void*, unsigned long), unsigned long, unsigned long, unsigned long);
    static IOMemoryCursor * withSpecification(void (*)(_iokit_inner::PhysicalSegment, void*, unsigned long), unsigned long, unsigned long, unsigned long);
};

class IOBigMemoryCursor : public IOMemoryCursor {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IOBigMemoryCursor(OSMetaClass const*);
    IOBigMemoryCursor();
    ~IOBigMemoryCursor();

    int getMetaClass() const;
    int initWithSpecification(unsigned long, unsigned long, unsigned long);
    int outputSegment(_iokit_inner::PhysicalSegment, void*, unsigned long);
    static IOBigMemoryCursor * withSpecification(unsigned long, unsigned long, unsigned long);
};

class IOMemoryDescriptor : public OSObject {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IOMemoryDescriptor(OSMetaClass const*);
    ~IOMemoryDescriptor();

    void addMapping(IOMemoryMap*);
    IOMemoryMap * createMappingInTask(task*, unsigned long long, unsigned long, unsigned long long, unsigned long long);
    int dmaCommandOperation(unsigned long, void*, unsigned int) const;
    int doMap(_vm_map*, unsigned int*, unsigned long, unsigned long, unsigned long);
    int doUnmap(_vm_map*, unsigned int, unsigned long);
    void free();
    int getDirection() const;
    uint64_t getLength() const;
    int getMetaClass() const;
    unsigned int getPageCounts(unsigned long*, unsigned long*);
    uint64_t getPhysicalAddress();
    uint64_t getPhysicalSegment(unsigned long, unsigned long*);
    uint64_t getPhysicalSegment(unsigned long, unsigned long*, unsigned long);
    int getPhysicalSegment64(unsigned long, unsigned long*);
    int getPreparationID();
    int getSourceSegment(unsigned long, unsigned long*);
    int getTag();
    int getVirtualSegment(unsigned long, unsigned long*);
    bool initWithAddress(void*, unsigned long, IODirection);
    bool initWithAddress(unsigned int, unsigned long, IODirection, task*);
    bool initWithOptions(void*, unsigned long, unsigned long, task*, unsigned long, IOMapper*);
    bool initWithPhysicalAddress(unsigned long, unsigned long, IODirection);
    int initWithPhysicalRanges(IOPhysicalRange*, unsigned long, IODirection, bool);
    int initWithRanges(IOVirtualRange*, unsigned long, IODirection, task*, bool);
    int initialize();
    int makeMapping(IOMemoryDescriptor*, task*, unsigned int, unsigned long, unsigned long, unsigned long);
    IOMemoryMap * map(task*, unsigned int, unsigned long, unsigned long, unsigned long);
    IOMemoryMap * map(unsigned long);
    int performOperation(unsigned long, unsigned long, unsigned long);
    uint64_t readBytes(unsigned long, void*, unsigned long);
    int redirect(task*, bool);
    void removeMapping(IOMemoryMap*);
    int setMapping(task*, unsigned int, unsigned long);
    void setPurgeable(unsigned long, unsigned long*);
    void setTag(unsigned long);
    static IOMemoryDescriptor * withAddress(void*, unsigned long, IODirection);
    static IOMemoryDescriptor * withAddress(unsigned int, unsigned long, IODirection, task*);
    static IOMemoryDescriptor * withAddressRange(unsigned long long, unsigned long long, unsigned long, task*);
    static IOMemoryDescriptor * withAddressRanges(IOAddressRange*, unsigned long, unsigned long, task*);
    static IOMemoryDescriptor * withOptions(void*, unsigned long, unsigned long, task*, unsigned long, IOMapper*);
    static IOMemoryDescriptor * withPersistentMemoryDescriptor(IOMemoryDescriptor*);
    static IOMemoryDescriptor * withPhysicalAddress(unsigned long, unsigned long, IODirection);
    static IOMemoryDescriptor * withPhysicalRanges(IOPhysicalRange*, unsigned long, IODirection, bool);
    static IOMemoryDescriptor * withRanges(IOVirtualRange*, unsigned long, IODirection, task*, bool);
    static IOMemoryDescriptor * withSubRange(IOMemoryDescriptor*, unsigned long, unsigned long, IODirection);
    uint64_t writeBytes(unsigned long, void const*, unsigned long);
};

class IOBufferMemoryDescriptor : public IOMemoryDescriptor {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IOBufferMemoryDescriptor(OSMetaClass const*);
    IOBufferMemoryDescriptor();
    ~IOBufferMemoryDescriptor();

    bool appendBytes(void const*, unsigned int);
    void free();
    void * getBytesNoCopy(unsigned int, unsigned int);
    void * getBytesNoCopy();
    unsigned int getCapacity() const;
    int getMetaClass() const;
    int getVirtualSegment(unsigned long, unsigned long*);
    int inTaskWithOptions(task*, unsigned long, unsigned int, unsigned int);
    int inTaskWithPhysicalMask(task*, unsigned long, unsigned long long, unsigned long long);
    bool initWithBytes(void const*, unsigned int, IODirection, bool);
    bool initWithOptions(unsigned long, unsigned int, unsigned int);
    bool initWithOptions(unsigned long, unsigned int, unsigned int, task*);
    int initWithPhysicalMask(task*, unsigned long, unsigned long long, unsigned long long, unsigned long long);
    void setDirection(IODirection);
    void setLength(unsigned int);
    static IOBufferMemoryDescriptor * withBytes(void const*, unsigned int, IODirection, bool);
    static IOBufferMemoryDescriptor * withCapacity(unsigned int, IODirection, bool);
    static IOBufferMemoryDescriptor * withOptions(unsigned long, unsigned int, unsigned int);
};

class IORegistryEntry : public OSObject {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IORegistryEntry(OSMetaClass const*);
    IORegistryEntry();
    ~IORegistryEntry();

    void applyToChildren(void (*)(IORegistryEntry*, void*), void*, IORegistryPlane const*) const;
    void applyToParents(void (*)(IORegistryEntry*, void*), void*, IORegistryPlane const*) const;
    bool attachToChild(IORegistryEntry*, IORegistryPlane const*);
    bool attachToParent(IORegistryEntry*, IORegistryPlane const*);
    int breakLink(IORegistryEntry*, unsigned int, IORegistryPlane const*) const;
    int childFromPath(char const*, IORegistryPlane const*, char*, int*);
    bool compareName(OSString*, OSString**) const;
    int compareNames(OSObject*, OSString**) const;
    int copyChildEntry(IORegistryPlane const*) const;
    OSString * copyLocation(IORegistryPlane const*) const;
    OSString * copyName(IORegistryPlane const*) const;
    int copyParentEntry(IORegistryPlane const*) const;
    OSObject * copyProperty(OSString const*) const;
    OSObject * copyProperty(OSString const*, IORegistryPlane const*, unsigned long) const;
    OSObject * copyProperty(OSSymbol const*) const;
    OSObject * copyProperty(OSSymbol const*, IORegistryPlane const*, unsigned long) const;
    OSObject * copyProperty(char const*) const;
    OSObject * copyProperty(char const*, IORegistryPlane const*, unsigned long) const;
    int dealiasPath(char const**, IORegistryPlane const*);
    void detachAbove(IORegistryPlane const*);
    int detachAll(IORegistryPlane const*);
    void detachFromChild(IORegistryEntry*, IORegistryPlane const*);
    void detachFromParent(IORegistryEntry*, IORegistryPlane const*);
    int dictionaryWithProperties() const;
    void free();
    int fromPath(char const*, IORegistryPlane const*, char*, int*, IORegistryEntry*);
    IORegistryEntry * getChildEntry(IORegistryPlane const*) const;
    int getChildFromComponent(char const**, IORegistryPlane const*);
    OSIterator * getChildIterator(IORegistryPlane const*) const;
    int getChildSetReference(IORegistryPlane const*) const;
    unsigned int getDepth(IORegistryPlane const*) const;
    unsigned int getGenerationCount();
    const char * getLocation(IORegistryPlane const*) const;
    int getMetaClass() const;
    const char * getName(IORegistryPlane const*) const;
    IORegistryEntry * getParentEntry(IORegistryPlane const*) const;
    OSIterator * getParentIterator(IORegistryPlane const*) const;
    int getParentSetReference(IORegistryPlane const*) const;
    bool getPath(char*, int*, IORegistryPlane const*) const;
    int getPathComponent(char*, int*, IORegistryPlane const*) const;
    int getPlane(char const*);
    OSObject * getProperty(OSString const*) const;
    OSObject * getProperty(OSString const*, IORegistryPlane const*, unsigned long) const;
    OSObject * getProperty(OSSymbol const*) const;
    OSObject * getProperty(OSSymbol const*, IORegistryPlane const*, unsigned long) const;
    OSObject * getProperty(char const*) const;
    OSObject * getProperty(char const*, IORegistryPlane const*, unsigned long) const;
    OSDictionary * getPropertyTable() const;
    uint64_t getRegistryEntryID();
    IORegistryEntry * getRegistryRoot();
    int hasAlias(IORegistryPlane const*, char*, int*) const;
    int inPlane(IORegistryPlane const*) const;
    bool init(OSDictionary*);
    bool init(IORegistryEntry*, IORegistryPlane const*);
    int initialize();
    bool isChild(IORegistryEntry*, IORegistryPlane const*, bool) const;
    bool isParent(IORegistryEntry*, IORegistryPlane const*, bool) const;
    int makeLink(IORegistryEntry*, unsigned int, IORegistryPlane const*) const;
    int makePlane(char const*);
    int matchPathLocation(char const*, IORegistryPlane const*);
    void removeProperty(OSString const*);
    void removeProperty(OSSymbol const*);
    void removeProperty(char const*);
    int runPropertyAction(int (*)(OSObject*, void*, void*, void*, void*), OSObject*, void*, void*, void*, void*);
    bool serializeProperties(OSSerialize*) const;
    void setLocation(OSSymbol const*, IORegistryPlane const*);
    void setLocation(char const*, IORegistryPlane const*);
    void setName(OSSymbol const*, IORegistryPlane const*);
    void setName(char const*, IORegistryPlane const*);
    void setProperties(OSObject*);
    bool setProperty(OSString const*, OSObject*);
    bool setProperty(OSSymbol const*, OSObject*);
    bool setProperty(char const*, OSObject*);
    bool setProperty(char const*, void*, unsigned int);
    bool setProperty(char const*, char const*);
    bool setProperty(char const*, bool);
    bool setProperty(char const*, unsigned long long, unsigned int);
    void setPropertyTable(OSDictionary*);
};

class IOService : public IORegistryEntry {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IOService(OSMetaClass const*);
    IOService();
    ~IOService();

    int PM_Clamp_Timer_Expired();
    int PM_idle_timer_expiration();
    void PMfree();
    void PMinit();
    void PMstop();
    int _adjustBusy(long);
    int ack_timer_ticked();
    int acknowledgeNotification(void*, unsigned long);
    int acknowledgePowerChange(IOService*);
    int acknowledgeSetPowerState();
    bool activityTickle(unsigned long, unsigned long);
    void addLocation(OSDictionary*);
    IONotifier * addMatchingNotification(OSSymbol const*, OSDictionary*, bool (*)(void*, void*, IOService*, IONotifier*), void*, void*, long);
    void addNeededResource(char const*);
    void addNotification(OSSymbol const*, OSDictionary*, bool (*)(void*, void*, IOService*), void*, void*, long);
    void addPowerChild(IOService*);
    void adjustBusy(long);
    int allowPowerChange(unsigned long);
    int applyToClients(void (*)(IOService*, void*), void*);
    int applyToInterested(OSSymbol const*, void (*)(OSObject*, void*), void*);
    int applyToProviders(void (*)(IOService*, void*), void*);
    int askChangeDown(unsigned long);
    bool attach(IOService*);
    int callPlatformFunction(OSSymbol const*, bool, void*, void*, void*, void*);
    int callPlatformFunction(char const*, bool, void*, void*, void*, void*);
    int cancelPowerChange(unsigned long);
    int catalogNewDrivers(OSOrderedSet*);
    int causeInterrupt(int);
    int changePowerStateTo(unsigned long);
    int changePowerStateToPriv(unsigned long);
    int checkResource(OSObject*);
    int checkResources();
    int clampPowerOn(unsigned long);
    void close(IOService*, unsigned long);
    int command_received(void*, void*, void*, void*);
    int compareProperties(OSDictionary*, OSCollection*);
    int compareProperty(OSDictionary*, OSString const*);
    int compareProperty(OSDictionary*, char const*);
    int configurePowerStatesReport(unsigned int, void*);
    int configureReport(IOReportChannelList*, unsigned int, void*, void*);
    int configureSimplePowerReport(unsigned int, void*);
    int copyClientWithCategory(OSSymbol const*);
    int copyMatchingService(OSDictionary*);
    int currentCapability();
    int currentPowerConsumption();
    int deRegisterInterestedDriver(IOService*);
    int deliverNotification(OSSymbol const*, unsigned long, unsigned long);
    void detach(IOService*);
    bool didTerminate(IOService*, unsigned long, bool*);
    int didYouWakeSystem();
    int disableInterrupt(int);
    int doServiceMatch(unsigned long);
    int doServiceTerminate(unsigned long);
    int enableInterrupt(int);
    int errnoFromReturn(int);
    bool finalize(unsigned long);
    void free();
    int getAggressiveness(unsigned long, unsigned long*);
    unsigned int getBusyState();
    int getCPUSnoopDelay();
    IOService * getClient() const;
    int getClientIterator() const;
    int getClientWithCategory(OSSymbol const*);
    OSArray * getDeviceMemory();
    unsigned int getDeviceMemoryCount();
    IOMemoryDescriptor * getDeviceMemoryWithIndex(unsigned int);
    int getInterruptType(int, int*);
    OSIterator * getMatchingServices(OSDictionary*);
    int getMetaClass() const;
    int getOpenClientIterator() const;
    int getOpenProviderIterator() const;
    IOPMrootDomain * getPMRootDomain();
    int getPMworkloop();
    int getPlatform();
    unsigned long getPowerState();
    IOService * getProvider() const;
    int getProviderIterator() const;
    int getResourceService();
    int getResources();
    int getServiceRoot();
    unsigned int getState() const;
    IOWorkLoop * getWorkLoop() const;
    int handleClose(IOService*, unsigned long);
    int handleIsOpen(IOService const*) const;
    int handleOpen(IOService*, unsigned long, void*);
    bool init(OSDictionary*);
    bool init(IORegistryEntry*, IORegistryPlane const*);
    int initialPowerStateForDomainState(unsigned long);
    int initialize();
    int invokeNotifer(_IOServiceNotifier*);
    bool isInactive() const;
    bool isOpen(IOService const*) const;
    void joinPMtree(IOService*);
    bool lockForArbitration(bool);
    int lookupInterrupt(int, bool, IOInterruptController**);
    int makeUsable();
    IOMemoryMap * mapDeviceMemoryWithIndex(unsigned int, unsigned long);
    int matchLocation(IOService*);
    int matchPropertyTable(OSDictionary*);
    int matchPropertyTable(OSDictionary*, long*);
    int maxCapabilityForDomainState(unsigned long);
    int message(unsigned long, IOService*, void*);
    int messageClient(unsigned long, OSObject*, void*, unsigned int);
    int messageClients(unsigned long, void*, unsigned int);
    static IOService * nameMatching(OSString const*, OSDictionary*);
    static IOService * nameMatching(char const*, OSDictionary*);
    int newTemperature(long, IOService*);
    int newUserClient(task*, void*, unsigned long, OSDictionary*, IOUserClient**);
    int newUserClient(task*, void*, unsigned long, IOUserClient**);
    int nextIdleTimeout(unsigned long long, unsigned long long, unsigned int);
    bool open(IOService*, unsigned long, void*);
    int passiveMatch(OSDictionary*, bool);
    int powerChangeDone(unsigned long);
    int powerDomainDidChangeTo(unsigned long, IOPowerConnection*);
    int powerDomainWillChangeTo(unsigned long, IOPowerConnection*);
    int powerOverrideOffPriv();
    int powerOverrideOnPriv();
    int powerStateDidChangeTo(unsigned long, unsigned long, IOService*);
    int powerStateForDomainState(unsigned long);
    int powerStateWillChangeTo(unsigned long, unsigned long, IOService*);
    IOService * probe(IOService*, long*);
    int probeCandidates(OSOrderedSet*);
    static IOService * propertyMatching(OSSymbol const*, OSObject const*, OSDictionary*);
    int publishResource(OSSymbol const*, OSObject*);
    int publishResource(char const*, OSObject*);
    IONotifier * registerInterest(OSSymbol const*, int (*)(void*, void*, unsigned long, IOService*, void*, unsigned int), void*, void*);
    int registerInterestedDriver(IOService*);
    int registerInterrupt(int, OSObject*, void (*)(OSObject*, void*, IOService*, int), void*);
    int registerPowerDriver(IOService*, IOPMPowerState*, unsigned long);
    void registerService(unsigned long);
    int registryEntryIDMatching(unsigned long long, OSDictionary*);
    void removePowerChild(IOPowerConnection*);
    int requestPowerDomainState(unsigned long, IOPowerConnection*, unsigned long);
    int requestProbe(unsigned long);
    bool requestTerminate(IOService*, unsigned long);
    int requireMaxBusStall(unsigned long);
    int requireMaxInterruptDelay(unsigned int);
    int resolveInterrupt(IOService*, int);
    static IOService * resourceMatching(OSString const*, OSDictionary*);
    static IOService * resourceMatching(char const*, OSDictionary*);
    int scheduleTerminatePhase2(unsigned long);
    bool serializeProperties(OSSerialize*) const;
    int serializedAllowPowerChange2(unsigned long);
    int serializedCancelPowerChange2(unsigned long);
    static IOService * serviceMatching(OSString const*, OSDictionary*);
    static IOService * serviceMatching(char const*, OSDictionary*);
    int setAggressiveness(unsigned long, unsigned long);
    void setCPUSnoopDelay(unsigned long);
    void setDeviceMemory(OSArray*);
    int setIdleTimerPeriod(unsigned long);
    void setPMRootDomain(IOPMrootDomain*);
    void setPlatform(IOPlatformExpert*);
    void setPowerParent(IOPowerConnection*, bool, unsigned long);
    int setPowerState(unsigned long, IOService*);
    void settleTimerExpired();
    bool start(IOService*);
    int startCandidate(IOService*);
    int startMatching(unsigned long);
    int start_PM_idle_timer();
    void stop(IOService*);
    int stringFromReturn(int);
    int systemWake();
    int systemWillShutdown(unsigned long);
    int tellChangeDown(unsigned long);
    int tellChangeDown1(unsigned long);
    int tellChangeDown2(unsigned long);
    int tellChangeUp(unsigned long);
    int tellClients(int);
    int tellClientsWithResponse(int);
    int tellNoChangeDown(unsigned long);
    int temperatureCriticalForZone(IOService*);
    int temporaryPowerClampOn();
    bool terminate(unsigned long);
    bool terminateClient(IOService*, unsigned long);
    int terminatePhase1(unsigned long);
    int terminateWorker(unsigned long);
    void unlockForArbitration();
    int unregisterAllInterest();
    int unregisterInterrupt(int);
    int updatePowerStatesReport(unsigned int, void*, void*);
    int updateReport(IOReportChannelList*, unsigned int, void*, void*);
    int updateSimplePowerReport(unsigned int, void*, void*);
    IOService * waitForMatchingService(OSDictionary*, unsigned long long);
    IOService * waitForService(OSDictionary*, mach_timespec*);
    int waitForState(unsigned long, unsigned long, mach_timespec*);
    int waitMatchIdle(unsigned long);
    int waitQuiet(mach_timespec*);
    int waitQuiet(unsigned long long);
    bool willTerminate(IOService*, unsigned long);
    int youAreRoot();
};

class IOCPU : public IOService {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IOCPU(OSMetaClass const*);
    ~IOCPU();

    int enableCPUTimeBase(bool);
    int getCPUGroup();
    unsigned int getCPUGroupSize();
    int getCPUNumber();
    int getCPUState();
    int getMachProcessor();
    int getMetaClass() const;
    OSObject * getProperty(OSSymbol const*) const;
    int initCPUs();
    bool serializeProperties(OSSerialize*) const;
    void setCPUNumber(unsigned long);
    void setCPUState(unsigned long);
    void setProperties(OSObject*);
    bool setProperty(OSSymbol const*, OSObject*);
    int signalCPU(IOCPU*);
    bool start(IOService*);
};

class IOInterruptController : public IOService {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IOInterruptController(OSMetaClass const*);
    ~IOInterruptController();

    int causeInterrupt(IOService*, int);
    int causeVector(long, IOInterruptVector*);
    int disableInterrupt(IOService*, int);
    int disableVectorHard(long, IOInterruptVector*);
    int enableInterrupt(IOService*, int);
    int enableVector(long, IOInterruptVector*);
    int getInterruptHandlerAddress();
    int getInterruptType(IOService*, int, int*);
    int getMetaClass() const;
    int getVectorType(long, IOInterruptVector*);
    int handleInterrupt(void*, IOService*, int);
    int initVector(long, IOInterruptVector*);
    int registerInterrupt(IOService*, int, void*, void (*)(void*, void*, void*, int), void*);
    int unregisterInterrupt(IOService*, int);
    int vectorCanBeShared(long, IOInterruptVector*);
};

class IOCPUInterruptController : public IOInterruptController {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IOCPUInterruptController(OSMetaClass const*);
    IOCPUInterruptController();
    ~IOCPUInterruptController();

    int causeInterrupt(IOService*, int);
    int disableInterrupt(IOService*, int);
    int enableCPUInterrupt(IOCPU*);
    int enableInterrupt(IOService*, int);
    int getInterruptType(IOService*, int, int*);
    int getMetaClass() const;
    int handleInterrupt(void*, IOService*, int);
    int initCPUInterruptController(int);
    int registerCPUInterruptController();
    int registerInterrupt(IOService*, int, void*, void (*)(void*, void*, void*, int), void*);
    void setCPUInterruptProperties(IOService*);
};

class IOCatalogue : public OSObject {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IOCatalogue(OSMetaClass const*);
    IOCatalogue();
    ~IOCatalogue();

    void addDrivers(OSArray*, bool);
    int findDrivers(OSDictionary*, long*);
    int findDrivers(IOService*, long*);
    void free();
    unsigned int getGenerationCount() const;
    int getMetaClass() const;
    bool init(OSArray*);
    int initialize();
    bool isModuleLoaded(OSDictionary*) const;
    bool isModuleLoaded(OSString*) const;
    bool isModuleLoaded(char const*) const;
    int moduleHasLoaded(OSString*);
    int moduleHasLoaded(char const*);
    void removeDrivers(OSDictionary*, bool);
    void reset();
    bool serialize(OSSerialize*) const;
    int serializeData(unsigned long, OSSerialize*) const;
    int startMatching(OSDictionary*);
    int terminateDrivers(OSDictionary*);
    int terminateDriversForModule(OSString*, bool);
    int terminateDriversForModule(char const*, bool);
    int unloadModule(OSString*) const;
};

class IOCommand : public OSObject {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IOCommand(OSMetaClass const*);
    ~IOCommand();

    int getMetaClass() const;
    bool init();
};

class IOEventSource : public OSObject {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IOEventSource(OSMetaClass const*);
    ~IOEventSource();

    bool checkForWork();
    int closeGate();
    void disable();
    void enable();
    void free();
    void * getAction() const;
    int getMetaClass() const;
    int getNext() const;
    IOWorkLoop * getWorkLoop() const;
    bool init(OSObject*, void (*)(OSObject*, ...));
    bool isEnabled() const;
    bool onThread() const;
    int openGate();
    void setAction(void (*)(OSObject*, ...));
    void setNext(IOEventSource*);
    void setWorkLoop(IOWorkLoop*);
    int signalWorkAvailable();
    int sleepGate(void*, unsigned long);
    int sleepGate(void*, unsigned long long, unsigned long);
    int tryCloseGate();
    int wakeupGate(void*, bool);
};

class IOCommandGate : public IOEventSource {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IOCommandGate(OSMetaClass const*);
    IOCommandGate();
    ~IOCommandGate();

    int attemptAction(int (*)(OSObject*, void*, void*, void*, void*), void*, void*, void*, void*);
    int attemptCommand(void*, void*, void*, void*);
    int commandGate(OSObject*, int (*)(OSObject*, void*, void*, void*, void*));
    int commandSleep(void*, unsigned long);
    int commandSleep(void*, unsigned long long, unsigned long);
    void commandWakeup(void*, bool);
    void disable();
    void enable();
    void free();
    int getMetaClass() const;
    bool init(OSObject*, int (*)(OSObject*, void*, void*, void*, void*));
    int runAction(int (*)(OSObject*, void*, void*, void*, void*), void*, void*, void*, void*);
    int runCommand(void*, void*, void*, void*);
    void setWorkLoop(IOWorkLoop*);
};

class IOCommandPool : public IOCommand {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IOCommandPool(OSMetaClass const*);
    IOCommandPool();
    ~IOCommandPool();

    int commandPool(IOService*, IOWorkLoop*, unsigned long);
    void free();
    int gatedGetCommand(IOCommand**, bool);
    int gatedReturnCommand(IOCommand*);
    int getCommand(bool);
    int getMetaClass() const;
    bool init(IOService*, IOWorkLoop*, unsigned long);
    int initWithWorkLoop(IOWorkLoop*);
    int returnCommand(IOCommand*);
    static IOCommandPool * withWorkLoop(IOWorkLoop*);
};

class IOConditionLock : public OSObject {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IOConditionLock(OSMetaClass const*);
    IOConditionLock();
    ~IOConditionLock();

    void free();
    int getCondition() const;
    int getInterruptible() const;
    int getMetaClass() const;
    int initWithCondition(int, bool);
    int lock();
    int lockWhen(int);
    void setCondition(int);
    int tryLock();
    int unlock();
    int unlockWith(int);
    static IOConditionLock * withCondition(int, bool);
};

class IODMACommand : public IOCommand {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IODMACommand(OSMetaClass const*);
    IODMACommand();
    ~IODMACommand();

    int OutputBig32(IODMACommand*, _iokit_inner::Segment64, void*, unsigned long);
    int OutputBig64(IODMACommand*, _iokit_inner::Segment64, void*, unsigned long);
    int OutputHost32(IODMACommand*, _iokit_inner::Segment64, void*, unsigned long);
    int OutputHost64(IODMACommand*, _iokit_inner::Segment64, void*, unsigned long);
    int OutputLittle32(IODMACommand*, _iokit_inner::Segment64, void*, unsigned long);
    int OutputLittle64(IODMACommand*, _iokit_inner::Segment64, void*, unsigned long);
    int clearMemoryDescriptor(bool);
    int cloneCommand(void*);
    int complete(bool, bool);
    void free();
    int genIOVMSegments(bool (*)(IODMACommand*, _iokit_inner::Segment64, void*, unsigned long), unsigned long long*, void*, unsigned long*);
    int genIOVMSegments(unsigned long long*, void*, unsigned long*);
    int getAlignment();
    int getMemoryDescriptor() const;
    int getMetaClass() const;
    int getNumAddressBits();
    int getPreparedOffsetAndLength(unsigned long long*, unsigned long long*);
    int initWithSpecification(bool (*)(IODMACommand*, _iokit_inner::Segment64, void*, unsigned long), unsigned char, unsigned long long, _iokit_inner::MappingOptions, unsigned long long, unsigned long, IOMapper*, void*);
    int prepare(unsigned long long, unsigned long long, bool, bool);
    int prepareWithSpecification(bool (*)(IODMACommand*, _iokit_inner::Segment64, void*, unsigned long), unsigned char, unsigned long long, _iokit_inner::MappingOptions, unsigned long long, unsigned long, IOMapper*, unsigned long long, unsigned long long, bool, bool);
    uint64_t readBytes(unsigned long long, void*, unsigned long long);
    void setMemoryDescriptor(IOMemoryDescriptor const*, bool);
    int synchronize(unsigned long);
    int transfer(unsigned long, unsigned long long, void*, unsigned long long);
    static IODMACommand * withSpecification(bool (*)(IODMACommand*, _iokit_inner::Segment64, void*, unsigned long), unsigned char, unsigned long long, _iokit_inner::MappingOptions, unsigned long long, unsigned long, IOMapper*, void*);
    uint64_t writeBytes(unsigned long long, void const*, unsigned long long);
};

class IODMAController : public IOService {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IODMAController(OSMetaClass const*);
    ~IODMAController();

    int completeDMACommand(IODMAEventSource*, IODMACommand*);
    int createControllerName(unsigned long);
    int getController(IOService*, unsigned long);
    int getMetaClass() const;
    void notifyDMACommand(IODMAEventSource*, IODMACommand*, int, unsigned long, unsigned long long);
    int registerDMAController(unsigned long);
    bool start(IOService*);
};

class IODMAEventSource : public IOEventSource {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IODMAEventSource(OSMetaClass const*);
    IODMAEventSource();
    ~IODMAEventSource();

    bool checkForWork();
    int completeDMACommand(IODMACommand*);
    int dmaEventSource(OSObject*, IOService*, void (*)(OSObject*, IODMAEventSource*, IODMACommand*, int, unsigned long, unsigned long long), void (*)(OSObject*, IODMAEventSource*, IODMACommand*, int, unsigned long, unsigned long long), unsigned long);
    int getMetaClass() const;
    bool init(OSObject*, IOService*, void (*)(OSObject*, IODMAEventSource*, IODMACommand*, int, unsigned long, unsigned long long), void (*)(OSObject*, IODMAEventSource*, IODMACommand*, int, unsigned long, unsigned long long), unsigned long);
    void notifyDMACommand(IODMACommand*, int, unsigned long, unsigned long long);
    int startDMACommand(IODMACommand*, IODirection, unsigned long, unsigned long);
    int stopDMACommand(bool, unsigned long long);
};

class IODTNVRAM : public IORegistryEntry {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IODTNVRAM(OSMetaClass const*);
    ~IODTNVRAM();

    int calculatePartitionChecksum(unsigned char*);
    int convertObjectToProp(unsigned char*, unsigned long*, OSSymbol const*, OSObject*);
    int convertPropToObject(unsigned char*, unsigned long, unsigned char*, unsigned long, OSSymbol const**, OSObject**);
    int escapeDataToData(OSData*);
    int generateOWChecksum(unsigned char*);
    int getOFVariablePerm(OSSymbol const*) const;
    int getOFVariableType(OSSymbol const*) const;
    int getOWVariableInfo(unsigned long, OSSymbol const**, unsigned long*, unsigned long*);
    int initOFVariables();
    int readNVRAMPropertyType0(IORegistryEntry*, OSSymbol const**, OSData**);
    int readNVRAMPropertyType1(IORegistryEntry*, OSSymbol const**, OSData**);
    int safeToSync();
    int searchNVRAMProperty(IONVRAMDescriptor*, unsigned long*);
    int syncOFVariables();
    int unescapeBytesToData(unsigned char const*, unsigned long);
    int updateOWBootArgs(OSSymbol const*, OSObject*);
    int validateOWChecksum(unsigned char*);
    int writeNVRAMPropertyType0(IORegistryEntry*, OSSymbol const*, OSData*);
    int writeNVRAMPropertyType1(IORegistryEntry*, OSSymbol const*, OSData*);
};

class IOPlatformExpert : public IOService {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IOPlatformExpert(OSMetaClass const*);
    IOPlatformExpert();
    ~IOPlatformExpert();

    int CheckSubTree(OSArray*, IOService*, IOService*, OSDictionary*);
    int PMInstantiatePowerDomains();
    int PMLog(char const*, unsigned long, unsigned long, unsigned long);
    int PMRegisterDevice(IOService*, IOService*);
    int RegisterServiceInTree(IOService*, OSDictionary*, OSDictionary*, IOService*);
    int atInterruptLevel();
    bool attach(IOService*);
    int callPlatformFunction(OSSymbol const*, bool, void*, void*, void*, void*);
    int compareNubName(IOService const*, OSString*, OSString**) const;
    int configure(IOService*);
    int createNub(OSDictionary*);
    int createSystemSerialNumberString(OSData*);
    int deregisterInterruptController(OSSymbol*);
    int getBootROMType();
    int getChipSetType();
    int getConsoleInfo(PE_Video*);
    int getGMTTimeOfDay();
    int getMachineName(char*, int);
    int getMachineType();
    int getMetaClass() const;
    int getModelName(char*, int);
    int getNubResources(IOService*);
    int getPhysicalRangeAllocator();
    int getUTCTimeOfDay(unsigned int*, unsigned int*);
    int haltRestart(unsigned int);
    int hasPMFeature(unsigned long);
    int hasPrivPMFeature(unsigned long);
    int lookUpInterruptController(OSSymbol*);
    int numBatteriesSupported();
    int platformAdjustService(IOService*);
    int registerInterruptController(OSSymbol*, IOInterruptController*);
    int registerNVRAMController(IONVRAMController*);
    int savePanicInfo(unsigned char*, unsigned long);
    void setBootROMType(long);
    void setCPUInterruptProperties(IOService*);
    void setChipSetType(long);
    void setConsoleInfo(PE_Video*, unsigned int);
    void setGMTTimeOfDay(long);
    void setMachineType(long);
    void setUTCTimeOfDay(unsigned int, unsigned int);
    int sleepKernel();
    bool start(IOService*);
};

class IODTPlatformExpert : public IOPlatformExpert {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IODTPlatformExpert(OSMetaClass const*);
    ~IODTPlatformExpert();

    int compareNubName(IOService const*, OSString*, OSString**) const;
    int configure(IOService*);
    int createNub(IORegistryEntry*);
    int createNubs(IOService*, OSIterator*);
    int createSystemSerialNumberString(OSData*);
    int getMachineName(char*, int);
    int getMetaClass() const;
    int getModelName(char*, int);
    int getNVRAMPartitions();
    int getNubResources(IOService*);
    int haltRestart(unsigned int);
    IOService * probe(IOService*, long*);
    int processTopLevel(IORegistryEntry*);
    int readNVRAMPartition(OSSymbol const*, unsigned long, unsigned char*, unsigned long);
    int readNVRAMProperty(IORegistryEntry*, OSSymbol const**, OSData**);
    int readXPRAM(unsigned long, unsigned char*, unsigned long);
    int registerNVRAMController(IONVRAMController*);
    int savePanicInfo(unsigned char*, unsigned long);
    int writeNVRAMPartition(OSSymbol const*, unsigned long, unsigned char*, unsigned long);
    int writeNVRAMProperty(IORegistryEntry*, OSSymbol const*, OSData*);
    int writeXPRAM(unsigned long, unsigned char*, unsigned long);
};

class IODataQueue : public OSObject {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IODataQueue(OSMetaClass const*);
    IODataQueue();
    ~IODataQueue();

    int enqueue(void*, unsigned long);
    void free();
    int getMemoryDescriptor();
    int getMetaClass() const;
    bool initWithCapacity(unsigned long);
    bool initWithEntries(unsigned long, unsigned long);
    int sendDataAvailableNotification();
    void setNotificationPort(ipc_port*);
    static IODataQueue * withCapacity(unsigned long);
    static IODataQueue * withEntries(unsigned long, unsigned long);
};

class IODeviceMemory : public IOMemoryDescriptor {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    int arrayFromList(_iokit_inner::InitElement*, unsigned long);
    static IODeviceMemory * withRange(unsigned long, unsigned long);
    static IODeviceMemory * withSubRange(IODeviceMemory*, unsigned long, unsigned long);
};

class IOInterruptEventSource : public IOEventSource {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IOInterruptEventSource(OSMetaClass const*);
    IOInterruptEventSource();
    ~IOInterruptEventSource();

    bool checkForWork();
    void disable();
    int disableInterruptOccurred(void*, IOService*, int);
    void enable();
    void free();
    int getAutoDisable() const;
    int getIntIndex() const;
    int getMetaClass() const;
    IOService * getProvider() const;
    bool init(OSObject*, void (*)(OSObject*, IOInterruptEventSource*, int), IOService*, int);
    int interruptEventSource(OSObject*, void (*)(OSObject*, IOInterruptEventSource*, int), IOService*, int);
    int interruptOccurred(void*, IOService*, int);
    int normalInterruptOccurred(void*, IOService*, int);
    void setWorkLoop(IOWorkLoop*);
};

class IOFilterInterruptEventSource : public IOInterruptEventSource {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IOFilterInterruptEventSource(OSMetaClass const*);
    IOFilterInterruptEventSource();
    ~IOFilterInterruptEventSource();

    int disableInterruptOccurred(void*, IOService*, int);
    int filterInterruptEventSource(OSObject*, void (*)(OSObject*, IOInterruptEventSource*, int), bool (*)(OSObject*, IOFilterInterruptEventSource*), IOService*, int);
    int getFilterAction() const;
    int getMetaClass() const;
    bool init(OSObject*, void (*)(OSObject*, IOInterruptEventSource*, int), IOService*, int);
    bool init(OSObject*, void (*)(OSObject*, IOInterruptEventSource*, int), bool (*)(OSObject*, IOFilterInterruptEventSource*), IOService*, int);
    int interruptEventSource(OSObject*, void (*)(OSObject*, IOInterruptEventSource*, int), IOService*, int);
    int normalInterruptOccurred(void*, IOService*, int);
    int signalInterrupt();
};

class IOGeneralMemoryDescriptor : public IOMemoryDescriptor {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IOGeneralMemoryDescriptor(OSMetaClass const*);
    IOGeneralMemoryDescriptor();
    ~IOGeneralMemoryDescriptor();

    int complete(IODirection);
    int dmaCommandOperation(unsigned long, void*, unsigned int) const;
    int doMap(_vm_map*, unsigned int*, unsigned long, unsigned long, unsigned long);
    int doUnmap(_vm_map*, unsigned int, unsigned long);
    void free();
    int getMetaClass() const;
    uint64_t getPhysicalSegment(unsigned long, unsigned long*);
    uint64_t getPhysicalSegment(unsigned long, unsigned long*, unsigned long);
    int getPhysicalSegment64(unsigned long, unsigned long*);
    int getPreparationID();
    int getSourceSegment(unsigned long, unsigned long*);
    int getVirtualSegment(unsigned long, unsigned long*);
    bool initWithAddress(void*, unsigned long, IODirection);
    bool initWithAddress(unsigned int, unsigned long, IODirection, task*);
    bool initWithOptions(void*, unsigned long, unsigned long, task*, unsigned long, IOMapper*);
    bool initWithPhysicalAddress(unsigned long, unsigned long, IODirection);
    int initWithPhysicalRanges(IOPhysicalRange*, unsigned long, IODirection, bool);
    int initWithRanges(IOVirtualRange*, unsigned long, IODirection, task*, bool);
    int mapIntoKernel(unsigned int);
    int prepare(IODirection);
    bool serialize(OSSerialize*) const;
    void setPosition(unsigned long);
    void setPurgeable(unsigned long, unsigned long*);
    int unmapFromKernel();
    int wireVirtual(IODirection);
};

class IOReporter : public OSObject {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IOReporter(OSMetaClass const*);
    IOReporter();
    ~IOReporter();

    void addChannel(unsigned long long, char const*);
    int configureAllReports(OSSet*, IOReportChannelList*, unsigned int, void*, void*);
    int configureReport(IOReportChannelList*, unsigned int, void*, void*);
    int copyChannelIDs();
    int copyElementValues(int, IOReportElementValues*);
    int createLegend();
    void free();
    int getChannelIndex(unsigned long long, int*);
    int getChannelIndices(unsigned long long, int*, int*);
    int getElementValues(int);
    int getFirstElementIndex(unsigned long long, int*);
    int getMetaClass() const;
    int handleAddChannelSwap(unsigned long long, OSSymbol const*);
    int handleConfigureReport(IOReportChannelList*, unsigned int, void*, void*);
    int handleCreateLegend();
    int handleSwapCleanup(int);
    int handleSwapPrepare(int);
    int handleUpdateReport(IOReportChannelList*, unsigned int, void*, void*);
    bool init(IOService*, IOReportChannelType, unsigned long long);
    int legendWith(OSArray*, OSArray*, IOReportChannelType, unsigned long long);
    int lockReporter();
    int lockReporterConfig();
    void setElementValues(int, IOReportElementValues*, unsigned long long);
    int unlockReporter();
    int unlockReporterConfig();
    int updateAllReports(OSSet*, IOReportChannelList*, unsigned int, void*, void*);
    int updateChannelValues(int);
    int updateReport(IOReportChannelList*, unsigned int, void*, void*);
    int updateReportChannel(int, int*, IOBufferMemoryDescriptor*);
};

class IOHistogramReporter : public IOReporter {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IOHistogramReporter(OSMetaClass const*);
    IOHistogramReporter();
    ~IOHistogramReporter();

    void free();
    int getMetaClass() const;
    int handleCreateLegend();
    int initWith(IOService*, unsigned short, unsigned long long, OSSymbol const*, unsigned long long, int, IOHistogramSegmentConfig*);
    int tallyValue(long long);
    IOHistogramReporter * with(IOService*, unsigned short, unsigned long long, char const*, unsigned long long, int, IOHistogramSegmentConfig*);
};

class IOInterleavedMemoryDescriptor : public IOMemoryDescriptor {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IOInterleavedMemoryDescriptor(OSMetaClass const*);
    IOInterleavedMemoryDescriptor();
    ~IOInterleavedMemoryDescriptor();

    int clearMemoryDescriptors(IODirection);
    int complete(IODirection);
    void free();
    int getMetaClass() const;
    uint64_t getPhysicalSegment(unsigned long, unsigned long*, unsigned long);
    bool initWithCapacity(unsigned long, IODirection);
    int prepare(IODirection);
    void setMemoryDescriptor(IOMemoryDescriptor*, unsigned long, unsigned long);
    static IOInterleavedMemoryDescriptor * withCapacity(unsigned long, IODirection);
};

class IOKitDiagnostics : public OSObject {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IOKitDiagnostics(OSMetaClass const*);
    IOKitDiagnostics();
    ~IOKitDiagnostics();

    int diagnostics();
    int getMetaClass() const;
    bool serialize(OSSerialize*) const;
    int updateOffset(OSDictionary*, unsigned long, char const*);
};

class IOLittleMemoryCursor : public IOMemoryCursor {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IOLittleMemoryCursor(OSMetaClass const*);
    IOLittleMemoryCursor();
    ~IOLittleMemoryCursor();

    int getMetaClass() const;
    int initWithSpecification(unsigned long, unsigned long, unsigned long);
    int outputSegment(_iokit_inner::PhysicalSegment, void*, unsigned long);
    static IOLittleMemoryCursor * withSpecification(unsigned long, unsigned long, unsigned long);
};

class IOMachPort : public OSObject {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IOMachPort(OSMetaClass const*);
    IOMachPort();
    ~IOMachPort();

    int dictForType(unsigned int);
    void free();
    int getMetaClass() const;
    int makeSendRightForTask(task*, OSObject*, unsigned int);
    int noMoreSendersForObject(OSObject*, unsigned int, unsigned int*);
    int portForObject(OSObject*, unsigned int);
    int releasePortForObject(OSObject*, unsigned int);
    void setHoldDestroy(OSObject*, unsigned int);
};

class IOMapper : public IOService {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IOMapper(OSMetaClass const*);
    ~IOMapper();

    int FreeARTTable(OSData*, unsigned long);
    int NewARTTable(unsigned long, void**, unsigned int*);
    int allocTable(unsigned long);
    int copyMapperForDevice(IOService*);
    int copyMapperForDeviceWithIndex(IOService*, unsigned int);
    void free();
    int getBypassMask(unsigned long long*) const;
    int getMetaClass() const;
    int iovmAllocDMACommand(IODMACommand*, unsigned long);
    int iovmFreeDMACommand(IODMACommand*, unsigned int, unsigned long);
    int iovmInsert(unsigned int, unsigned long, upl_page_info*, unsigned long);
    int iovmInsert(unsigned int, unsigned long, unsigned int*, unsigned long);
    int iovmMapMemory(OSObject*, unsigned int, unsigned int, unsigned int, upl_page_info*, IODMAMapSpecification const*);
    void setMapperRequired(bool);
    bool start(IOService*);
    int waitForSystemMapper();
};

class IOMemoryMap : public OSObject {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IOMemoryMap(OSMetaClass const*);
    IOMemoryMap();
    ~IOMemoryMap();

    uint32_t getAddress();
    int getAddressTask();
    uint64_t getLength();
    int getMapOptions();
    int getMemoryDescriptor();
    int getMetaClass() const;
    uint64_t getPhysicalAddress();
    uint64_t getPhysicalSegment(unsigned long, unsigned long*);
    uint64_t getSize();
    uint32_t getVirtualAddress();
    int redirect(IOMemoryDescriptor*, unsigned long, unsigned long);
    int redirect(IOMemoryDescriptor*, unsigned long, unsigned long long);
    void setMemoryDescriptor(IOMemoryDescriptor*, unsigned long long);
    int unmap();
    int wireRange(unsigned int, unsigned long long, unsigned long long);
};

class IOMultiMemoryDescriptor : public IOMemoryDescriptor {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IOMultiMemoryDescriptor(OSMetaClass const*);
    IOMultiMemoryDescriptor();
    ~IOMultiMemoryDescriptor();

    int complete(IODirection);
    void free();
    int getMetaClass() const;
    uint64_t getPhysicalSegment(unsigned long, unsigned long*, unsigned long);
    int initWithDescriptors(IOMemoryDescriptor**, unsigned long, IODirection, bool);
    int prepare(IODirection);
    static IOMultiMemoryDescriptor * withDescriptors(IOMemoryDescriptor**, unsigned long, IODirection, bool);
};

class IONVRAMController : public IOService {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IONVRAMController(OSMetaClass const*);
    ~IONVRAMController();

    void registerService(unsigned long);
    int sync();
};

class IONaturalMemoryCursor : public IOMemoryCursor {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IONaturalMemoryCursor(OSMetaClass const*);
    IONaturalMemoryCursor();
    ~IONaturalMemoryCursor();

    int getMetaClass() const;
    int initWithSpecification(unsigned long, unsigned long, unsigned long);
    int outputSegment(_iokit_inner::PhysicalSegment, void*, unsigned long);
    static IONaturalMemoryCursor * withSpecification(unsigned long, unsigned long, unsigned long);
};

class IONotifier : public OSObject {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IONotifier(OSMetaClass const*);
    ~IONotifier();

    int getMetaClass() const;
};

class IOPMPowerSource : public IOService {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IOPMPowerSource(OSMetaClass const*);
    IOPMPowerSource();
    ~IOPMPowerSource();

    int adapterInfo();
    int amperage();
    int atCriticalLevel();
    int atWarnLevel();
    int batteryInstalled();
    int capacityPercentRemaining();
    int currentCapacity();
    int cycleCount();
    int errorCondition();
    int externalChargeCapable();
    int externalConnected();
    void free();
    int getMetaClass() const;
    int getPSProperty(OSSymbol const*);
    bool init();
    bool isCharging();
    int legacyIOBatteryInfo();
    int location();
    int manufacturer();
    int maxCapacity();
    int model();
    int powerSource();
    int serial();
    void setAdapterInfo(int);
    void setAmperage(int);
    void setAtCriticalLevel(bool);
    void setAtWarnLevel(bool);
    void setBatteryInstalled(bool);
    void setCurrentCapacity(unsigned int);
    void setCycleCount(unsigned int);
    void setErrorCondition(OSSymbol*);
    void setExternalChargeCapable(bool);
    void setExternalConnected(bool);
    void setIsCharging(bool);
    void setLegacyIOBatteryInfo(OSDictionary*);
    void setLocation(int);
    void setManufacturer(OSSymbol*);
    void setMaxCapacity(unsigned int);
    void setModel(OSSymbol*);
    void setPSProperty(OSSymbol const*, OSObject*);
    void setSerial(OSSymbol*);
    void setTimeRemaining(int);
    void setVoltage(unsigned int);
    int timeRemaining();
    int updateStatus();
    int voltage();
};

class IOPMPowerSourceList : public OSObject {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IOPMPowerSourceList(OSMetaClass const*);
    IOPMPowerSourceList();
    ~IOPMPowerSourceList();

    void addToList(IOPMPowerSource*);
    int firstInList();
    void free();
    int getMetaClass() const;
    int initialize();
    int nextInList(IOPMPowerSource*);
    int numberOfItems();
    void removeFromList(IOPMPowerSource*);
};

class IOPMinformee : public OSObject {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IOPMinformee(OSMetaClass const*);
    IOPMinformee();
    ~IOPMinformee();

    void free();
    int getMetaClass() const;
    int initialize(IOService*);
};

class IOPMinformeeList : public OSObject {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IOPMinformeeList(OSMetaClass const*);
    IOPMinformeeList();
    ~IOPMinformeeList();

    void addToList(IOPMinformee*);
    int findItem(IOService*);
    int firstInList();
    void free();
    int getMetaClass() const;
    int initialize();
    int nextInList(IOPMinformee*);
    int numberOfItems();
    void removeFromList(IOService*);
};

class IOPMprot : public OSObject {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IOPMprot(OSMetaClass const*);
    IOPMprot();
    ~IOPMprot();

    int getMetaClass() const;
};

class IOPMrootDomain : public IOService {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IOPMrootDomain(OSMetaClass const*);
    IOPMrootDomain();
    ~IOPMrootDomain();

    int askChangeDown(unsigned long);
    int changePowerStateTo(unsigned long);
    int changePowerStateToPriv(unsigned long);
    int claimSystemWakeEvent(IOService*, unsigned long, char const*, OSObject*);
    int configureReport(IOReportChannelList*, unsigned int, void*, void*);
    int construct();
    int copyPMSetting(OSSymbol*);
    int createPMAssertion(unsigned long long, unsigned int, IOService*, char const*);
    int displayWranglerNotification(void*, void*, unsigned long, IOService*, void*, unsigned int);
    int getMetaClass() const;
    int getPMAssertionLevel(unsigned long long);
    int getSleepSupported();
    int powerChangeDone(unsigned long);
    int publishFeature(char const*);
    int publishFeature(char const*, unsigned int, unsigned int*);
    int receivePowerNotification(unsigned long);
    int registerPMSettingController(OSSymbol const**, int (*)(OSObject*, OSSymbol const*, OSObject*, unsigned long), OSObject*, unsigned long, OSObject**);
    int registerPMSettingController(OSSymbol const**, unsigned int, int (*)(OSObject*, OSSymbol const*, OSObject*, unsigned long), OSObject*, unsigned long, OSObject**);
    int releasePMAssertion(unsigned long long);
    void removePublishedFeature(unsigned int);
    int requestPowerDomainState(unsigned long, IOPowerConnection*, unsigned long);
    int restartSystem();
    int setAggressiveness(unsigned long, unsigned long);
    void setPMAssertionLevel(unsigned long long, unsigned int);
    void setProperties(OSObject*);
    void setSleepSupported(unsigned long);
    int shutdownSystem();
    int sleepSystem();
    bool start(IOService*);
    int sysPowerDownHandler(void*, void*, unsigned long, IOService*, void*, unsigned int);
    int systemPowerEventOccurred(OSSymbol const*, OSObject*);
    int systemPowerEventOccurred(OSSymbol const*, unsigned int);
    int tellChangeDown(unsigned long);
    int tellChangeUp(unsigned long);
    int tellNoChangeDown(unsigned long);
    int updateReport(IOReportChannelList*, unsigned int, void*, void*);
    int wakeFromDoze();
};

class IOPlatformDevice : public IOService {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IOPlatformDevice(OSMetaClass const*);
    ~IOPlatformDevice();

    int matchLocation(IOService*);
};

class IOPolledInterface : public OSObject {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IOPolledInterface(OSMetaClass const*);
    ~IOPolledInterface();

    int checkAllForWork();
};

class IOPowerConnection : public IOService {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IOPowerConnection(OSMetaClass const*);
    IOPowerConnection();
    ~IOPowerConnection();

    int childHasRequestedPower();
    int getAwaitingAck();
    int getDesiredDomainState();
    int getMetaClass() const;
    int getPreventIdleSleepFlag();
    int getPreventSystemSleepFlag();
    int parentCurrentPowerFlags();
    int parentKnowsState();
    void setAwaitingAck(bool);
    void setChildHasRequestedPower();
    void setDesiredDomainState(unsigned long);
    void setParentCurrentPowerFlags(unsigned long);
    void setParentKnowsState(bool);
    void setPreventIdleSleepFlag(unsigned long);
    void setPreventSystemSleepFlag(unsigned long);
};

class IORangeAllocator : public OSObject {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IORangeAllocator(OSMetaClass const*);
    IORangeAllocator();
    ~IORangeAllocator();

    int allocElement(unsigned long);
    int allocate(unsigned long, unsigned long*, unsigned long);
    int allocateRange(unsigned long, unsigned long);
    int deallocElement(unsigned long);
    int deallocate(unsigned long, unsigned long);
    void free();
    int getFragmentCapacity();
    unsigned int getFragmentCount();
    unsigned int getFreeCount();
    int getMetaClass() const;
    bool init(unsigned long, unsigned long, unsigned long, unsigned long);
    bool serialize(OSSerialize*) const;
    void setFragmentCapacityIncrement(unsigned long);
    static IORangeAllocator * withRange(unsigned long, unsigned long, unsigned long, unsigned long);
};

class OSIterator : public OSObject {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    OSIterator(OSMetaClass const*);
    ~OSIterator();

    int getMetaClass() const;
};

class IORegistryIterator : public OSIterator {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IORegistryIterator(OSMetaClass const*);
    IORegistryIterator();
    ~IORegistryIterator();

    int enterEntry(IORegistryPlane const*);
    int enterEntry();
    int exitEntry();
    void free();
    int getCurrentEntry();
    int getMetaClass() const;
    int getNextObject();
    int getNextObjectFlat();
    int getNextObjectRecursive();
    bool isValid();
    int iterateAll();
    int iterateOver(IORegistryEntry*, IORegistryPlane const*, unsigned long);
    int iterateOver(IORegistryPlane const*, unsigned long);
    void reset();
};

class IORegistryPlane : public OSObject {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IORegistryPlane(OSMetaClass const*);
    IORegistryPlane();
    ~IORegistryPlane();

    int getMetaClass() const;
    bool serialize(OSSerialize*) const;
};

class IOReportLegend : public OSObject {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IOReportLegend(OSMetaClass const*);
    IOReportLegend();
    ~IOReportLegend();

    void addLegendEntry(OSDictionary*, char const*, char const*);
    void addReporterLegend(IOReporter*, char const*, char const*);
    void addReporterLegend(IOService*, IOReporter*, char const*, char const*);
    void free();
    int getLegend();
    int getMetaClass() const;
    int initWith(OSArray*);
    int organizeLegend(OSDictionary*, OSSymbol const*, OSSymbol const*);
    IOReportLegend * with(OSArray*);
};

class IOResources : public IOService {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IOResources(OSMetaClass const*);
    IOResources();
    ~IOResources();

    int getMetaClass() const;
    IOWorkLoop * getWorkLoop() const;
    int matchPropertyTable(OSDictionary*);
    int resources();
    void setProperties(OSObject*);
};

class IORootParent : public IOService {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IORootParent(OSMetaClass const*);
    IORootParent();
    ~IORootParent();

    int dozeSystem();
    int getMetaClass() const;
    int restartSystem();
    int shutDownSystem();
    int sleepSystem();
    int sleepToDoze();
    bool start(IOService*);
    int wakeSystem();
};

class IOSharedDataQueue : public IODataQueue {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IOSharedDataQueue(OSMetaClass const*);
    IOSharedDataQueue();
    ~IOSharedDataQueue();

    int dequeue(void*, unsigned long*);
    int enqueue(void*, unsigned long);
    void free();
    int getMemoryDescriptor();
    int getMetaClass() const;
    unsigned int getQueueSize();
    bool initWithCapacity(unsigned long);
    int peek();
    void setQueueSize(unsigned long);
    static IOSharedDataQueue * withCapacity(unsigned long);
    static IOSharedDataQueue * withEntries(unsigned long, unsigned long);
};

class IOSharedInterruptController : public IOInterruptController {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IOSharedInterruptController(OSMetaClass const*);
    IOSharedInterruptController();
    ~IOSharedInterruptController();

    int disableInterrupt(IOService*, int);
    int enableInterrupt(IOService*, int);
    int getInterruptHandlerAddress();
    int getInterruptType(IOService*, int, int*);
    int getMetaClass() const;
    int handleInterrupt(void*, IOService*, int);
    int initInterruptController(IOInterruptController*, OSData*);
    int registerInterrupt(IOService*, int, void*, void (*)(void*, void*, void*, int), void*);
    int unregisterInterrupt(IOService*, int);
};

class IOSimpleReporter : public IOReporter {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IOSimpleReporter(OSMetaClass const*);
    IOSimpleReporter();
    ~IOSimpleReporter();

    int getMetaClass() const;
    int getValue(unsigned long long);
    int incrementValue(unsigned long long, long long);
    int initWith(IOService*, unsigned short, unsigned long long);
    void setValue(unsigned long long, long long);
    IOSimpleReporter * with(IOService*, unsigned short, unsigned long long);
};

class IOStateReporter : public IOReporter {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IOStateReporter(OSMetaClass const*);
    IOStateReporter();
    ~IOStateReporter();

    int _getStateIndices(unsigned long long, unsigned long long, int*, int*);
    int _getStateValue(unsigned long long, unsigned long long, _iokit_inner::valueSelector);
    void free();
    int getMetaClass() const;
    int getStateInTransitions(unsigned long long, unsigned long long);
    int getStateLastChannelUpdateTime(unsigned long long);
    int getStateLastTransitionTime(unsigned long long, unsigned long long);
    int getStateResidencyTime(unsigned long long, unsigned long long);
    int handleAddChannelSwap(unsigned long long, OSSymbol const*);
    int handleIncrementChannelStateByIndices(int, int, unsigned long long, unsigned long long, unsigned long long);
    int handleOverrideChannelStateByIndices(int, int, unsigned long long, unsigned long long, unsigned long long);
    int handleSetStateByIndices(int, int, unsigned long long, unsigned long long);
    int handleSetStateID(unsigned long long, int, unsigned long long);
    int handleSwapCleanup(int);
    int handleSwapPrepare(int);
    int incrementChannelState(unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long);
    int initWith(IOService*, unsigned short, short, unsigned long long);
    int overrideChannelState(unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long);
    void setChannelState(unsigned long long, unsigned long long);
    void setChannelState(unsigned long long, unsigned long long, unsigned long long, unsigned long long);
    void setState(unsigned long long);
    void setState(unsigned long long, unsigned long long, unsigned long long);
    void setStateByIndices(int, int);
    void setStateByIndices(int, int, unsigned long long, unsigned long long);
    void setStateID(unsigned long long, int, unsigned long long);
    int updateChannelValues(int);
    IOStateReporter * with(IOService*, unsigned short, int, unsigned long long);
};

class IOSubMemoryDescriptor : public IOMemoryDescriptor {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IOSubMemoryDescriptor(OSMetaClass const*);
    IOSubMemoryDescriptor();
    ~IOSubMemoryDescriptor();

    int complete(IODirection);
    void free();
    int getMetaClass() const;
    uint64_t getPhysicalSegment(unsigned long, unsigned long*, unsigned long);
    int getPreparationID();
    int initSubRange(IOMemoryDescriptor*, unsigned long, unsigned long, IODirection);
    int makeMapping(IOMemoryDescriptor*, task*, unsigned int, unsigned long, unsigned long, unsigned long);
    int prepare(IODirection);
    int redirect(task*, bool);
    void setPurgeable(unsigned long, unsigned long*);
    static IOSubMemoryDescriptor * withSubRange(IOMemoryDescriptor*, unsigned long, unsigned long, unsigned long);
};

class IOTimerEventSource : public IOEventSource {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IOTimerEventSource(OSMetaClass const*);
    IOTimerEventSource();
    ~IOTimerEventSource();

    void cancelTimeout();
    void disable();
    void enable();
    void free();
    int getMetaClass() const;
    bool init(OSObject*, void (*)(OSObject*, IOTimerEventSource*));
    int setTimeout(mach_timespec);
    int setTimeout(unsigned long, unsigned long);
    int setTimeout(unsigned long long);
    void setTimeoutFunc();
    int setTimeoutMS(unsigned long);
    int setTimeoutTicks(unsigned long);
    int setTimeoutUS(unsigned long);
    void setWorkLoop(IOWorkLoop*);
    int timeout(void*);
    int timerEventSource(OSObject*, void (*)(OSObject*, IOTimerEventSource*));
    int wakeAtTime(mach_timespec);
    int wakeAtTime(unsigned long, unsigned long);
    int wakeAtTime(unsigned long long);
    int wakeAtTimeMS(unsigned long);
    int wakeAtTimeTicks(unsigned long);
    int wakeAtTimeUS(unsigned long);
};

class IOUserClient : public IOService {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IOUserClient(OSMetaClass const*);
    ~IOUserClient();

    int clientClose();
    int clientDied();
    int clientHasAuthorization(task*, IOService*);
    int clientHasPrivilege(void*, char const*);
    int clientMemoryForType(unsigned long, unsigned long*, IOMemoryDescriptor**);
    int connectClient(IOUserClient*);
    int copyClientEntitlement(task*, char const*);
    int destroyUserReferences(OSObject*);
    int exportObjectToClient(task*, OSObject*, OSObject**);
    int externalMethod(unsigned int, IOExternalMethodArguments*, IOExternalMethodDispatch*, OSObject*, void*);
    void free();
    int getAsyncTargetAndMethodForIndex(IOService**, unsigned long);
    int getExternalAsyncMethodForIndex(unsigned long);
    IOExternalMethod * getExternalMethodForIndex(unsigned long);
    IOExternalTrap * getExternalTrapForIndex(unsigned long);
    int getMetaClass() const;
    int getNotificationSemaphore(unsigned long, semaphore**);
    int getService();
    IOExternalMethod * getTargetAndMethodForIndex(IOService**, unsigned long);
    IOExternalTrap * getTargetAndTrapForIndex(IOService**, unsigned long);
    bool init(OSDictionary*);
    bool init();
    int initWithTask(task*, void*, unsigned long);
    int initWithTask(task*, void*, unsigned long, OSDictionary*);
    int initialize();
    int mapClientMemory(unsigned long, task*, unsigned long, unsigned int);
    int mapClientMemory64(unsigned long, task*, unsigned long, unsigned long long);
    int registerNotificationPort(ipc_port*, unsigned long, unsigned long);
    int registerNotificationPort(ipc_port*, unsigned long, unsigned long long);
    int releaseAsyncReference64(unsigned long long*);
    int releaseNotificationPort(ipc_port*);
    void removeMappingForDescriptor(IOMemoryDescriptor*);
    int sendAsyncResult(unsigned int*, int, void**, unsigned long);
    int sendAsyncResult64(unsigned long long*, int, unsigned long long*, unsigned long);
    int sendAsyncResult64WithOptions(unsigned long long*, int, unsigned long long*, unsigned long, unsigned long);
    void setAsyncReference(unsigned int*, ipc_port*, void*, void*);
    void setAsyncReference64(unsigned long long*, ipc_port*, unsigned long long, unsigned long long);
    void setAsyncReference64(unsigned long long*, ipc_port*, unsigned long long, unsigned long long, task*);
};

class IOUserNotification : public IONotifier {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IOUserNotification(OSMetaClass const*);
    ~IOUserNotification();

    void free();
    int getMetaClass() const;
    bool init();
    bool isValid();
    void reset();
    void setNotification(IONotifier*);
};

class IOWatchDogTimer : public IOService {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IOWatchDogTimer(OSMetaClass const*);
    ~IOWatchDogTimer();

    int getMetaClass() const;
    void setProperties(OSObject*);
    bool start(IOService*);
    void stop(IOService*);
};

class IOWorkLoop : public OSObject {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    IOWorkLoop(OSMetaClass const*);
    IOWorkLoop();
    ~IOWorkLoop();

    int _maintRequest(void*, void*, void*, void*);
    int addEventSource(IOEventSource*);
    int closeGate();
    void disableAllEventSources() const;
    void disableAllInterrupts() const;
    void enableAllEventSources() const;
    void enableAllInterrupts() const;
    void free();
    int getMetaClass() const;
    int getThread() const;
    bool inGate() const;
    bool init();
    bool onThread() const;
    int openGate();
    int removeEventSource(IOEventSource*);
    int runAction(int (*)(OSObject*, void*, void*, void*, void*), OSObject*, void*, void*, void*, void*);
    int runEventSources();
    int signalWorkAvailable();
    int sleepGate(void*, unsigned long);
    int sleepGate(void*, unsigned long long, unsigned long);
    int threadMain();
    int tryCloseGate();
    int wakeupGate(void*, bool);
    int workLoop();
    int workLoopWithOptions(unsigned long);
};

class OSCollection : public OSObject {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    OSCollection(OSMetaClass const*);
    ~OSCollection();

    int copyCollection(OSDictionary*);
    int getMetaClass() const;
    int haveUpdated();
    bool init();
    void setOptions(unsigned int, unsigned int, void*);
};

class OSArray : public OSCollection {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    OSArray(OSMetaClass const*);
    OSArray();
    ~OSArray();

    int copyCollection(OSDictionary*);
    unsigned int ensureCapacity(unsigned int);
    void flushCollection();
    void free();
    unsigned int getCapacity() const;
    unsigned int getCapacityIncrement() const;
    unsigned int getCount() const;
    OSObject * getLastObject() const;
    int getMetaClass() const;
    int getNextIndexOfObject(OSMetaClassBase const*, unsigned int) const;
    bool getNextObjectForIterator(void*, OSObject**) const;
    OSObject * getObject(unsigned int) const;
    int initIterator(void*) const;
    bool initWithArray(OSArray const*, unsigned int);
    bool initWithCapacity(unsigned int);
    bool initWithObjects(OSObject const**, unsigned int, unsigned int);
    bool isEqualTo(OSMetaClassBase const*) const;
    bool isEqualTo(OSArray const*) const;
    int iteratorSize() const;
    bool merge(OSArray const*);
    void removeObject(unsigned int);
    int replaceObject(unsigned int, OSMetaClassBase const*);
    bool serialize(OSSerialize*) const;
    unsigned int setCapacityIncrement(unsigned int);
    bool setObject(OSMetaClassBase const*);
    bool setObject(unsigned int, OSMetaClassBase const*);
    void setOptions(unsigned int, unsigned int, void*);
    static OSArray * withArray(OSArray const*, unsigned int);
    static OSArray * withCapacity(unsigned int);
    static OSArray * withObjects(OSObject const**, unsigned int, unsigned int);
};

class OSBoolean : public OSObject {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    OSBoolean(OSMetaClass const*);
    OSBoolean();
    ~OSBoolean();

    void free();
    int getMetaClass() const;
    int getValue() const;
    int initialize();
    bool isEqualTo(OSMetaClassBase const*) const;
    bool isEqualTo(OSBoolean const*) const;
    bool isFalse() const;
    bool isTrue() const;
    bool serialize(OSSerialize*) const;
    void taggedRelease(void const*, int) const;
    void taggedRetain(void const*) const;
    static OSBoolean * withBoolean(bool);
};

class OSCollectionIterator : public OSIterator {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    OSCollectionIterator(OSMetaClass const*);
    OSCollectionIterator();
    ~OSCollectionIterator();

    void free();
    int getMetaClass() const;
    int getNextObject();
    int initWithCollection(OSCollection const*);
    bool isValid();
    void reset();
    static OSCollectionIterator * withCollection(OSCollection const*);
};

class OSData : public OSObject {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    OSData(OSMetaClass const*);
    OSData();
    ~OSData();

    int appendByte(unsigned char, unsigned int);
    bool appendBytes(OSData const*);
    bool appendBytes(void const*, unsigned int);
    unsigned int ensureCapacity(unsigned int);
    void free();
    void * getBytesNoCopy(unsigned int, unsigned int) const;
    void * getBytesNoCopy() const;
    unsigned int getCapacity() const;
    unsigned int getCapacityIncrement() const;
    uint64_t getLength() const;
    int getMetaClass() const;
    bool initWithBytes(void const*, unsigned int);
    bool initWithBytesNoCopy(void*, unsigned int);
    bool initWithCapacity(unsigned int);
    int initWithData(OSData const*);
    int initWithData(OSData const*, unsigned int, unsigned int);
    bool isEqualTo(OSMetaClassBase const*) const;
    bool isEqualTo(OSString const*) const;
    bool isEqualTo(OSData const*) const;
    bool isEqualTo(void const*, unsigned int) const;
    bool serialize(OSSerialize*) const;
    unsigned int setCapacityIncrement(unsigned int);
    void setDeallocFunction(void (*)(void*, unsigned int));
    static OSData * withBytes(void const*, unsigned int);
    static OSData * withBytesNoCopy(void*, unsigned int);
    static OSData * withCapacity(unsigned int);
    static OSData * withData(OSData const*);
    static OSData * withData(OSData const*, unsigned int, unsigned int);
};

class OSDictionary : public OSCollection {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    OSDictionary(OSMetaClass const*);
    OSDictionary();
    ~OSDictionary();

    int copyCollection(OSDictionary*);
    unsigned int ensureCapacity(unsigned int);
    void flushCollection();
    void free();
    unsigned int getCapacity() const;
    unsigned int getCapacityIncrement() const;
    unsigned int getCount() const;
    int getMetaClass() const;
    bool getNextObjectForIterator(void*, OSObject**) const;
    OSObject * getObject(OSString const*) const;
    OSObject * getObject(OSSymbol const*) const;
    OSObject * getObject(char const*) const;
    int initIterator(void*) const;
    bool initWithCapacity(unsigned int);
    bool initWithDictionary(OSDictionary const*, unsigned int);
    bool initWithObjects(OSObject const**, OSString const**, unsigned int, unsigned int);
    bool initWithObjects(OSObject const**, OSSymbol const**, unsigned int, unsigned int);
    bool isEqualTo(OSMetaClassBase const*) const;
    bool isEqualTo(OSDictionary const*) const;
    bool isEqualTo(OSDictionary const*, OSCollection const*) const;
    int iteratorSize() const;
    bool merge(OSDictionary const*);
    void removeObject(OSString const*);
    void removeObject(OSSymbol const*);
    void removeObject(char const*);
    bool serialize(OSSerialize*) const;
    unsigned int setCapacityIncrement(unsigned int);
    bool setObject(OSString const*, OSMetaClassBase const*);
    bool setObject(OSSymbol const*, OSMetaClassBase const*);
    bool setObject(char const*, OSMetaClassBase const*);
    void setOptions(unsigned int, unsigned int, void*);
    static OSDictionary * withCapacity(unsigned int);
    static OSDictionary * withDictionary(OSDictionary const*, unsigned int);
    static OSDictionary * withObjects(OSObject const**, OSString const**, unsigned int, unsigned int);
    static OSDictionary * withObjects(OSObject const**, OSSymbol const**, unsigned int, unsigned int);
};

class OSMetaClass : public OSMetaClassBase {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    OSMetaClass(char const*, OSMetaClass const*, unsigned int);
    ~OSMetaClass();

    static OSMetaClass * allocClassWithName(OSString const*);
    static OSMetaClass * allocClassWithName(OSSymbol const*);
    static OSMetaClass * allocClassWithName(char const*);
    int checkMetaCast(OSMetaClassBase const*) const;
    int checkMetaCastWithName(OSString const*, OSMetaClassBase const*);
    int checkMetaCastWithName(OSSymbol const*, OSMetaClassBase const*);
    int checkMetaCastWithName(char const*, OSMetaClassBase const*);
    static bool checkModLoad(void*);
    void considerUnloads();
    int getClassDictionary();
    const char * getClassName() const;
    unsigned int getClassSize() const;
    unsigned int getInstanceCount() const;
    int getMetaClass() const;
    int getMetaClassWithName(OSSymbol const*);
    int getRetainCount() const;
    const OSMetaClass * getSuperClass() const;
    void instanceConstructed() const;
    int instanceDestructed() const;
    int logError(int);
    bool modHasInstance(char const*);
    void operator delete(void*, unsigned long);
    void * operator new(unsigned long);
    static int postModLoad(void*);
    static OSMetaClass * preModLoad(char const*);
    int printInstanceCounts();
    void release(int) const;
    void release() const;
    void reportModInstances(char const*);
    int reservedCalled(int) const;
    void retain() const;
    bool serialize(OSSerialize*) const;
    int serializeClassDictionary(OSDictionary*);
    void taggedRelease(void const*) const;
    void taggedRelease(void const*, int) const;
    void taggedRetain(void const*) const;
};

class OSMetaClassMeta : public OSMetaClass {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    OSMetaClassMeta();

    OSObject * alloc() const;
};

class OSNumber : public OSObject {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    OSNumber(OSMetaClass const*);
    OSNumber();
    ~OSNumber();

    void addValue(long long);
    void free();
    int getMetaClass() const;
    bool init(char const*, unsigned int);
    bool init(unsigned long long, unsigned int);
    bool isEqualTo(OSMetaClassBase const*) const;
    bool isEqualTo(OSNumber const*) const;
    unsigned int numberOfBits() const;
    unsigned int numberOfBytes() const;
    bool serialize(OSSerialize*) const;
    void setValue(unsigned long long);
    unsigned short unsigned16BitValue() const;
    unsigned int unsigned32BitValue() const;
    unsigned long long unsigned64BitValue() const;
    unsigned char unsigned8BitValue() const;
    static OSNumber * withNumber(char const*, unsigned int);
    static OSNumber * withNumber(unsigned long long, unsigned int);
};

class OSOrderedSet : public OSCollection {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    OSOrderedSet(OSMetaClass const*);
    OSOrderedSet();
    ~OSOrderedSet();

    bool containsObject(OSMetaClassBase const*) const;
    int copyCollection(OSDictionary*);
    unsigned int ensureCapacity(unsigned int);
    void flushCollection();
    void free();
    unsigned int getCapacity() const;
    unsigned int getCapacityIncrement() const;
    unsigned int getCount() const;
    int getFirstObject() const;
    OSObject * getLastObject() const;
    int getMetaClass() const;
    bool getNextObjectForIterator(void*, OSObject**) const;
    OSObject * getObject(unsigned int) const;
    int getOrderingRef();
    int initIterator(void*) const;
    bool initWithCapacity(unsigned int, long (*)(OSMetaClassBase const*, OSMetaClassBase const*, void*), void*);
    bool isEqualTo(OSMetaClassBase const*) const;
    bool isEqualTo(OSOrderedSet const*) const;
    int iteratorSize() const;
    bool member(OSMetaClassBase const*) const;
    int orderObject(OSMetaClassBase const*);
    void removeObject(OSMetaClassBase const*);
    unsigned int setCapacityIncrement(unsigned int);
    void setFirstObject(OSMetaClassBase const*);
    void setLastObject(OSMetaClassBase const*);
    bool setObject(OSMetaClassBase const*);
    bool setObject(unsigned int, OSMetaClassBase const*);
    void setOptions(unsigned int, unsigned int, void*);
    static OSOrderedSet * withCapacity(unsigned int, long (*)(OSMetaClassBase const*, OSMetaClassBase const*, void*), void*);
};

class OSSerialize : public OSObject {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    OSSerialize(OSMetaClass const*);
    OSSerialize();
    ~OSSerialize();

    void addChar(char);
    void addString(char const*);
    void addXMLEndTag(char const*);
    void addXMLStartTag(OSMetaClassBase const*, char const*);
    int clearText();
    unsigned int ensureCapacity(unsigned int);
    void free();
    unsigned int getCapacity() const;
    unsigned int getCapacityIncrement() const;
    uint64_t getLength() const;
    int getMetaClass() const;
    bool initWithCapacity(unsigned int);
    int previouslySerialized(OSMetaClassBase const*);
    unsigned int setCapacityIncrement(unsigned int);
    int text() const;
    static OSSerialize * withCapacity(unsigned int);
};

class OSSerializer : public OSObject {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    OSSerializer(OSMetaClass const*);
    OSSerializer();
    ~OSSerializer();

    int forTarget(void*, bool (*)(void*, void*, OSSerialize*), void*);
    int getMetaClass() const;
    bool serialize(OSSerialize*) const;
};

class OSSet : public OSCollection {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    OSSet(OSMetaClass const*);
    OSSet();
    ~OSSet();

    bool containsObject(OSMetaClassBase const*) const;
    int copyCollection(OSDictionary*);
    unsigned int ensureCapacity(unsigned int);
    void flushCollection();
    void free();
    OSObject * getAnyObject() const;
    unsigned int getCapacity() const;
    unsigned int getCapacityIncrement() const;
    unsigned int getCount() const;
    int getMetaClass() const;
    bool getNextObjectForIterator(void*, OSObject**) const;
    int initIterator(void*) const;
    bool initWithArray(OSArray const*, unsigned int);
    bool initWithCapacity(unsigned int);
    bool initWithObjects(OSObject const**, unsigned int, unsigned int);
    int initWithSet(OSSet const*, unsigned int);
    bool isEqualTo(OSMetaClassBase const*) const;
    bool isEqualTo(OSSet const*) const;
    int iteratorSize() const;
    bool member(OSMetaClassBase const*) const;
    bool merge(OSArray const*);
    bool merge(OSSet const*);
    void removeObject(OSMetaClassBase const*);
    bool serialize(OSSerialize*) const;
    unsigned int setCapacityIncrement(unsigned int);
    bool setObject(OSMetaClassBase const*);
    void setOptions(unsigned int, unsigned int, void*);
    static OSSet * withArray(OSArray const*, unsigned int);
    static OSSet * withCapacity(unsigned int);
    static OSSet * withObjects(OSObject const**, unsigned int, unsigned int);
    static OSSet * withSet(OSSet const*, unsigned int);
};

class OSString : public OSObject {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    OSString(OSMetaClass const*);
    OSString();
    ~OSString();

    void free();
    const char * getCStringNoCopy() const;
    char getChar(unsigned int) const;
    uint64_t getLength() const;
    int getMetaClass() const;
    bool initWithCString(char const*);
    int initWithCStringNoCopy(char const*);
    bool initWithString(OSString const*);
    bool isEqualTo(OSMetaClassBase const*) const;
    bool isEqualTo(OSData const*) const;
    bool isEqualTo(OSString const*) const;
    bool isEqualTo(char const*) const;
    bool serialize(OSSerialize*) const;
    void setChar(char, unsigned int);
    static OSString * withCString(char const*);
    static OSString * withCStringNoCopy(char const*);
    static OSString * withString(OSString const*);
};

class OSSymbol : public OSString {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    OSSymbol(OSMetaClass const*);
    OSSymbol();
    ~OSSymbol();

    int checkForPageUnload(void*, void*);
    void free();
    int getMetaClass() const;
    bool initWithCString(char const*);
    int initWithCStringNoCopy(char const*);
    bool initWithString(OSString const*);
    int initialize();
    bool isEqualTo(OSMetaClassBase const*) const;
    bool isEqualTo(OSSymbol const*) const;
    bool isEqualTo(char const*) const;
    void taggedRelease(void const*) const;
    void taggedRelease(void const*, int) const;
    static OSSymbol * withCString(char const*);
    static OSSymbol * withCStringNoCopy(char const*);
    static OSSymbol * withString(OSString const*);
};

class OSSymbolPool : public OSObject {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    OSSymbolPool(OSSymbolPool const*);
    ~OSSymbolPool();

    int exp2ml(unsigned int);
    int findSymbol(char const*) const;
    bool init();
    int initHashState();
    int insertSymbol(OSSymbol*);
    int log2(unsigned int);
    int nextHashState(OSSymbolPoolState*);
    void operator delete(void*, unsigned long);
    void * operator new(unsigned long);
    int reconstructSymbols();
    void removeSymbol(OSSymbol*);
};

class RootDomainUserClient : public IOUserClient {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    RootDomainUserClient(OSMetaClass const*);
    RootDomainUserClient();
    ~RootDomainUserClient();

    int clientClose();
    int getMetaClass() const;
    IOExternalMethod * getTargetAndMethodForIndex(IOService**, unsigned long);
    void setPreventative(unsigned long, unsigned long);
    bool start(IOService*);
};

class _IOOpenServiceIterator : public OSIterator {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    _IOOpenServiceIterator(OSMetaClass const*);
    _IOOpenServiceIterator();
    ~_IOOpenServiceIterator();

    void free();
    int getMetaClass() const;
    int getNextObject();
    bool isValid();
    int iterator(OSIterator*, IOService const*, IOService const*);
    void reset();
};

class _IOServiceInterestNotifier : public OSObject {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    _IOServiceInterestNotifier(OSMetaClass const*);
    _IOServiceInterestNotifier();
    ~_IOServiceInterestNotifier();

    void disable();
    void enable(bool);
    void free();
    int getMetaClass() const;
    void remove();
    int wait();
};

class _IOServiceJob : public OSObject {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    _IOServiceJob(OSMetaClass const*);
    _IOServiceJob();
    ~_IOServiceJob();

    int getMetaClass() const;
    int pingConfig(_IOServiceJob*);
    int startJob(IOService*, int, unsigned long);
};

class _IOServiceNotifier : public IONotifier {
public:
    static const OSMetaClass * const gMetaClass;
    static const OSMetaClass * const metaClass;
    static const OSMetaClass * const superClass;

    _IOServiceNotifier(OSMetaClass const*);
    _IOServiceNotifier();
    ~_IOServiceNotifier();

    void disable();
    void enable(bool);
    void free();
    int getMetaClass() const;
    void remove();
    int wait();
};

/* Free C++ functions */
int IODTCompareNubName(IORegistryEntry const*, OSString*, OSString**);
int IODTFindMatchingEntries(IORegistryEntry*, unsigned long, char const*);
int IODTFindSlotName(IORegistryEntry*, unsigned long);
int IODTGetCellCounts(IORegistryEntry*, unsigned long*, unsigned long*);
int IODTInterruptControllerName(IORegistryEntry*);
int IODTMakeNVDescriptor(IORegistryEntry*, IONVRAMDescriptor*);
int IODTMapInterrupts(IORegistryEntry*);
int IODTMatchNubWithKeys(IORegistryEntry*, char const*);
int IODTResolveAddressCell(IORegistryEntry*, unsigned long*, unsigned long*, unsigned long*);
int IODTResolveAddressing(IORegistryEntry*, char const*, IODeviceMemory*);
int IODTSetResolving(IORegistryEntry*, long (*)(unsigned long, unsigned long*, unsigned long*), void (*)(IORegistryEntry*, unsigned char*, unsigned char*, unsigned char*));
void * IODeviceTreeAlloc(void*);
int IOServiceOrdering(OSMetaClassBase const*, OSMetaClassBase const*, void*);
void OSFlushObjectTrackList();
OSObject * OSUnserialize(char const*, OSString**);
OSObject * OSUnserializeXML(char const*, OSString**);
OSObject * OSUnserializeXML(char const*, unsigned long, OSString**);
void operator delete(void*);
void operator delete[](void*);
void * operator new(unsigned long);
void * operator new[](unsigned long);
int printDictionaryKeys(OSDictionary*, char*);

/* IOKit C functions */
extern "C" {

extern int IOAlignmentToSize();
extern int IOBSDNameMatching();
extern int IOBSDRegistryEntryForDeviceTree();
extern int IOBSDRegistryEntryGetData();
extern int IOBSDRegistryEntryRelease();
extern int IOCPURunPlatformActiveActions();
extern int IOCPURunPlatformQuiesceActions();
extern int IOCreateThread();
extern int IODTFreeLoaderInfo();
extern int IODTGetLoaderInfo();
extern int IODelay();
extern int IOExitThread();
extern int IOFindBSDRoot();
extern int IOFindNameForValue();
extern int IOFindValueForName();
extern int IOFlushProcessorCache();
extern void IOFree(void *address, uint32_t size);
extern int IOFreeAligned();
extern int IOFreeContiguous();
extern int IOFreePageable();
extern int IOGetTime();
extern int IOIteratePageableMaps();
extern int IOKitBSDInit();
extern int IOKitResetTime();
extern int IOLibInit();
extern void * IOLockAlloc();
extern void IOLockFree(void *lock);
extern int IOLockGetMachLock();
extern int IOLockInitWithState();
extern int IOLockSleep();
extern int IOLockSleepDeadline();
extern int IOLockWakeup();
extern void IOLog(const char *format, ...);
extern int IOLogv();
extern void * IOMalloc(uint32_t size);
extern int IOMallocAligned();
extern int IOMallocContiguous();
extern int IOMallocPageable();
extern int IOMappedRead16();
extern int IOMappedRead32();
extern int IOMappedRead64();
extern int IOMappedRead8();
extern int IOMappedWrite16();
extern int IOMappedWrite32();
extern int IOMappedWrite64();
extern int IOMappedWrite8();
extern int IOMapperIOVMAlloc();
extern int IOMapperIOVMFree();
extern int IOMapperInsertPPNPages();
extern int IOMapperInsertPage();
extern int IOMapperInsertUPLPages();
extern int IONDRVLibrariesInitialize();
extern int IONetworkNamePrefixMatching();
extern int IOPageableMapForAddress();
extern int IOPanic();
extern int IOPause();
extern int IOPrintPlane();
extern int IORWLockAlloc();
extern int IORWLockFree();
extern int IORWLockGetMachLock();
extern int IORecursiveLockAlloc();
extern int IORecursiveLockAllocWithLockGroup();
extern int IORecursiveLockFree();
extern int IORecursiveLockGetMachLock();
extern int IORecursiveLockHaveLock();
extern int IORecursiveLockLock();
extern int IORecursiveLockSleep();
extern int IORecursiveLockSleepDeadline();
extern int IORecursiveLockTryLock();
extern int IORecursiveLockUnlock();
extern int IORecursiveLockWakeup();
extern int IOSetProcessorCacheMode();
extern int IOSimpleLockAlloc();
extern int IOSimpleLockFree();
extern int IOSimpleLockGetMachLock();
extern int IOSimpleLockInit();
extern int IOSizeToAlignment();
extern void IOSleep(unsigned int milliseconds);
extern int IOSystemShutdownNotification();
extern int IOZeroTvalspec();

extern int OSAddAtomic();
extern int OSAddAtomic16();
extern int OSAddAtomic64();
extern int OSAddAtomic8();
extern int OSBacktrace();
extern int OSBitAndAtomic();
extern int OSBitAndAtomic16();
extern int OSBitAndAtomic8();
extern int OSBitOrAtomic();
extern int OSBitOrAtomic16();
extern int OSBitOrAtomic8();
extern int OSBitXorAtomic();
extern int OSBitXorAtomic16();
extern int OSBitXorAtomic8();
extern int OSCompareAndSwap();
extern int OSCompareAndSwap64();
extern int OSCompareAndSwapPtr();
extern int OSDecrementAtomic();
extern int OSDecrementAtomic16();
extern int OSDecrementAtomic8();
extern int OSFree();
extern int OSIncrementAtomic();
extern int OSIncrementAtomic16();
extern int OSIncrementAtomic8();
extern int OSKernelStackRemaining();
extern int OSMalloc();
extern int OSMalloc_Tagalloc();
extern int OSMalloc_Tagfree();
extern int OSMalloc_noblock();
extern int OSMalloc_nowait();
extern int OSPrintMemory();
extern int OSReportWithBacktrace();
extern int OSSynchronizeIO();
extern int OSTestAndClear();
extern int OSTestAndSet();
extern int OSlibkernInit();

/* IOKit globals */
extern void * gIODTPlane;
extern void * gIOServicePlane;
extern void * gIOPowerPlane;
extern void * gIOKitDebug;
extern void * gIODefaultMatchCategoryKey;
extern void * gIODeviceMemoryKey;
extern void * gIOFirstMatchNotification;
extern void * gIOFirstPublishNotification;
extern void * gIOGeneralInterest;
extern void * gIOInterruptControllersKey;
extern void * gIOInterruptSpecifiersKey;
extern void * gIOKernelConfigTables;
extern void * gIOKitDebugKey;
extern void * gIOLocationKey;
extern void * gIOLocationMatchKey;
extern void * gIOMatchCategoryKey;
extern void * gIOMatchedNotification;
extern void * gIOMatchedServiceCountKey;
extern void * gIOModuleIdentifierKey;
extern void * gIONameKey;
extern void * gIONameMatchKey;
extern void * gIONameMatchedKey;
extern void * gIOParentMatchKey;
extern void * gIOPathMatchKey;
extern void * gIOPlatformActiveActionKey;
extern void * gIOPlatformHaltRestartActionKey;
extern void * gIOPlatformQuiesceActionKey;
extern void * gIOPlatformSleepActionKey;
extern void * gIOPlatformWakeActionKey;
extern void * gIOPriorityPowerStateInterest;
extern void * gIOProbeScoreKey;
extern void * gIOPropertyMatchKey;
extern void * gIOProviderClassKey;
extern void * gIOPublishNotification;
extern void * gIORangeAllocatorLock;
extern void * gIOResourceMatchKey;
extern void * gIOResourcesKey;
extern void * gIOServiceKey;
extern void * gIOTerminatedNotification;
extern void * gIOUserClientClassKey;
extern void * gIODTAddressCellKey;
extern void * gIODTCompatibleKey;
extern void * gIODTDefaultInterruptController;
extern void * gIODTInterruptCellKey;
extern void * gIODTModelKey;
extern void * gIODTNWInterruptMappingKey;
extern void * gIODTNameKey;
extern void * gIODTPHandleKey;
extern void * gIODTPersistKey;
extern void * gIODTRangeKey;
extern void * gIODTSharedInterrupts;
extern void * gIODTSizeCellKey;
extern void * gIODTTypeKey;
extern void * gIODTUnitKey;
extern void * kOSBooleanTrue;
extern void * kOSBooleanFalse;

} /* extern "C" */

#endif /* __cplusplus */

#endif /* _KERNEL_IOKIT_CPP_H_ */
