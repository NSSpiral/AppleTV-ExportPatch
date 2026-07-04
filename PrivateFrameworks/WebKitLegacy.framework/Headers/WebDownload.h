/* Runtime dump - WebDownload
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebDownload : NSURLDownload
{
    WebDownloadInternal * _webInternal;
}

- (WebDownload *)initWithRequest:(NSURLRequest *)arg0 delegate:(NSObject *)arg1;
- (NSURLConnection *)_initWithLoadingCFURLConnection:(struct _CFURLConnection *)arg0 request:(struct _CFURLRequest *)arg1 response:(struct _CFURLResponse *)arg2 delegate:(NSObject *)arg3 proxy:(GEOTileServerProxy *)arg4;
- (NSURLConnection *)_initWithLoadingConnection:(char)arg0 request:(NSURLRequest *)arg1 response:(NSURLResponse *)arg2 delegate:(NSObject *)arg3 proxy:(GEOTileServerProxy *)arg4;
- (NSURLRequest *)_initWithRequest:(NSURLRequest *)arg0 delegate:(NSObject *)arg1 directory:(PLSimpleDCIMDirectory *)arg2;
- (void)dealloc;
- (WebDownload *)init;
- (void)_setRealDelegate:(NSObject *)arg0;

@end
