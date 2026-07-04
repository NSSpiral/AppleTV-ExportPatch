/* Runtime dump - SSVFairPlaySubscriptionStatus
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVFairPlaySubscriptionStatus : NSObject <SSXPCCoding>
{
    char _hasSubscriptionLease;
    char _hasSubscriptionSlot;
}

@property (nonatomic) char hasSubscriptionLease;
@property (nonatomic) char hasSubscriptionSlot;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)hasSubscriptionLease;
- (char)hasSubscriptionSlot;
- (NSDictionary *)copyXPCEncoding;
- (SSVFairPlaySubscriptionStatus *)initWithXPCEncoding:(NSString *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setHasSubscriptionLease:(char)arg0;
- (void)setHasSubscriptionSlot:(char)arg0;

@end
