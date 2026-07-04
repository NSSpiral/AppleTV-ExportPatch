/* Runtime dump - SSVSecureKeyDeliveryRequestOperation
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVSecureKeyDeliveryRequestOperation : NSOperation
{
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSURL * _certificateURL;
    NSURL * _keyServerURL;
    AVAssetResourceLoadingRequest * _resourceLoadingRequest;
    id _responseBlock;
    char _iTunesStoreRequest;
}

@property (retain) NSURL * certificateURL;
@property (retain) NSURL * keyServerURL;
@property (retain) AVAssetResourceLoadingRequest * resourceLoadingRequest;
@property char ITunesStoreRequest;
@property (copy) id responseBlock;

- (void)setITunesStoreRequest:(char)arg0;
- (void)setResponseBlock:(id /* block */)arg0;
- (id /* block */)responseBlock;
- (SSVSecureKeyDeliveryRequestOperation *)init;
- (void)start;
- (void)main;
- (void).cxx_destruct;
- (void)_sendResponseBlockWithError:(NSError *)arg0;
- (NSObject *)_streamingKeyDictionaryForID:(long long)arg0 URI:(NSString *)arg1 serverPlaybackContextData:(NSData *)arg2;
- (id)_streamingRequestDictionaryWithStreamingKeyDictionaries:(id)arg0;
- (NSString *)_contentKeyContextForStreamingKeyID:(long long)arg0 streamingKeyDictionaries:(id)arg1 error:(id *)arg2;
- (NSURL *)certificateURL;
- (NSURL *)keyServerURL;
- (AVAssetResourceLoadingRequest *)resourceLoadingRequest;
- (void)setCertificateURL:(NSURL *)arg0;
- (void)setKeyServerURL:(NSURL *)arg0;
- (void)setResourceLoadingRequest:(AVAssetResourceLoadingRequest *)arg0;
- (char)isITunesStoreRequest;

@end
