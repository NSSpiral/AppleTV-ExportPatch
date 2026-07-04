/* Runtime dump - CKDFetchRecordVersionsRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchRecordVersionsRequest : CKDURLRequest
{
    char _isDeleted;
    id _recordVersionsFetchedBlock;
    NSArray * _recordIDs;
    NSArray * _desiredKeys;
    NSString * _minimumVersionETag;
    NSMutableDictionary * _recordIDByRequestID;
}

@property (copy, nonatomic) id recordVersionsFetchedBlock;
@property (retain, nonatomic) NSArray * recordIDs;
@property (retain, nonatomic) NSArray * desiredKeys;
@property (retain, nonatomic) NSString * minimumVersionETag;
@property (retain, nonatomic) NSMutableDictionary * recordIDByRequestID;
@property (nonatomic) char isDeleted;

- (void).cxx_destruct;
- (void)setDesiredKeys:(NSArray *)arg0;
- (void)setRecordIDs:(NSArray *)arg0;
- (NSArray *)desiredKeys;
- (NSArray *)requestOperations;
- (NSObject *)requestDidParseProtobufObject:(NSObject *)arg0;
- (void)requestDidParseNodeFailure:(id)arg0;
- (NSArray *)requestOperationClasses;
- (NSArray *)zoneIDsToLock;
- (NSArray *)recordIDs;
- (void)setIsDeleted:(char)arg0;
- (NSMutableDictionary *)recordIDByRequestID;
- (void)setRecordIDByRequestID:(NSMutableDictionary *)arg0;
- (NSString *)minimumVersionETag;
- (void)setMinimumVersionETag:(NSString *)arg0;
- (CKDFetchRecordVersionsRequest *)initWithRecordIDs:(NSArray *)arg0 desiredKeys:(NSArray *)arg1 minimumVersionETag:(NSString *)arg2;
- (void)setRecordVersionsFetchedBlock:(id /* block */)arg0;
- (id /* block */)recordVersionsFetchedBlock;
- (int)operationType;
- (char)isDeleted;

@end
