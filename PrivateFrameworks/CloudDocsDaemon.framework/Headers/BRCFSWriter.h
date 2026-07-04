/* Runtime dump - BRCFSWriter
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCFSWriter : NSObject <BRCModule, BRCFileCoordinationWriting>
{
    BRCAccountSession * _session;
    id _suspendCount;
    NSObject<OS_dispatch_queue> * _serialQueue;
    char _isCancelled;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * serialQueue;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) char isCancelled;

- (void)cancel;
- (void)suspend;
- (char)isCancelled;
- (void)resume;
- (void)close;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)serialQueue;
- (void)setIsCancelled:(char)arg0;
- (BRCFSWriter *)initWithAccountSession:(NSObject *)arg0;
- (void)applyChangesForServerItem:(NSObject *)arg0 localItem:(NSObject *)arg1 throttleID:(long long)arg2 zone:(NSObject *)arg3;
- (void)writeUnderCoordinationFromURL:(NSURL *)arg0 toURL:(NSURL *)arg1 canDelete:(char)arg2;
- (void)fixupItemsAtStartup;
- (void)_applyChangesForServerAlias:(id)arg0 localAlias:(id)arg1 throttleID:(long long)arg2 zone:(NSObject *)arg3 diffs:(unsigned long long)arg4;
- (void)_stageCreationOfDirectory:(id)arg0;
- (void)_writeUnderCoordinationFromURL:(NSURL *)arg0 toURL:(NSURL *)arg1 canDelete:(char)arg2;

@end
