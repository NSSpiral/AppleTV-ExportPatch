/* Runtime dump - CKModifyRecordZonesOperationInfo
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKModifyRecordZonesOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>
{
    char _allowDefaultZoneSave;
    char _markZonesAsUserPurged;
    NSArray * _recordZonesToSave;
    NSArray * _recordZoneIDsToDelete;
}

@property (retain, nonatomic) NSArray * recordZonesToSave;
@property (retain, nonatomic) NSArray * recordZoneIDsToDelete;
@property (nonatomic) char allowDefaultZoneSave;
@property (nonatomic) char markZonesAsUserPurged;

+ (char)supportsSecureCoding;

- (CKModifyRecordZonesOperationInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (void)setMarkZonesAsUserPurged:(char)arg0;
- (void)setRecordZonesToSave:(NSArray *)arg0;
- (void)setAllowDefaultZoneSave:(char)arg0;
- (NSArray *)recordZonesToSave;
- (NSArray *)recordZoneIDsToDelete;
- (char)allowDefaultZoneSave;
- (char)markZonesAsUserPurged;
- (void)setRecordZoneIDsToDelete:(NSArray *)arg0;

@end
