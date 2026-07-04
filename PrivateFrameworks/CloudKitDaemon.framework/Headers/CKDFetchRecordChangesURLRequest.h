/* Runtime dump - CKDFetchRecordChangesURLRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchRecordChangesURLRequest : CKDURLRequest
{
    NSMutableArray * _resultChangedRecords;
    NSMutableArray * _resultDeletedRecordIdentifiers;
    NSMutableArray * _resultChangedShares;
    NSMutableArray * _resultDeletedShareIdentifiers;
    unsigned int _resultsLimit;
    NSData * _resultServerChangeTokenData;
    NSData * _resultClientChangeTokenData;
    int _status;
    int _changeTypes;
    CKRecordZoneID * _recordZoneID;
    NSData * _serverChangeTokenData;
    NSArray * _requestedFields;
}

@property (nonatomic) unsigned int resultsLimit;
@property (retain, nonatomic) NSData * resultServerChangeTokenData;
@property (retain, nonatomic) NSData * resultClientChangeTokenData;
@property (readonly, nonatomic) NSArray * resultChangedRecords;
@property (readonly, nonatomic) NSArray * resultDeletedRecordIdentifiers;
@property (readonly, nonatomic) NSArray * resultChangedShares;
@property (readonly, nonatomic) NSArray * resultDeletedShareIdentifiers;
@property (nonatomic) int status;
@property (nonatomic) int changeTypes;
@property (retain, nonatomic) CKRecordZoneID * recordZoneID;
@property (retain, nonatomic) NSData * serverChangeTokenData;
@property (retain, nonatomic) NSArray * requestedFields;

- (void).cxx_destruct;
- (int)status;
- (void)setStatus:(int)arg0;
- (void)setResultsLimit:(unsigned int)arg0;
- (void)setRequestedFields:(NSArray *)arg0;
- (NSArray *)requestedFields;
- (unsigned int)resultsLimit;
- (NSArray *)requestOperations;
- (NSObject *)requestDidParseProtobufObject:(NSObject *)arg0;
- (NSArray *)requestOperationClasses;
- (NSArray *)zoneIDsToLock;
- (NSData *)serverChangeTokenData;
- (NSData *)resultServerChangeTokenData;
- (void)setServerChangeTokenData:(NSData *)arg0;
- (CKRecordZoneID *)recordZoneID;
- (void)setRecordZoneID:(CKRecordZoneID *)arg0;
- (void)setResultServerChangeTokenData:(NSData *)arg0;
- (int)changeTypes;
- (void)setResultClientChangeTokenData:(NSData *)arg0;
- (CKDFetchRecordChangesURLRequest *)initWithRecordZoneID:(CKRecordZoneID *)arg0 serverChangeTokenData:(NSData *)arg1 requestedFields:(NSArray *)arg2;
- (NSArray *)resultChangedRecords;
- (NSArray *)resultDeletedRecordIdentifiers;
- (NSData *)resultClientChangeTokenData;
- (NSArray *)resultChangedShares;
- (NSArray *)resultDeletedShareIdentifiers;
- (void)setChangeTypes:(int)arg0;
- (int)operationType;

@end
