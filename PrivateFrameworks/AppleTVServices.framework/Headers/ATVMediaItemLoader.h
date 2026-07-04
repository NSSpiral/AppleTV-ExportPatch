/* Runtime dump - ATVMediaItemLoader
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVMediaItemLoader : NSObject <AVAssetResourceLoaderDelegate>
{
    NSObject<ATVMediaItem> * _mediaItem;
    NSString * _state;
    NSError * _error;
    ATVMediaItemTimingData * _timingData;
    AVURLAsset * _AVAsset;
    ATVStateMachine * _stateMachine;
    AVURLAsset * _AVAssetInternal;
    NSObject<OS_dispatch_queue> * _assetInternalAccessQueue;
    NSObject<OS_dispatch_queue> * _assetLoadContextAccessQueue;
    unsigned int _assetLoadContext;
}

@property (retain, nonatomic) NSObject<ATVMediaItem> * mediaItem;
@property (retain, nonatomic) NSString * state;
@property (retain, nonatomic) NSError * error;
@property (retain, nonatomic) ATVMediaItemTimingData * timingData;
@property (retain, nonatomic) AVURLAsset * AVAsset;
@property (readonly, nonatomic) char containsStreamingAVAsset;
@property (retain, nonatomic) ATVStateMachine * stateMachine;
@property (retain, nonatomic) AVURLAsset * AVAssetInternal;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * assetInternalAccessQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * assetLoadContextAccessQueue;
@property (nonatomic) unsigned int assetLoadContext;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (ATVMediaItemLoader *)initWithMediaItem:(NSObject<ATVMediaItem> *)arg0;
- (void)dealloc;
- (NSString *)description;
- (NSString *)state;
- (void)setState:(NSString *)arg0;
- (void)cleanUp;
- (void)load;
- (void).cxx_destruct;
- (AVURLAsset *)AVAsset;
- (void)_registerStateMachineHandlers;
- (NSObject<OS_dispatch_queue> *)assetInternalAccessQueue;
- (AVURLAsset *)AVAssetInternal;
- (ATVStateMachine *)stateMachine;
- (ATVMediaItemTimingData *)timingData;
- (NSDictionary *)_avAssetOptions;
- (NSObject<OS_dispatch_queue> *)assetLoadContextAccessQueue;
- (unsigned int)assetLoadContext;
- (void)setAVAssetInternal:(AVAssetInternal *)arg0;
- (void)setTimingData:(ATVMediaItemTimingData *)arg0;
- (void)setAssetLoadContext:(unsigned int)arg0;
- (char)containsStreamingAVAsset;
- (void)setAVAsset:(NSSet *)arg0;
- (void)setStateMachine:(ATVStateMachine *)arg0;
- (void)setAssetInternalAccessQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)setAssetLoadContextAccessQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (NSError *)error;
- (void)setError:(NSError *)arg0;
- (void)setMediaItem:(NSObject<ATVMediaItem> *)arg0;
- (NSObject<ATVMediaItem> *)mediaItem;
- (char)resourceLoader:(AVAssetResourceLoader *)arg0 shouldWaitForLoadingOfRequestedResource:(NSObject *)arg1;

@end
