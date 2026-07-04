/* Runtime dump - CKFetchRecordChangesOperationInfo
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchRecordChangesOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>
{
    char _shouldFetchAssetContents;
    CKRecordZoneID * _recordZoneID;
    CKServerChangeToken * _previousServerChangeToken;
    NSArray * _desiredKeys;
    unsigned int _resultsLimit;
    int _changeTypes;
}

@property (retain, nonatomic) CKRecordZoneID * recordZoneID;
@property (retain, nonatomic) CKServerChangeToken * previousServerChangeToken;
@property (retain, nonatomic) NSArray * desiredKeys;
@property (nonatomic) char shouldFetchAssetContents;
@property (nonatomic) unsigned int resultsLimit;
@property (nonatomic) int changeTypes;

+ (char)supportsSecureCoding;

- (CKFetchRecordChangesOperationInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (void)setResultsLimit:(unsigned int)arg0;
- (void)setDesiredKeys:(NSArray *)arg0;
- (void)setShouldFetchAssetContents:(char)arg0;
- (NSArray *)desiredKeys;
- (unsigned int)resultsLimit;
- (CKServerChangeToken *)previousServerChangeToken;
- (void)setPreviousServerChangeToken:(CKServerChangeToken *)arg0;
- (CKRecordZoneID *)recordZoneID;
- (void)setRecordZoneID:(CKRecordZoneID *)arg0;
- (int)changeTypes;
- (void)setChangeTypes:(int)arg0;
- (char)shouldFetchAssetContents;

@end
