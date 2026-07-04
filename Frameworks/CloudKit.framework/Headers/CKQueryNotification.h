/* Runtime dump - CKQueryNotification
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKQueryNotification : CKNotification <NSSecureCoding>
{
    int _queryNotificationReason;
    NSDictionary * _recordFields;
    CKRecordID * _recordID;
    int _databaseScope;
}

@property (nonatomic) int queryNotificationReason;
@property (copy, nonatomic) NSDictionary * recordFields;
@property (copy, nonatomic) CKRecordID * recordID;
@property (readonly, nonatomic) char isPublicDatabase;
@property (nonatomic) int databaseScope;

+ (char)supportsSecureCoding;

- (CKQueryNotification *)initWithRemoteNotificationDictionary:(NSDictionary *)arg0;
- (void)setQueryNotificationReason:(int)arg0;
- (void)setRecordFields:(NSDictionary *)arg0;
- (int)queryNotificationReason;
- (NSDictionary *)recordFields;
- (char)isPublicDatabase;
- (CKQueryNotification *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (void).cxx_destruct;
- (CKRecordID *)recordID;
- (void)setRecordID:(CKRecordID *)arg0;
- (void)setDatabaseScope:(int)arg0;
- (NSString *)CKPropertiesDescription;
- (int)databaseScope;

@end
