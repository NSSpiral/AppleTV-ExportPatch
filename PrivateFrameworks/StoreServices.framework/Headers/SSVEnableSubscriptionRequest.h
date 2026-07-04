/* Runtime dump - SSVEnableSubscriptionRequest
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVEnableSubscriptionRequest : SSRequest <SSXPCCoding>
{
    SSAuthenticationContext * _authenticationContext;
}

@property (copy, nonatomic) SSAuthenticationContext * authenticationContext;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setAuthenticationContext:(SSAuthenticationContext *)arg0;
- (void)startWithCompletionBlock:(id /* block */)arg0;
- (NSDictionary *)copyXPCEncoding;
- (SSVEnableSubscriptionRequest *)initWithXPCEncoding:(NSString *)arg0;
- (void).cxx_destruct;
- (SSAuthenticationContext *)authenticationContext;

@end
