/* Runtime dump - SSAuthenticateRequest
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSAuthenticateRequest : SSRequest <SSXPCCoding>
{
    SSAuthenticationContext * _authenticationContext;
}

@property (readonly) SSAuthenticationContext * authenticationContext;
@property (nonatomic) <SSAuthenticateRequestDelegate> * delegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)startWithCompletionBlock:(id /* block */)arg0;
- (void)startWithAuthenticateResponseBlock:(id /* block */)arg0;
- (NSDictionary *)copyXPCEncoding;
- (SSAuthenticateRequest *)initWithXPCEncoding:(NSString *)arg0;
- (void)dealloc;
- (char)start;
- (SSAuthenticationContext *)authenticationContext;
- (SSAuthenticateRequest *)initWithAuthenticationContext:(SSAuthenticationContext *)arg0;
- (SSAuthenticateRequest *)initWithAccount:(ACAccount *)arg0;

@end
