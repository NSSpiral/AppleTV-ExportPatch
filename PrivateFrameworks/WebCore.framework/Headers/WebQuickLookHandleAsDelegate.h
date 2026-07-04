/* Runtime dump - WebQuickLookHandleAsDelegate
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebQuickLookHandleAsDelegate : NSObject <NSURLConnectionDelegate>
{
    struct RefPtr<WebCore::SynchronousResourceHandleCFURLConnectionDelegate> m_connectionDelegate;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void).cxx_construct;
- (void)connection:(NSURLConnection *)arg0 didFailWithError:(char)arg1;
- (void)connectionDidFinishLoading:(NSURLConnection *)arg0;
- (void).cxx_destruct;
- (WebQuickLookHandleAsDelegate *)initWithConnectionDelegate:(struct SynchronousResourceHandleCFURLConnectionDelegate *)arg0;
- (void)connection:(NSURLConnection *)arg0 didReceiveDataArray:(NSArray *)arg1;
- (void)connection:(NSURLConnection *)arg0 didReceiveData:(char)arg1 lengthReceived:(long long)arg2;
- (void)clearHandle;

@end
