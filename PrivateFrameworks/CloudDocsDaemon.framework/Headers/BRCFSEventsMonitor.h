/* Runtime dump - BRCFSEventsMonitor
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCFSEventsMonitor : NSObject <BRCModule, BRCLowDiskDelegate>
{
    BRCAccountSession * _session;
    id _suspendCount;
    id _resetCount;
    BRCFSEventsPersistedState * _persistedState;
    NSString * _devicePath;
    NSString * _rootPathRelativeToDevice;
    NSObject<OS_dispatch_source> * _rootVnodeWatcher;
    char _volumeHasLowDiskSpace;
    char _volumeIsCaseSensitive;
    struct __FSEventStream * _stream;
    NSObject<OS_dispatch_queue> * _streamQueue;
    NSObject<OS_dispatch_source> * _historicalEventSource;
    BRCFSEventsPersistedState * _rendezVous;
    NSObject<OS_dispatch_semaphore> * _semaphore;
    char _drainEvents;
    BRCRelativePath * _root;
    <BRCFSEventsDelegate> * _delegate;
    PQLConnection * _db;
}

@property (weak) <BRCFSEventsDelegate> * delegate;
@property (retain, nonatomic) PQLConnection * db;
@property (readonly, nonatomic) BRCRelativePath * root;
@property (readonly, nonatomic) char volumeIsCaseSensitive;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) char isCancelled;

- (void)cancel;
- (void)dealloc;
- (void)setDelegate:(<BRCFSEventsDelegate> *)arg0;
- (<BRCFSEventsDelegate> *)delegate;
- (void)suspend;
- (void)reset;
- (char)isCancelled;
- (void)resume;
- (void)close;
- (void).cxx_destruct;
- (void)_cancel;
- (PQLConnection *)db;
- (BRCRelativePath *)root;
- (void)setIsCancelled:(char)arg0;
- (BRCFSEventsMonitor *)initWithAccountSession:(NSObject *)arg0;
- (char)volumeIsCaseSensitive;
- (void)lowDiskStatusChangedForDevice:(int)arg0 hasEnoughSpace:(char)arg1;
- (void)setDB:(NSSet *)arg0;
- (char)openWithRootPath:(BRCRelativePath *)arg0 error:(id *)arg1;
- (void)stopWatcher;
- (void)signalAfterCurrentFSEvent:(NSObject *)arg0;
- (void)fseventAtPath:(NSString *)arg0 withFlags:(unsigned long)arg1 andID:(unsigned long long)arg2 eventIndex:(unsigned int)arg3 eventCount:(unsigned int)arg4 initialScan:(char)arg5;
- (char)setUpRootAtPath:(NSString *)arg0 error:(id *)arg1;
- (char)setUpStreamSynchronously:(char)arg0 error:(id *)arg1;
- (void)didProcessEventID:(unsigned long long)arg0;

@end
