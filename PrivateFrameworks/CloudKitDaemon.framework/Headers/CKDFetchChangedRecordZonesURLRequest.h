/* Runtime dump - CKDFetchChangedRecordZonesURLRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchChangedRecordZonesURLRequest : CKDURLRequest
{
    NSMutableArray * _changedZoneIDs;
    NSMutableArray * _deletedZoneIDs;
    unsigned int _resultsLimit;
    NSData * _serverChangeTokenData;
    int _status;
    CKRecordZoneID * _recordZoneID;
    NSData * _previousServerChangeTokenData;
}

@property (nonatomic) unsigned int resultsLimit;
@property (retain, nonatomic) NSData * serverChangeTokenData;
@property (readonly, nonatomic) NSArray * changedZoneIDs;
@property (readonly, nonatomic) NSArray * deletedZoneIDs;
@property (nonatomic) int status;
@property (retain, nonatomic) CKRecordZoneID * recordZoneID;
@property (retain, nonatomic) NSData * previousServerChangeTokenData;

- (void).cxx_destruct;
- (int)status;
- (void)setStatus:(int)arg0;
- (void)setResultsLimit:(unsigned int)arg0;
- (unsigned int)resultsLimit;
- (NSArray *)requestOperations;
- (NSObject *)requestDidParseProtobufObject:(NSObject *)arg0;
- (NSArray *)requestOperationClasses;
- (NSData *)serverChangeTokenData;
- (NSArray *)changedZoneIDs;
- (NSArray *)deletedZoneIDs;
- (CKDFetchChangedRecordZonesURLRequest *)initWithPreviousServerChangeTokenData:(NSData *)arg0;
- (NSData *)previousServerChangeTokenData;
- (void)setServerChangeTokenData:(NSData *)arg0;
- (CKRecordZoneID *)recordZoneID;
- (void)setRecordZoneID:(CKRecordZoneID *)arg0;
- (void)setPreviousServerChangeTokenData:(NSData *)arg0;
- (int)operationType;

@end
