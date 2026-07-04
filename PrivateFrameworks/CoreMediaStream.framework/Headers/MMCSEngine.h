/* Runtime dump - MMCSEngine
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MMCSEngine : NSObject
{
    NSURL * _workPathURL;
    NSString * _appIDHeader;
    NSString * _dataClass;
    NSDictionary * _options;
    struct __MMCSEngine * _engine;
    struct ? _engineClientContext;
    NSMutableDictionary * _itemIDToAssetMap;
    NSObject<OS_dispatch_queue> * _itemIDToAssetMapQueue;
    NSMutableArray * _requestorContexts;
    NSObject<OS_dispatch_queue> * _reqestorContextQueue;
    NSMutableDictionary * _autoItemIDDictionary;
    NSURL * _autoItemIDPersistenceURL;
    NSObject<OS_dispatch_queue> * _autoItemIDDictionaryQueue;
    char _autoGenerateItemID;
    char _isMetricsGatheringEnabled;
    char _isDone;
    <MMCSEngineDelegate> * _delegate;
    NSThread * _workThread;
    NSTimer * _threadKeepAliveTimer;
}

@property (weak, nonatomic) <MMCSEngineDelegate> * delegate;
@property (readonly, nonatomic) char hasOutstandingActivity;
@property (nonatomic) char autoGenerateItemID;
@property (nonatomic) char isMetricsGatheringEnabled;
@property (retain, nonatomic) NSThread * workThread;
@property (retain, nonatomic) NSTimer * threadKeepAliveTimer;
@property (nonatomic) char isDone;

+ (NSObject *)logStringForPutItemState:(int)arg0;
+ (NSObject *)logStringForGetItemState:(int)arg0;

- (void)setDelegate:(<MMCSEngineDelegate> *)arg0;
- (<MMCSEngineDelegate> *)delegate;
- (char)isActive;
- (void)cancelAllOperations;
- (void).cxx_destruct;
- (void)performBlock:(id /* block */)arg0;
- (char)hasOutstandingActivity;
- (void)_registerAsset:(NSSet *)arg0;
- (void)shutDownCompletionBlock:(id /* block */)arg0;
- (void)unregisterAssets:(NSArray *)arg0;
- (void)threadMain:(id)arg0;
- (MMCSEngine *)initWithWorkPath:(NSString *)arg0 appIDHeader:(NSString *)arg1 dataClass:(NSString *)arg2 options:(NSDictionary *)arg3 modes:(NSArray *)arg4;
- (void)performBlockOnWorkThread:(NSObject *)arg0 waitUntilDone:(/* block */ id)arg1;
- (void)_doNothingTimerHandler:(id /* block */)arg0;
- (char)isDone;
- (void)setIsDone:(char)arg0;
- (void)_logLevel:(int)arg0 message:(NSString *)arg1;
- (void)performBlockOnWorkThread:(NSObject *)arg0;
- (NSObject *)_assetWithItemID:(unsigned long long)arg0;
- (char)isMetricsGatheringEnabled;
- (void)_removeRequestorContext:(NSObject *)arg0;
- (NSTimer *)threadKeepAliveTimer;
- (void)setThreadKeepAliveTimer:(NSTimer *)arg0;
- (unsigned long long)_nextItemID;
- (void)_removeAssetForItemID:(unsigned long long)arg0;
- (void)_registerRequestorContext:(NSObject *)arg0;
- (void)_initItemIDPersistence;
- (MMCSEngine *)initWithWorkPath:(NSString *)arg0 appIDHeader:(NSString *)arg1 dataClass:(NSString *)arg2 options:(NSDictionary *)arg3;
- (void)setIsMetricsGatheringEnabled:(char)arg0;
- (char)_getFileDescriptorAndContentTypeFromItemID:(unsigned long long)arg0 outFD:(int *)arg1 outItemType:(id *)arg2 outError:(id *)arg3;
- (void)_getItemProgressItemID:(unsigned long long)arg0 state:(int)arg1 progress:(double)arg2 requestorContext:(NSObject *)arg3 error:(NSError *)arg4;
- (void)_getItemDoneItemID:(unsigned long long)arg0 path:(NSString *)arg1 requestorContext:(NSObject *)arg2 error:(NSError *)arg3;
- (void)_putItemProgressItemID:(unsigned long long)arg0 state:(int)arg1 progress:(double)arg2 requestorContext:(NSObject *)arg3 error:(NSError *)arg4;
- (void)_putItemDoneItemID:(unsigned long long)arg0 requestorContext:(NSObject *)arg1 putReceipt:(id)arg2 error:(NSError *)arg3;
- (void)_requestCompletedRequestorContext:(NSObject *)arg0;
- (void)cancelOperationsWithContext:(NSObject *)arg0;
- (void)registerAssetForUpload:(id)arg0 completionBlock:(id /* block */)arg1;
- (void)reregisterAssetForUpload:(id)arg0;
- (void)reregisterAssetForDownload:(id)arg0;
- (void)registerAssets:(NSArray *)arg0 forDownloadCompletionBlock:(id /* block */)arg1;
- (void)unregisterAsset:(NSSet *)arg0;
- (void)getAssets:(NSArray *)arg0 requestURL:(NSURL *)arg1 DSID:(NSString *)arg2 options:(NSDictionary *)arg3;
- (void)putAssets:(NSArray *)arg0 requestURL:(NSURL *)arg1 DSID:(NSString *)arg2 options:(NSDictionary *)arg3;
- (char)autoGenerateItemID;
- (void)setAutoGenerateItemID:(char)arg0;
- (NSThread *)workThread;
- (void)setWorkThread:(NSThread *)arg0;

@end
