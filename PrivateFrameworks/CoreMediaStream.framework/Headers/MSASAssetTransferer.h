/* Runtime dump - MSASAssetTransferer
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSASAssetTransferer : NSObject <MMCSEngineDelegate>
{
    char _hasShutDown;
    id _delegate;
    NSString * _personID;
    MMCSEngine * _engine;
    MSAlbumSharingDaemon * _daemon;
    MSASPersonModel * _model;
    MSBackoffManager * _backoffManager;
    int _maxBatchCount;
    int _maxRetryCount;
    NSString * _focusAlbumGUID;
    NSString * _focusAssetCollectionGUID;
    NSObject<OS_dispatch_queue> * _workQueue;
    NSObject<OS_dispatch_queue> * _eventQueue;
    double _maxMMCSTokenValidityTimeInterval;
}

@property (weak, nonatomic) id delegate;
@property (copy, nonatomic) NSString * personID;
@property (readonly, nonatomic) MMCSEngine * engine;
@property (nonatomic) double maxMMCSTokenValidityTimeInterval;
@property (weak, nonatomic) MSAlbumSharingDaemon * daemon;
@property (weak, nonatomic) MSASPersonModel * model;
@property (weak, nonatomic) MSBackoffManager * backoffManager;
@property (copy, nonatomic) NSString * focusAlbumGUID;
@property (copy, nonatomic) NSString * focusAssetCollectionGUID;
@property (nonatomic) int maxBatchCount;
@property (nonatomic) int maxRetryCount;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * eventQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * workQueue;
@property (nonatomic) char hasShutDown;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (NSObject *)delegate;
- (MSASPersonModel *)model;
- (void).cxx_destruct;
- (void)setModel:(MSASPersonModel *)arg0;
- (MSAlbumSharingDaemon *)daemon;
- (NSObject<OS_dispatch_queue> *)workQueue;
- (void)setWorkQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)setDaemon:(MSAlbumSharingDaemon *)arg0;
- (MSASAssetTransferer *)initWithPersonID:(NSString *)arg0;
- (MMCSEngine *)engine;
- (void)shutDownCompletionBlock:(id /* block */)arg0;
- (void)setFocusAlbumGUID:(NSString *)arg0;
- (void)setFocusAssetCollectionGUID:(NSString *)arg0;
- (void)cancelCompletionBlock:(id /* block */)arg0;
- (NSString *)focusAssetCollectionGUID;
- (MSASAssetTransferer *)initWithPersonID:(NSString *)arg0 eventQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)setBackoffManager:(MSBackoffManager *)arg0;
- (void)workQueueRetryOutstandingActivities;
- (void)setMaxBatchCount:(int)arg0;
- (void)setMaxRetryCount:(int)arg0;
- (void)setMaxMMCSTokenValidityTimeInterval:(double)arg0;
- (NSObject<OS_dispatch_queue> *)eventQueue;
- (void)setHasShutDown:(char)arg0;
- (void)stopCompletionBlock:(id /* block */)arg0;
- (NSError *)_canceledError;
- (char)hasShutDown;
- (NSString *)focusAlbumGUID;
- (void)setEventQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)MMCSEngine:(struct __MMCSEngine *)arg0 logPerformanceMetrics:(id)arg1;
- (void)MMCSEngine:(struct __MMCSEngine *)arg0 didMakeGetProgress:(float)arg1 state:(int)arg2 onAsset:(NSSet *)arg3;
- (void)MMCSEngine:(struct __MMCSEngine *)arg0 didFinishGettingAsset:(NSSet *)arg1 path:(NSString *)arg2 error:(NSError *)arg3;
- (void)MMCSEngine:(struct __MMCSEngine *)arg0 didMakePutProgress:(float)arg1 state:(int)arg2 onAsset:(NSSet *)arg3;
- (void)MMCSEngine:(struct __MMCSEngine *)arg0 didFinishPuttingAsset:(NSSet *)arg1 putReceipt:(id)arg2 error:(NSError *)arg3;
- (void)didFinishGettingAllAssets;
- (void)didFinishPuttingAllAssets;
- (void)MMCSEngine:(struct __MMCSEngine *)arg0 didCreateRequestorContext:(NSObject *)arg1 forAssets:(NSArray *)arg2;
- (char)MMCSEngine:(struct __MMCSEngine *)arg0 shouldLogAtLogLevel:(int)arg1;
- (void)MMCSEngine:(struct __MMCSEngine *)arg0 logMessage:(NSString *)arg1 logLevel:(int)arg2;
- (void)_sendDidIdleNotification;
- (void)workQueueStop;
- (void)workQueueShutDownCompletionBlock:(id /* block */)arg0;
- (int)maxBatchCount;
- (NSError *)_missingURLError;
- (unsigned long long)workQueueNextItemID;
- (MSBackoffManager *)backoffManager;
- (int)maxRetryCount;
- (NSObject *)_pathForPersonID:(NSObject *)arg0;
- (void)workQueueCancel;
- (NSError *)_missingMMCSTokenError;
- (double)workQueueMaxMMCSTokenValidityTimeInterval;
- (NSError *)_MMCSTokenTooOldError;
- (void)_rereadPerformanceLoggingSetting;
- (double)maxMMCSTokenValidityTimeInterval;
- (NSString *)personID;
- (void)setPersonID:(NSString *)arg0;
- (void)retryOutstandingActivities;

@end
