/* Runtime dump - CKFetchSubscriptionsOperationInfo
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchSubscriptionsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>
{
    char _isFetchAllSubscriptionsOperation;
    NSArray * _subscriptionIDs;
}

@property (retain, nonatomic) NSArray * subscriptionIDs;
@property (nonatomic) char isFetchAllSubscriptionsOperation;

+ (char)supportsSecureCoding;

- (CKFetchSubscriptionsOperationInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (NSArray *)subscriptionIDs;
- (void)setSubscriptionIDs:(NSArray *)arg0;
- (char)isFetchAllSubscriptionsOperation;
- (void)setIsFetchAllSubscriptionsOperation:(char)arg0;

@end
