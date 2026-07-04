/* Runtime dump - RUILoader
 * Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUILoader : RUIHTTPRequest
{
    RUIParser * _parser;
    NSURL * _url;
    char _allowNonSecureHTTP;
    <RUIParserDelegate> * _parserDelegate;
}

@property (nonatomic) char allowNonSecureHTTP;
@property (weak, nonatomic) <RUIParserDelegate> * parserDelegate;

- (void)cancel;
- (void)dealloc;
- (NSURL *)URL;
- (void)loadRequest:(NSURLRequest *)arg0;
- (void).cxx_destruct;
- (void)loadXMLUIWithRequest:(NSURLRequest *)arg0;
- (void)failWithError:(NSError *)arg0;
- (NSURLConnection *)connection:(NSURLConnection *)arg0 willSendRequest:(NSURLRequest *)arg1 redirectResponse:(NSURLResponse *)arg2;
- (void)parseData:(NSData *)arg0;
- (char)receivedValidResponse:(NSURLResponse *)arg0;
- (void)didParseData;
- (char)allowNonSecureHTTP;
- (void)_finishLoad;
- (char)anyWebViewLoading;
- (void)webViewFinishedLoading;
- (void)allWebViewsFinishedLoading;
- (void)loadXMLUIWithURL:(NSString *)arg0;
- (void)loadXMLUIWithData:(NSData *)arg0 baseURL:(NSURL *)arg1;
- (void)setAllowNonSecureHTTP:(char)arg0;
- (<RUIParserDelegate> *)parserDelegate;
- (void)setParserDelegate:(<RUIParserDelegate> *)arg0;

@end
