/* Runtime dump - CKDGetUserRecordURLRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDGetUserRecordURLRequest : CKDURLRequest
{
    id _recordFetchedBlock;
    CKRecord * _userRecord;
}

@property (copy, nonatomic) id recordFetchedBlock;
@property (retain, nonatomic) CKRecord * userRecord;

- (void).cxx_destruct;
- (void)setRecordFetchedBlock:(id /* block */)arg0;
- (CKRecord *)userRecord;
- (id /* block */)recordFetchedBlock;
- (NSArray *)requestOperations;
- (NSObject *)requestDidParseProtobufObject:(NSObject *)arg0;
- (NSArray *)requestOperationClasses;
- (void)setUserRecord:(CKRecord *)arg0;
- (int)operationType;

@end
