/* Runtime dump - CKFetchRecordZonesOperationInfo
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchRecordZonesOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>
{
    char _isFetchAllRecordZonesOperation;
    char _ignorePCSFailures;
    NSArray * _recordZoneIDs;
}

@property (retain, nonatomic) NSArray * recordZoneIDs;
@property (nonatomic) char isFetchAllRecordZonesOperation;
@property (nonatomic) char ignorePCSFailures;

+ (char)supportsSecureCoding;

- (CKFetchRecordZonesOperationInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (void)setRecordZoneIDs:(NSArray *)arg0;
- (void)setIsFetchAllRecordZonesOperation:(char)arg0;
- (void)setIgnorePCSFailures:(char)arg0;
- (NSArray *)recordZoneIDs;
- (char)isFetchAllRecordZonesOperation;
- (char)ignorePCSFailures;

@end
