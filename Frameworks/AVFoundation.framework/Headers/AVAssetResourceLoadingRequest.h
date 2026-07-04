/* Runtime dump - AVAssetResourceLoadingRequest
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetResourceLoadingRequest : NSObject <AVAssetResourceLoaderRequest>
{
    AVAssetResourceLoadingRequestInternal * _loadingRequest;
}

@property (readonly, nonatomic) NSURLRequest * request;
@property (readonly, nonatomic) char finished;
@property (readonly, nonatomic) char cancelled;
@property (readonly, nonatomic) AVAssetResourceLoadingContentInformationRequest * contentInformationRequest;
@property (readonly, nonatomic) AVAssetResourceLoadingDataRequest * dataRequest;
@property (copy, nonatomic) NSURLResponse * response;
@property (copy, nonatomic) NSURLRequest * redirect;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SEL)_selectorForInformingDelegateOfCancellationByFig;

- (AVWeakReference *)_weakReference;
- (void)_removeFigPlaybackItemListeners;
- (void)_addFigPlaybackItemListeners;
- (NSDictionary *)_requestDictionary;
- (void)_performCancellationByClient;
- (char)_shouldInformDelegateOfFigCancellation;
- (AVAssetResourceLoadingRequest *)initWithResourceLoader:(AVAssetResourceLoader *)arg0 requestDictionary:(NSDictionary *)arg1;
- (AVAssetResourceLoader *)_resourceLoader;
- (void)_sendDataIncrementally:(id)arg0 data:(NSData *)arg1;
- (void)_appendToCachedData:(NSData *)arg0;
- (NSURLRequest *)redirect;
- (void)_setContentInformationRequest:(NSURLRequest *)arg0;
- (void)_addFigAssetImageGeneratorListeners;
- (void)_setDataRequest:(NSURLRequest *)arg0;
- (void)_removeFigAssetImageGeneratorListeners;
- (char)_tryToMarkAsCancelled;
- (void)_sendDictionaryForURLRequest:(NSURLRequest *)arg0 context:(NSObject *)arg1;
- (NSData *)_getAndClearCachedData;
- (void)setRedirect:(NSURLRequest *)arg0;
- (NSDictionary *)serializableRepresentation;
- (void)finishLoadingWithResponse:(NSURLResponse *)arg0 data:(NSData *)arg1 redirect:(NSURLRequest *)arg2;
- (id)streamingContentKeyRequestDataForApp:(id)arg0 contentIdentifier:(NSString *)arg1 options:(NSDictionary *)arg2 error:(id *)arg3;
- (void)generateStreamingContentKeyRequestDataAsynchronouslyForApp:(id)arg0 contentIdentifier:(NSString *)arg1 options:(NSDictionary *)arg2 completionHandler:(id /* block */)arg3;
- (void)dealloc;
- (AVAssetResourceLoadingRequest *)init;
- (NSString *)description;
- (NSURLRequest *)request;
- (char)isCancelled;
- (NSURLResponse *)response;
- (char)isFinished;
- (void)setResponse:(NSURLResponse *)arg0;
- (char)finished;
- (void)finalize;
- (void)finishLoadingWithError:(NSError *)arg0;
- (AVAssetResourceLoadingContentInformationRequest *)contentInformationRequest;
- (AVAssetResourceLoadingDataRequest *)dataRequest;
- (void)finishLoading;

@end
