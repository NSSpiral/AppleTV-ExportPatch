/* Runtime dump - CKMetaSyncNotification
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKMetaSyncNotification : CKNotification <NSSecureCoding>
{
    int _databaseScope;
}

@property (nonatomic) int databaseScope;

+ (char)supportsSecureCoding;

- (CKMetaSyncNotification *)initWithRemoteNotificationDictionary:(NSDictionary *)arg0;
- (CKMetaSyncNotification *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (void)setDatabaseScope:(int)arg0;
- (NSString *)CKPropertiesDescription;
- (int)databaseScope;

@end
