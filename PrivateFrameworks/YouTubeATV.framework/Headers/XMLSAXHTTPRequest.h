/* Runtime dump - XMLSAXHTTPRequest
 * Image: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

@interface XMLSAXHTTPRequest : NSObject <NSURLConnectionDelegate>
{
    NSURLRequest * _request;
    NSURLConnection * _connection;
    NSMutableData * _rawData;
    char _invalidResponse;
    struct _xmlSAXHandler _saxHandler;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (unsigned int)uniqueQueryID;
+ (NSError *)serviceUnavailableError;
+ (char)anyRequestLoading;
+ (NSError *)authenticationFailureError;

- (void)cancel;
- (void)dealloc;
- (XMLSAXHTTPRequest *)init;
- (NSURLRequest *)request;
- (void)loadRequest:(NSURLRequest *)arg0;
- (char)isLoading;
- (void)connection:(NSURLConnection *)arg0 didFailWithError:(NSError *)arg1;
- (void)connection:(NSURLConnection *)arg0 didReceiveData:(char)arg1;
- (void)connectionDidFinishLoading:(NSURLConnection *)arg0;
- (void)connection:(NSURLConnection *)arg0 didReceiveResponse:(char)arg1;
- (void)failWithError:(NSError *)arg0;
- (int)parseData:(NSData *)arg0;
- (char)receivedValidResponse:(NSURLResponse *)arg0;
- (void)loadStatusChanged;
- (void)_startedLoading;
- (void)willParseData;
- (void)didParseData;
- (void)_finishedLoading;

@end
