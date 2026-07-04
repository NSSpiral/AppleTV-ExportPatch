/* Runtime dump - NSURLConnectionInternal
 * Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLConnectionInternal : NSObject <NSURLConnectionRequired, NSURLAuthenticationChallengeSender>
{
    NSURLConnection * _connection;
    NSOperationQueue * _delegateQueue;
    NSURL * _url;
    NSURLRequest * _originalRequest;
    NSURLRequest * _currentRequest;
    id _delegate;
    NSDictionary * _connectionProperties;
    char _connectionActive;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSURLConnectionInternal *)initWithInfo:(struct InternalInit *)arg0;
- (void)_setDelegateQueue:(NSObject *)arg0;
- (NSDictionary *)_connectionProperties;
- (void)_withConnectionAndDelegate:(NSObject *)arg0;
- (void)_withConnectionDisconnectFromConnection;
- (void)setConnectionActive:(char)arg0;
- (void)_withActiveConnectionAndDelegate:(NSObject *)arg0;
- (char)isConnectionActive;
- (void)invokeForDelegate:(NSObject *)arg0;
- (void)_withConnectionAndDelegate:(NSObject *)arg0 onlyActive:(/* block */ id)arg1;
- (void)dealloc;
- (void)useCredential:(NSObject *)arg0 forAuthenticationChallenge:(NSObject *)arg1;
- (void)_invalidate;
- (NSData *)_timingData;
- (NSURLRequest *)originalRequest;
- (NSURLRequest *)currentRequest;
- (void)continueWithoutCredentialForAuthenticationChallenge:(NSObject *)arg0;
- (void)cancelAuthenticationChallenge:(NSObject *)arg0;
- (void)performDefaultHandlingForAuthenticationChallenge:(NSObject *)arg0;
- (void)rejectProtectionSpaceAndContinueWithChallenge:(NSObject *)arg0;

@end
