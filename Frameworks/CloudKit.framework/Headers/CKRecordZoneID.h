/* Runtime dump - CKRecordZoneID
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKRecordZoneID : NSObject <NSSecureCoding, NSCopying>
{
    NSString * _zoneName;
    NSString * _ownerName;
}

@property (retain, nonatomic) NSString * zoneName;
@property (retain, nonatomic) NSString * ownerName;

+ (char)supportsSecureCoding;

- (NSDictionary *)sqliteRepresentation;
- (void)setZoneName:(NSString *)arg0;
- (void)setOwnerName:(NSString *)arg0;
- (CKRecordZoneID *)initWithSqliteRepresentation:(CKSQLite *)arg0;
- (CKRecordZoneID *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKRecordZoneID *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (NSString *)ownerName;
- (NSString *)zoneName;
- (CKRecordZoneID *)initWithZoneName:(NSString *)arg0 ownerName:(NSString *)arg1;
- (NSString *)CKPropertiesDescription;
- (NSString *)ckShortDescription;

@end
