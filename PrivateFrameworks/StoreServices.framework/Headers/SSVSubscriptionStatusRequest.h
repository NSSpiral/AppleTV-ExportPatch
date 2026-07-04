/* Runtime dump - SSVSubscriptionStatusRequest
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVSubscriptionStatusRequest : SSRequest <SSXPCCoding>
{
    char _authenticatesIfNecessary;
    SSAuthenticationContext * _authenticationContext;
    int _carrierBundleProvisioningStyle;
    NSString * _localizedAuthenticationReason;
    NSString * _reason;
}

@property (copy, nonatomic) SSAuthenticationContext * authenticationContext;
@property (nonatomic) int carrierBundleProvisioningStyle;
@property (copy, nonatomic) NSString * reason;
@property (nonatomic) char authenticatesIfNecessary;
@property (copy, nonatomic) NSString * localizedAuthenticationReason;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setAuthenticationContext:(SSAuthenticationContext *)arg0;
- (void)startWithCompletionBlock:(id /* block */)arg0;
- (NSDictionary *)copyXPCEncoding;
- (SSVSubscriptionStatusRequest *)initWithXPCEncoding:(NSString *)arg0;
- (NSString *)reason;
- (void).cxx_destruct;
- (SSAuthenticationContext *)authenticationContext;
- (void)setReason:(NSString *)arg0;
- (void)setAuthenticatesIfNecessary:(char)arg0;
- (void)setCarrierBundleProvisioningStyle:(int)arg0;
- (void)setLocalizedAuthenticationReason:(NSString *)arg0;
- (void)startWithStatusResponseBlock:(id /* block */)arg0;
- (char)authenticatesIfNecessary;
- (int)carrierBundleProvisioningStyle;
- (NSString *)localizedAuthenticationReason;

@end
