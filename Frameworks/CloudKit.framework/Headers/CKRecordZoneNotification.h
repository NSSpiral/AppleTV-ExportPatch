/* Runtime dump - CKRecordZoneNotification
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKRecordZoneNotification : CKNotification <NSSecureCoding>
{
    CKRecordZoneID * _recordZoneID;
}

@property (copy, nonatomic) CKRecordZoneID * recordZoneID;

+ (char)supportsSecureCoding;

- (CKRecordZoneNotification *)initWithRemoteNotificationDictionary:(NSDictionary *)arg0;
- (CKRecordZoneNotification *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (void).cxx_destruct;
- (NSString *)CKPropertiesDescription;
- (CKRecordZoneID *)recordZoneID;
- (void)setRecordZoneID:(CKRecordZoneID *)arg0;

@end
