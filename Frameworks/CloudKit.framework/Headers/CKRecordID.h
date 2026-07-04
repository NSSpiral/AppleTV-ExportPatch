/* Runtime dump - CKRecordID
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKRecordID : NSObject <NSSecureCoding, NSCopying>
{
    NSString * _recordName;
    CKRecordZoneID * _zoneID;
}

@property (retain, nonatomic) NSString * recordName;
@property (retain, nonatomic) CKRecordZoneID * zoneID;

+ (char)supportsSecureCoding;

- (NSObject *)brc_itemID;
- (char)brc_itemType;
- (NSDictionary *)sqliteRepresentation;
- (CKRecordID *)initWithSqliteRepresentation:(CKSQLite *)arg0;
- (void)setRecordName:(NSString *)arg0;
- (CKRecordID *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKRecordID *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (NSString *)recordName;
- (CKRecordZoneID *)zoneID;
- (CKRecordID *)initWithRecordName:(NSString *)arg0 zoneID:(CKRecordZoneID *)arg1;
- (void)setZoneID:(CKRecordZoneID *)arg0;
- (NSString *)CKPropertiesDescription;
- (NSString *)ckShortDescription;
- (CKRecordID *)initWithRecordName:(NSString *)arg0;

@end
