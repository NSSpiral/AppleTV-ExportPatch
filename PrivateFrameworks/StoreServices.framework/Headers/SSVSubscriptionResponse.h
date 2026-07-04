/* Runtime dump - SSVSubscriptionResponse
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVSubscriptionResponse : NSObject <SSXPCCoding, NSCopying>
{
    NSMutableDictionary * _accountUniqueIdentifierToSubscriptionStatus;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSString *)subscriptionStatusForAccountUniqueIdentifier:(unsigned long long)arg0;
- (NSDictionary *)copyXPCEncoding;
- (SSVSubscriptionResponse *)initWithXPCEncoding:(NSString *)arg0;
- (SSVSubscriptionResponse *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (void)setSubscriptionStatus:(SSVSubscriptionStatus *)arg0 forAccountUniqueIdentifier:(unsigned long long)arg1;

@end
