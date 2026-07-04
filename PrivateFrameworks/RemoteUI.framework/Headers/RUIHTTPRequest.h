/* Runtime dump - RUIHTTPRequest
 * Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUIHTTPRequest : NSObject <NSURLConnectionDataDelegate>
{
    NSURLRequest * _request;
    NSURLConnection * _connection;
    NSMutableData * _rawData;
    char _invalidResponse;
    id _delegate;
}

@property (weak, nonatomic) id delegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSError *)invalidResponseError;
+ (NSError *)serviceUnavailableError;
+ (NSError *)nonSecureConnectionNotAllowedError;
+ (char)anyRequestLoading;
+ (NSURL *)safeBaseURL;

- (void)cancel;
- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (RUIHTTPRequest *)init;
- (NSObject *)delegate;
- (NSURLRequest *)request;
- (void)loadRequest:(NSURLRequest *)arg0;
- (char)isLoading;
- (void)connection:(NSURLConnection *)arg0 didFailWithError:(char)arg1;
- (void)connection:(NSURLConnection *)arg0 didReceiveData:(char)arg1;
- (void)connectionDidFinishLoading:(NSURLConnection *)arg0;
- (void)connection:(NSURLConnection *)arg0 didReceiveResponse:(char)arg1;
- (void).cxx_destruct;
- (void)failWithError:(NSError *)arg0;
- (void)parseData:(NSData *)arg0;
- (char)receivedValidResponse:(NSURLResponse *)arg0;
- (void)loadStatusChanged;
- (void)_startedLoading;
- (void)willParseData;
- (void)didParseData;
- (void)_finishedLoading;

@end
