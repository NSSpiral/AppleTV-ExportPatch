/* Runtime dump - CKQueryCursor
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKQueryCursor : NSObject <NSCopying, NSSecureCoding>
{
    NSData * _data;
    CKRecordZoneID * _zoneID;
}

@property (retain, nonatomic) NSData * data;
@property (retain, nonatomic) CKRecordZoneID * zoneID;

+ (char)supportsSecureCoding;

- (CKQueryCursor *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (CKQueryCursor *)init;
- (CKQueryCursor *)copyWithZone:(struct _NSZone *)arg0;
- (NSData *)data;
- (void)setData:(NSData *)arg0;
- (void).cxx_destruct;
- (CKRecordZoneID *)zoneID;
- (void)setZoneID:(CKRecordZoneID *)arg0;
- (CKQueryCursor *)initWithData:(NSData *)arg0 zoneID:(CKRecordZoneID *)arg1;

@end
