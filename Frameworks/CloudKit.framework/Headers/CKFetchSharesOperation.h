/* Runtime dump - CKFetchSharesOperation
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchSharesOperation : CKDatabaseOperation
{
    NSArray * _shareIDs;
    NSArray * _zoneIDs;
    id _fetchSharesCompletionBlock;
    NSMutableDictionary * _sharesByShareID;
    NSMutableDictionary * _shareIDErrors;
    NSMutableDictionary * _zoneIDErrors;
}

@property (readonly, nonatomic) NSArray * shareIDs;
@property (readonly, nonatomic) NSArray * zoneIDs;
@property (copy, nonatomic) id fetchSharesCompletionBlock;
@property (retain, nonatomic) NSMutableDictionary * sharesByShareID;
@property (retain, nonatomic) NSMutableDictionary * shareIDErrors;
@property (retain, nonatomic) NSMutableDictionary * zoneIDErrors;

- (void)fillOutOperationInfo:(NSDictionary *)arg0;
- (char)CKOperationShouldRun:(id *)arg0;
- (void)performCKOperation;
- (void)_handleProgressCallback:(id /* block */)arg0;
- (NSMutableDictionary *)sharesByShareID;
- (void)setSharesByShareID:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)shareIDErrors;
- (void)setShareIDErrors:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)zoneIDErrors;
- (void)setZoneIDErrors:(NSMutableDictionary *)arg0;
- (id /* block */)fetchSharesCompletionBlock;
- (CKFetchSharesOperation *)init;
- (void).cxx_destruct;
- (CKFetchSharesOperation *)initWithShareIDs:(NSArray *)arg0;
- (void)setFetchSharesCompletionBlock:(id /* block */)arg0;
- (NSArray *)zoneIDs;
- (void)_finishOnCallbackQueueWithError:(NSError *)arg0;
- (NSArray *)shareIDs;
- (CKFetchSharesOperation *)initWithZoneIDs:(NSArray *)arg0;

@end
