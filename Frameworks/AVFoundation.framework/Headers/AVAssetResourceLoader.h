/* Runtime dump - AVAssetResourceLoader
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetResourceLoader : NSObject <NSURLAuthenticationChallengeSender>
{
    AVAssetResourceLoaderInternal * _resourceLoader;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) <AVAssetResourceLoaderDelegate> * delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * delegateQueue;

- (AVWeakReference *)_weakReference;
- (void)_cancelRequestWithKey:(NSString *)arg0 requestDictionary:(NSDictionary *)arg1 fallbackHandler:(id /* block */)arg2;
- (void)_poseAuthenticationChallengeWithKey:(NSString *)arg0 data:(NSData *)arg1 requestDictionary:(NSDictionary *)arg2 fallbackHandler:(id /* block */)arg3;
- (void)_issueLoadingRequestWithKey:(NSString *)arg0 requestDictionary:(NSDictionary *)arg1 fallbackHandler:(id /* block */)arg2;
- (NSObject<OS_dispatch_queue> *)stateQueue;
- (void)_performDelegateCallbackSynchronouslyIfCurrentDelegateQueueIsQueue:(NSObject *)arg0 delegateCallbackBlock:(id /* block */)arg1;
- (void)_performDelegateSelector:(SEL)arg0 withObject:(NSObject *)arg1 representingNewRequest:(char)arg2 key:(NSString *)arg3 fallbackHandler:(id /* block */)arg4;
- (void)_noteFinishingOfRequest:(NSURLRequest *)arg0;
- (void)_rejectChallenge:(NSObject *)arg0 withError:(NSError *)arg1;
- (void)cacheContentInformation:(id)arg0 forURL:(NSURL *)arg1;
- (NSURL *)cachedContentInformationForURL:(NSURL *)arg0;
- (void)dealloc;
- (void)setDelegate:(<AVAssetResourceLoaderDelegate> *)arg0;
- (AVAssetResourceLoader *)init;
- (<AVAssetResourceLoaderDelegate> *)delegate;
- (void)useCredential:(NSObject *)arg0 forAuthenticationChallenge:(NSObject *)arg1;
- (AVAssetResourceLoader *)initWithAsset:(NSSet *)arg0;
- (NSSet *)asset;
- (NSObject<OS_dispatch_queue> *)delegateQueue;
- (void)continueWithoutCredentialForAuthenticationChallenge:(NSObject *)arg0;
- (void)cancelAuthenticationChallenge:(NSObject *)arg0;
- (void)performDefaultHandlingForAuthenticationChallenge:(NSObject *)arg0;
- (void)rejectProtectionSpaceAndContinueWithChallenge:(NSObject *)arg0;
- (void)finalize;
- (void)setDelegate:(<AVAssetResourceLoaderDelegate> *)arg0 queue:(NSObject *)arg1;
- (void)cancelLoading;

@end
