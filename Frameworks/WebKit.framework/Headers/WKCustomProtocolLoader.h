/* Runtime dump - WKCustomProtocolLoader
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKCustomProtocolLoader : NSObject <NSURLConnectionDelegate>
{
    struct CustomProtocolManagerProxy * _customProtocolManagerProxy;
    unsigned long long _customProtocolID;
    struct RefPtr<IPC::Connection> _connection;
    unsigned int _storagePolicy;
    NSURLConnection * _urlConnection;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void).cxx_construct;
- (void)connection:(struct RefPtr<IPC::Connection>)arg0 didFailWithError:(char)arg1;
- (void)connection:(struct RefPtr<IPC::Connection>)arg0 didReceiveData:(char)arg1;
- (void)connectionDidFinishLoading:(NSURLConnection *)arg0;
- (void)connection:(struct RefPtr<IPC::Connection>)arg0 didReceiveResponse:(char)arg1;
- (void).cxx_destruct;
- (WKCustomProtocolLoader *)initWithCustomProtocolManagerProxy:(struct CustomProtocolManagerProxy *)arg0 customProtocolID:(struct WebContext *)arg1 request:(struct HashMap<unsigned long long, WTF::RetainPtr<WKCustomProtocolLoader>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RetainPtr<WKCustomProtocolLoader> > >)arg2 connection:(int)arg3;
- (NSURLConnection *)connection:(struct RefPtr<IPC::Connection>)arg0 willSendRequest:(NSURLRequest *)arg1 redirectResponse:(NSURLResponse *)arg2;
- (NSURLConnection *)connection:(struct RefPtr<IPC::Connection>)arg0 willCacheResponse:(NSURLResponse *)arg1;

@end
