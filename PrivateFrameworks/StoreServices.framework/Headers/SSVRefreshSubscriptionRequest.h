/* Runtime dump - SSVRefreshSubscriptionRequest
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVRefreshSubscriptionRequest : SSRequest <SSXPCCoding>
{
    SSAuthenticationContext * _authenticationContext;
    char _requestingOfflineSlot;
}

@property (copy, nonatomic) SSAuthenticationContext * authenticationContext;
@property (nonatomic) char requestingOfflineSlot;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setAuthenticationContext:(SSAuthenticationContext *)arg0;
- (void)startWithCompletionBlock:(id /* block */)arg0;
- (NSDictionary *)copyXPCEncoding;
- (SSVRefreshSubscriptionRequest *)initWithXPCEncoding:(NSString *)arg0;
- (void).cxx_destruct;
- (SSAuthenticationContext *)authenticationContext;
- (void)startWithResponseBlock:(id /* block */)arg0;
- (char)isRequestingOfflineSlot;
- (void)setRequestingOfflineSlot:(char)arg0;

@end
