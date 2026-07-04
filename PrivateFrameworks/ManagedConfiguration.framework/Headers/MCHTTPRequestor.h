/* Runtime dump - MCHTTPRequestor
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCHTTPRequestor : NSObject <NSURLConnectionDataDelegate>
{
    char _didFailDueToMissingCredentials;
    char _shouldUseResponseBodyAsLoginPrompt;
    NSURLConnection * _connection;
    NSMutableData * _responseData;
    NSString * _username;
    NSString * _password;
    NSArray * _anchorCertificates;
    id _completionBlock;
    id _selfReference;
}

@property (retain, nonatomic) NSURLConnection * connection;
@property (retain, nonatomic) NSMutableData * responseData;
@property (copy, nonatomic) NSString * username;
@property (copy, nonatomic) NSString * password;
@property (retain, nonatomic) NSArray * anchorCertificates;
@property (copy, nonatomic) id completionBlock;
@property (retain, nonatomic) id selfReference;
@property (nonatomic) char didFailDueToMissingCredentials;
@property (nonatomic) char shouldUseResponseBodyAsLoginPrompt;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (MCHTTPRequestor *)init;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg0;
- (void)connection:(NSURLConnection *)arg0 didFailWithError:(char)arg1;
- (void)connection:(NSURLConnection *)arg0 didReceiveData:(char)arg1;
- (void)connectionDidFinishLoading:(NSURLConnection *)arg0;
- (void)connection:(NSURLConnection *)arg0 didReceiveResponse:(char)arg1;
- (void).cxx_destruct;
- (NSURLConnection *)connection;
- (void)setConnection:(NSURLConnection *)arg0;
- (void)setResponseData:(NSMutableData *)arg0;
- (NSMutableData *)responseData;
- (NSString *)password;
- (void)setPassword:(NSString *)arg0;
- (void)setUsername:(NSString *)arg0;
- (NSURLConnection *)connection:(NSURLConnection *)arg0 willCacheResponse:(NSURLResponse *)arg1;
- (void)setAnchorCertificates:(NSArray *)arg0;
- (void)setSelfReference:(NSObject *)arg0;
- (void)setDidFailDueToMissingCredentials:(char)arg0;
- (void)setShouldUseResponseBodyAsLoginPrompt:(char)arg0;
- (NSArray *)anchorCertificates;
- (char)didFailDueToMissingCredentials;
- (char)shouldUseResponseBodyAsLoginPrompt;
- (void)didFinishWithError:(NSError *)arg0;
- (void)startWithRequest:(NSURLRequest *)arg0 username:(NSString *)arg1 password:(NSString *)arg2 anchorCertificates:(NSArray *)arg3 completionBlock:(id /* block */)arg4;
- (NSObject *)selfReference;
- (NSString *)username;
- (void)connection:(NSURLConnection *)arg0 willSendRequestForAuthenticationChallenge:(NSObject *)arg1;

@end
