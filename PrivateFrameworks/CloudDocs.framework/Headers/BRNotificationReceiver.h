/* Runtime dump - BRNotificationReceiver
 * Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRNotificationReceiver : NSObject <BRItemNotificationReceiving>
{
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_queue> * _ipcQueue;
    NSObject<OS_dispatch_queue> * _invalidationQueue;
    BRNotificationQueue * _notifs;
    NSMutableArray * _senders;
    int _gatherDones;
    <BRNotificationReceiverDelegate> * _delegate;
    NSObject<OS_dispatch_source> * _source;
    NSObject<OS_dispatch_source> * _timer;
    unsigned int _receivedChanges;
    unsigned int _batchingChanges;
    double _batchingDelay;
    unsigned long long _lastBatchTime;
    NSMutableDictionary * _progressObserverByID;
    NSMutableDictionary * _itemInTransferByID;
    id _suspendCount;
    int _networkReachabilityToken;
    char _isNetworkReachable;
}

@property (readonly, nonatomic) unsigned int pendingCount;
@property (nonatomic) unsigned int batchingChanges;
@property (nonatomic) double batchingDelay;
@property (retain, nonatomic) <BRNotificationReceiverDelegate> * delegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)setDelegate:(<BRNotificationReceiverDelegate> *)arg0;
- (BRNotificationReceiver *)init;
- (<BRNotificationReceiverDelegate> *)delegate;
- (void)invalidate;
- (void)flush;
- (void)suspend;
- (void)resume;
- (void)_signalSourceIfNeeded;
- (NSObject *)_getSender;
- (void)networkDidChangeReachabilityStatusTo:(char)arg0;
- (void)invalidateAndNotify:(char)arg0;
- (void)_receiveUpdates:(id)arg0;
- (unsigned int)pendingCount;
- (char)watchUbiquitousScopes:(id)arg0 bundleID:(NSString *)arg1 predicate:(NSPredicate *)arg2;
- (void)invalidateAndDontNotifyDelegate;
- (void)receiveStitchingUpdates:(id)arg0;
- (void)disableUpdatesFromIPCBeforeStitching;
- (void)enableUpdatesFromIPCAfterStitching;
- (unsigned int)batchingChanges;
- (void)setBatchingChanges:(unsigned int)arg0;
- (double)batchingDelay;
- (void)setBatchingDelay:(double)arg0;
- (void)receiveUpdates:(id)arg0 logicalExtensions:(id)arg1 physicalExtensions:(id)arg2 reply:(id /* block */)arg3;
- (void)dequeue:(unsigned int)arg0 block:(id /* block */)arg1;
- (void)finalize;

@end
