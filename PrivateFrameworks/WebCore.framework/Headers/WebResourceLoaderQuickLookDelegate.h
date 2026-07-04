/* Runtime dump - WebResourceLoaderQuickLookDelegate
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebResourceLoaderQuickLookDelegate : NSObject <NSURLConnectionDelegate>
{
    struct RefPtr<WebCore::ResourceLoader> _resourceLoader;
    char _hasSentDidReceiveResponse;
    char _hasFailed;
    struct QuickLookHandle * _quickLookHandle;
}

@property (nonatomic) struct QuickLookHandle * quickLookHandle;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void).cxx_construct;
- (void)connection:(NSURLConnection *)arg0 didFailWithError:(char)arg1;
- (void)connectionDidFinishLoading:(NSURLConnection *)arg0;
- (void).cxx_destruct;
- (void)connection:(NSURLConnection *)arg0 didReceiveDataArray:(NSArray *)arg1;
- (void)connection:(NSURLConnection *)arg0 didReceiveData:(char)arg1 lengthReceived:(long long)arg2;
- (void)clearHandle;
- (void)_sendDidReceiveResponseIfNecessary;
- (WebResourceLoaderQuickLookDelegate *)initWithResourceLoader:(struct PassRefPtr<WebCore::ResourceLoader>)arg0;
- (struct QuickLookHandle *)quickLookHandle;
- (void)setQuickLookHandle:(struct QuickLookHandle *)arg0;

@end
