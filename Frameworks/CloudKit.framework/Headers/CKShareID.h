/* Runtime dump - CKShareID
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKShareID : NSObject <NSSecureCoding, NSCopying>
{
    NSString * _shareName;
    CKRecordZoneID * _zoneID;
}

@property (copy, nonatomic) NSString * shareName;
@property (copy, nonatomic) CKRecordZoneID * zoneID;

+ (char)supportsSecureCoding;

- (CKShareID *)initWithDocumentItem:(NSObject *)arg0;
- (NSObject *)brc_itemID;
- (CKShareID *)initWithRecordID:(NSObject *)arg0;
- (NSObject *)brc_containerID;
- (CKShareID *)initWithItemID:(NSObject *)arg0 zoneID:(CKRecordZoneID *)arg1;
- (void)setShareName:(NSString *)arg0;
- (CKShareID *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKShareID *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (CKRecordZoneID *)zoneID;
- (void)setZoneID:(CKRecordZoneID *)arg0;
- (NSString *)shareName;
- (CKShareID *)initWithShareName:(NSString *)arg0 zoneID:(CKRecordZoneID *)arg1;
- (NSString *)CKPropertiesDescription;
- (NSString *)ckShortDescription;

@end
