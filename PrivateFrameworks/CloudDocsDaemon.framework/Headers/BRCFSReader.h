/* Runtime dump - BRCFSReader
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCFSReader : BRCFSSchedulerBase <BRCModule, BRCFSEventsDelegate, BRCFileCoordinationReading>
{
    BRCCountedSet * _coordinatedReaders;
    char _readerCountReachedMax;
    BRCRelativePath * _currentScan;
    BRCMinHeap * _lostHeap;
    NSObject<OS_dispatch_queue> * _lostScanQueue;
    NSObject<OS_dispatch_source> * _lostScanSource;
    NSObject<OS_dispatch_source> * _lostScanDelay;
    char _resumed;
    NSObject<OS_dispatch_group> * _lostScanGroup;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_group> * lostScanGroup;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * serialQueue;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) char isCancelled;

- (void)suspend;
- (void)reset;
- (void)resume;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)serialQueue;
- (void)_close;
- (BRCFSReader *)initWithAccountSession:(NSObject *)arg0;
- (void)_schedule;
- (char)_canRetryThrottleID:(long long)arg0 zone:(NSObject *)arg1;
- (char)_scheduleOne:(id)arg0;
- (void)unscheduleContainerForLostScan:(id)arg0;
- (void)createThrottleID:(long long)arg0 zone:(NSObject *)arg1 state:(int)arg2;
- (void)readUnderCoordinationAtURL:(NSURL *)arg0;
- (void)didChangeLostScanStatusForContainer:(NSObject *)arg0;
- (char)startReadCoordinationInZone:(NSObject *)arg0;
- (void)endReadCoordinationInZone:(NSObject *)arg0;
- (void)scanContainerDocumentsIfNeeded:(id)arg0;
- (unsigned int)_readCoordinationCount;
- (void)_createOrRetryThrottleID:(long long)arg0 zone:(NSObject *)arg1 state:(int)arg2 throttle:(EKTravelEngineThrottle *)arg3 hasBeenTried:(char)arg4;
- (void)_retriedThrottleID:(long long)arg0 zone:(NSObject *)arg1 state:(int)arg2;
- (void)_scheduleCoordinatedReadForItem:(NSObject *)arg0 path:(NSString *)arg1;
- (char)readUnderCoordinationWithLookup:(id)arg0;
- (NSURL *)lookupAndReadItemUnderCoordinationAtURL:(NSURL *)arg0;
- (void)fseventOnRoot:(NSObject *)arg0 flags:(unsigned long)arg1;
- (void)fseventOnSharedRoot:(NSObject *)arg0 flags:(unsigned long)arg1;
- (void)fseventOnContainer:(NSObject *)arg0 flags:(unsigned long)arg1;
- (void)fseventInsideSharedEnclosure:(id)arg0 flags:(unsigned long)arg1;
- (void)fseventOnAlias:(id)arg0 flags:(unsigned long)arg1 lookup:(BRCPathToItemLookup *)arg2;
- (void)fseventOnDocument:(NSObject *)arg0 flags:(unsigned long)arg1 lookup:(BRCPathToItemLookup *)arg2;
- (void)fseventOnDirectory:(id)arg0 flags:(unsigned long)arg1 lookup:(BRCPathToItemLookup *)arg2;
- (void)_cancelScan;
- (id)itemForCreatedDocumentsDirectory:(id)arg0 container:(NSObject *)arg1 path:(NSString *)arg2;
- (void)fseventAtPath:(NSString *)arg0 flags:(unsigned long)arg1;
- (void)_fseventOnDocument:(NSObject *)arg0 flags:(unsigned long)arg1 item:(NSObject *)arg2 lookup:(BRCPathToItemLookup *)arg3;
- (void)_processDeadItem:(NSObject *)arg0;
- (void)_resolveDocumentID:(unsigned int)arg0 zone:(NSObject *)arg1;
- (void)_processLostItem:(NSObject *)arg0 resolvedToPath:(NSString *)arg1;
- (void)_scanDirectory:(id)arg0 atPath:(NSString *)arg1 lookup:(BRCPathToItemLookup *)arg2;
- (void)_didResolvedDocumentID:(unsigned int)arg0 fileID:(unsigned long long)arg1 zone:(NSObject *)arg2;
- (void)_scanDone:(id)arg0 atPath:(NSString *)arg1 lookup:(BRCPathToItemLookup *)arg2;
- (void)_slowScanDirectoryAtPath:(NSString *)arg0;
- (void)_continueScan:(id)arg0;
- (void)_startScan:(id)arg0;
- (void)_processLostItem:(NSObject *)arg0;
- (void)_lostScanSchedule;
- (NSObject<OS_dispatch_group> *)lostScanGroup;

@end
