/* Runtime dump - CKFetchRecordZonesOperation
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchRecordZonesOperation : CKDatabaseOperation
{
    char _isFetchAllRecordZonesOperation;
    char _ignorePCSFailures;
    NSArray * _recordZoneIDs;
    id _fetchRecordZonesCompletionBlock;
    NSArray * _recordZones;
    NSMutableDictionary * _recordZonesByZoneID;
    NSMutableDictionary * _recordZoneErrors;
    NSError * _fetchAllRecordZonesError;
}

@property (copy, nonatomic) NSArray * recordZoneIDs;
@property (copy, nonatomic) id fetchRecordZonesCompletionBlock;
@property (retain, nonatomic) NSArray * recordZones;
@property (retain, nonatomic) NSMutableDictionary * recordZonesByZoneID;
@property (retain, nonatomic) NSMutableDictionary * recordZoneErrors;
@property (retain, nonatomic) NSError * fetchAllRecordZonesError;
@property (nonatomic) char isFetchAllRecordZonesOperation;
@property (nonatomic) char ignorePCSFailures;

+ (NSObject *)fetchAllRecordZonesOperation;

- (void)fillOutOperationInfo:(NSDictionary *)arg0;
- (NSMutableDictionary *)recordZoneErrors;
- (char)CKOperationShouldRun:(id *)arg0;
- (void)performCKOperation;
- (void)_handleProgressCallback:(id /* block */)arg0;
- (void)setRecordZoneErrors:(NSMutableDictionary *)arg0;
- (id /* block */)fetchRecordZonesCompletionBlock;
- (void)setFetchAllRecordZonesError:(NSError *)arg0;
- (NSError *)fetchAllRecordZonesError;
- (void)setRecordZones:(NSArray *)arg0;
- (CKFetchRecordZonesOperation *)init;
- (void).cxx_destruct;
- (CKFetchRecordZonesOperation *)initWithRecordZoneIDs:(NSArray *)arg0;
- (void)setFetchRecordZonesCompletionBlock:(id /* block */)arg0;
- (void)_finishOnCallbackQueueWithError:(NSError *)arg0;
- (void)setRecordZoneIDs:(NSArray *)arg0;
- (NSMutableDictionary *)recordZonesByZoneID;
- (void)setRecordZonesByZoneID:(NSMutableDictionary *)arg0;
- (void)setIsFetchAllRecordZonesOperation:(char)arg0;
- (void)setIgnorePCSFailures:(char)arg0;
- (NSArray *)recordZoneIDs;
- (char)isFetchAllRecordZonesOperation;
- (char)ignorePCSFailures;
- (NSArray *)recordZones;

@end
