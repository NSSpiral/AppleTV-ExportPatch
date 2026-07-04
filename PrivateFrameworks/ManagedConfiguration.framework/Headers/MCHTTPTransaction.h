/* Runtime dump - MCHTTPTransaction
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCHTTPTransaction : NSObject
{
    NSURL * _requestURL;
    NSString * _method;
    double _timeout;
    NSString * _userAgent;
    NSString * _contentType;
    NSData * _data;
    struct __SecIdentity * _identity;
    NSString * _CMSSignatureHeaderName;
    NSURL * _currentURL;
    NSURL * _permanentlyRedirectedURL;
    char _rememberData;
    NSMutableData * _responseData;
    int _statusCode;
    NSError * _error;
    NSURLConnection * _connection;
    NSObject<OS_dispatch_semaphore> * _doneSema;
}

@property (retain, nonatomic) NSURL * url;
@property (retain, nonatomic) NSString * method;
@property (nonatomic) double timeout;
@property (retain, nonatomic) NSString * userAgent;
@property (retain, nonatomic) NSString * contentType;
@property (retain, nonatomic) NSData * data;
@property (retain, nonatomic) NSString * CMSSignatureHeaderName;
@property (readonly, retain, nonatomic) NSData * responseData;
@property (readonly, retain, nonatomic) NSError * error;
@property (readonly, retain, nonatomic) NSURL * permanentlyRedirectedURL;
@property (readonly, nonatomic) int statusCode;

+ (NSURL *)transactionWithURL:(NSString *)arg0 method:(NSString *)arg1;
+ (NSURL *)performRequestURL:(NSURL *)arg0 method:(NSString *)arg1 timeout:(double)arg2 userAgent:(NSString *)arg3 contentType:(NSString *)arg4 data:(NSData *)arg5 identity:(struct __SecIdentity *)arg6 outPermanentlyRedirectedURL:(id *)arg7 outError:(id *)arg8;

- (void)dealloc;
- (NSURL *)url;
- (NSData *)data;
- (void)setData:(NSData *)arg0;
- (void)setUrl:(NSURL *)arg0;
- (int)statusCode;
- (void)connection:(NSURLConnection *)arg0 didFailWithError:(NSError *)arg1;
- (void)connection:(NSURLConnection *)arg0 didReceiveData:(char)arg1;
- (void)connectionDidFinishLoading:(NSURLConnection *)arg0;
- (void)connection:(NSURLConnection *)arg0 didReceiveResponse:(char)arg1;
- (NSString *)method;
- (void).cxx_destruct;
- (NSData *)responseData;
- (NSError *)error;
- (void)setIdentity:(struct __SecIdentity *)arg0;
- (void)setUserAgent:(NSString *)arg0;
- (struct __SecIdentity *)copyIdentity;
- (void)setTimeout:(double)arg0;
- (NSString *)userAgent;
- (NSURLConnection *)connection:(NSURLConnection *)arg0 willSendRequest:(NSURLRequest *)arg1 redirectResponse:(NSURLResponse *)arg2;
- (MCHTTPTransaction *)initWithURL:(NSString *)arg0 method:(NSString *)arg1;
- (void)performSynchronously;
- (NSURL *)permanentlyRedirectedURL;
- (void)_beginTransaction;
- (char)_shouldAllowTrust:(struct __SecTrust *)arg0 forHost:(NSString *)arg1;
- (void)performCompletionBlock:(id /* block */)arg0;
- (NSString *)CMSSignatureHeaderName;
- (void)setCMSSignatureHeaderName:(NSString *)arg0;
- (double)timeout;
- (void)setMethod:(NSString *)arg0;
- (char)connectionShouldUseCredentialStorage:(NSURLConnection *)arg0;
- (char)connection:(NSURLConnection *)arg0 canAuthenticateAgainstProtectionSpace:(NSObject *)arg1;
- (void)connection:(NSURLConnection *)arg0 didReceiveAuthenticationChallenge:(NSObject *)arg1;
- (void)setContentType:(NSString *)arg0;
- (NSString *)contentType;

@end
