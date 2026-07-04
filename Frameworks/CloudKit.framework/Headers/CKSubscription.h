/* Runtime dump - CKSubscription
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKSubscription : NSObject <NSSecureCoding, NSCopying>
{
    NSString * _subscriptionID;
    int _subscriptionType;
    NSString * _recordType;
    NSPredicate * _predicate;
    unsigned int _subscriptionOptions;
    CKNotificationInfo * _notificationInfo;
    CKRecordZoneID * _zoneID;
}

@property (copy, nonatomic) NSString * subscriptionID;
@property (nonatomic) int subscriptionType;
@property (copy, nonatomic) NSString * recordType;
@property (copy, nonatomic) NSPredicate * predicate;
@property (nonatomic) unsigned int subscriptionOptions;
@property (copy, nonatomic) CKNotificationInfo * notificationInfo;
@property (copy, nonatomic) CKRecordZoneID * zoneID;

+ (char)supportsSecureCoding;

- (CKSubscription *)initWithRecordType:(NSString *)arg0 predicate:(NSPredicate *)arg1 subscriptionID:(NSString *)arg2 options:(unsigned int)arg3;
- (void)_validateSubscriptionOptions:(unsigned int)arg0;
- (CKSubscription *)initWithRecordType:(NSString *)arg0 predicate:(NSPredicate *)arg1 options:(unsigned int)arg2;
- (CKSubscription *)initWithZoneID:(CKRecordZoneID *)arg0 options:(unsigned int)arg1;
- (CKSubscription *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (CKSubscription *)init;
- (NSString *)description;
- (NSString *)debugDescription;
- (CKSubscription *)copyWithZone:(struct _NSZone *)arg0;
- (void)setPredicate:(NSPredicate *)arg0;
- (NSPredicate *)predicate;
- (void).cxx_destruct;
- (CKNotificationInfo *)notificationInfo;
- (void)setNotificationInfo:(CKNotificationInfo *)arg0;
- (NSObject *)_initWithSubscriptionType:(int)arg0 subscriptionID:(NSString *)arg1 options:(unsigned int)arg2;
- (CKSubscription *)initWithZoneID:(CKRecordZoneID *)arg0 subscriptionID:(NSString *)arg1 options:(unsigned int)arg2;
- (CKRecordZoneID *)zoneID;
- (NSString *)recordType;
- (void)setZoneID:(CKRecordZoneID *)arg0;
- (NSString *)CKPropertiesDescription;
- (CKSubscription *)_initBare;
- (NSString *)subscriptionID;
- (void)setRecordType:(NSString *)arg0;
- (void)setSubscriptionID:(NSString *)arg0;
- (void)setSubscriptionType:(int)arg0;
- (int)subscriptionType;
- (void)setSubscriptionOptions:(unsigned int)arg0;
- (unsigned int)subscriptionOptions;

@end
