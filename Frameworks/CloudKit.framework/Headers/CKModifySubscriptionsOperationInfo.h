/* Runtime dump - CKModifySubscriptionsOperationInfo
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKModifySubscriptionsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>
{
    NSArray * _subscriptionsToSave;
    NSArray * _subscriptionIDsToDelete;
}

@property (retain, nonatomic) NSArray * subscriptionsToSave;
@property (retain, nonatomic) NSArray * subscriptionIDsToDelete;

+ (char)supportsSecureCoding;

- (CKModifySubscriptionsOperationInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (NSArray *)subscriptionsToSave;
- (NSArray *)subscriptionIDsToDelete;
- (void)setSubscriptionsToSave:(NSArray *)arg0;
- (void)setSubscriptionIDsToDelete:(NSArray *)arg0;

@end
