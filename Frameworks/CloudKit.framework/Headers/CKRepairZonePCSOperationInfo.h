/* Runtime dump - CKRepairZonePCSOperationInfo
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKRepairZonePCSOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>
{
    NSArray * _zoneIDs;
}

@property (retain, nonatomic) NSArray * zoneIDs;

+ (char)supportsSecureCoding;

- (CKRepairZonePCSOperationInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (NSArray *)zoneIDs;
- (void)setZoneIDs:(NSArray *)arg0;

@end
