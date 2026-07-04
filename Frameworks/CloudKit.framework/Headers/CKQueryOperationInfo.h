/* Runtime dump - CKQueryOperationInfo
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKQueryOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>
{
    char _shouldFetchAssetContent;
    CKQuery * _query;
    CKRecordZoneID * _zoneID;
    CKQueryCursor * _cursor;
    unsigned int _resultsLimit;
    NSArray * _desiredKeys;
}

@property (retain, nonatomic) CKQuery * query;
@property (retain, nonatomic) CKRecordZoneID * zoneID;
@property (retain, nonatomic) CKQueryCursor * cursor;
@property (nonatomic) unsigned int resultsLimit;
@property (retain, nonatomic) NSArray * desiredKeys;
@property (nonatomic) char shouldFetchAssetContent;

+ (char)supportsSecureCoding;

- (CKQueryOperationInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (CKQuery *)query;
- (void)setQuery:(CKQuery *)arg0;
- (CKQueryCursor *)cursor;
- (void)setCursor:(CKQueryCursor *)arg0;
- (void).cxx_destruct;
- (void)setResultsLimit:(unsigned int)arg0;
- (void)setDesiredKeys:(NSArray *)arg0;
- (CKRecordZoneID *)zoneID;
- (void)setZoneID:(CKRecordZoneID *)arg0;
- (void)setShouldFetchAssetContent:(char)arg0;
- (NSArray *)desiredKeys;
- (unsigned int)resultsLimit;
- (char)shouldFetchAssetContent;

@end
