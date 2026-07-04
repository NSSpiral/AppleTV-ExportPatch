/* Runtime dump - WebCoreAVFLoaderDelegate
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebCoreAVFLoaderDelegate : NSObject <AVAssetResourceLoaderDelegate>
{
    struct MediaPlayerPrivateAVFoundationObjC * m_callback;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (WebCoreAVFLoaderDelegate *)initWithCallback:(struct MediaPlayerPrivateAVFoundationObjC *)arg0;
- (void)setCallback:(struct MediaPlayerPrivateAVFoundationObjC *)arg0;
- (char)resourceLoader:(AVAssetResourceLoader *)arg0 shouldWaitForLoadingOfRequestedResource:(NSObject *)arg1;
- (void)resourceLoader:(AVAssetResourceLoader *)arg0 didCancelLoadingRequest:(NSURLRequest *)arg1;
- (char)resourceLoader:(AVAssetResourceLoader *)arg0 shouldWaitForResponseToAuthenticationChallenge:(NSObject *)arg1;

@end
