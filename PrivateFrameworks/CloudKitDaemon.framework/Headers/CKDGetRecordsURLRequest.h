/* Runtime dump - CKDGetRecordsURLRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDGetRecordsURLRequest : CKDURLRequest
{
    NSSet * _assetFieldNamesToPublishURLs;
    unsigned int _requestedTTL;
    unsigned int _URLOptions;
    id _recordFetchedBlock;
    NSArray * _recordIDs;
    NSDictionary * _recordIDsToETags;
    NSDictionary * _recordIDsToVersionETags;
    unsigned int _recordCount;
    NSMutableDictionary * _recordIDByRequestID;
    NSSet * _desiredKeys;
}

@property (retain, nonatomic) NSSet * assetFieldNamesToPublishURLs;
@property (nonatomic) unsigned int requestedTTL;
@property (nonatomic) unsigned int URLOptions;
@property (copy, nonatomic) id recordFetchedBlock;
@property (retain, nonatomic) NSArray * recordIDs;
@property (retain, nonatomic) NSDictionary * recordIDsToETags;
@property (retain, nonatomic) NSDictionary * recordIDsToVersionETags;
@property (nonatomic) unsigned int recordCount;
@property (retain, nonatomic) NSMutableDictionary * recordIDByRequestID;
@property (retain, nonatomic) NSSet * desiredKeys;

- (void).cxx_destruct;
- (void)setDesiredKeys:(NSSet *)arg0;
- (void)setRecordIDsToVersionETags:(NSDictionary *)arg0;
- (void)setRecordFetchedBlock:(id /* block */)arg0;
- (void)setRequestedTTL:(unsigned int)arg0;
- (void)setURLOptions:(unsigned int)arg0;
- (char)allowsAnonymousAccount;
- (void)setRecordIDs:(NSArray *)arg0;
- (NSSet *)desiredKeys;
- (id /* block */)recordFetchedBlock;
- (NSArray *)requestOperations;
- (NSObject *)requestDidParseProtobufObject:(NSObject *)arg0;
- (void)requestDidParseNodeFailure:(id)arg0;
- (NSArray *)requestOperationClasses;
- (NSArray *)zoneIDsToLock;
- (NSArray *)recordIDs;
- (unsigned int)requestedTTL;
- (unsigned int)URLOptions;
- (void)setAssetFieldNamesToPublishURLs:(NSSet *)arg0;
- (NSDictionary *)recordIDsToVersionETags;
- (NSDictionary *)recordIDsToETags;
- (NSSet *)assetFieldNamesToPublishURLs;
- (NSMutableDictionary *)recordIDByRequestID;
- (unsigned int)recordCount;
- (void)setRecordCount:(unsigned int)arg0;
- (CKDGetRecordsURLRequest *)initWithRecordIDs:(NSArray *)arg0 recordIDsToEtags:(id)arg1 recordIDsToVersionETags:(NSDictionary *)arg2 desiredKeys:(NSSet *)arg3;
- (void)setRecordIDsToETags:(NSDictionary *)arg0;
- (void)setRecordIDByRequestID:(NSMutableDictionary *)arg0;
- (int)operationType;

@end
