/* Runtime dump - CKDatabase
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKDatabase : NSObject
{
    CKContainer * _container;
    int _scope;
    NSOperationQueue * _operationQueue;
    int _statusReportToken;
}

@property (weak, nonatomic) CKContainer * container;
@property (nonatomic) int scope;
@property (readonly, nonatomic) NSOperationQueue * operationQueue;
@property (nonatomic) int statusReportToken;

- (NSObject *)_initWithContainer:(CKContainer *)arg0 scope:(int)arg1;
- (id)daemonWithErrorHandler:(SSErrorHandler *)arg0;
- (int)statusReportToken;
- (void)setStatusReportToken:(int)arg0;
- (void)clearRecordCache;
- (void)clearAuthTokensForRecordWithID:(int)arg0;
- (void)getPCSDiagnosticsForZonesWithCompletionHandler:(id /* block */)arg0;
- (void)_scheduleOperation:(NSObject *)arg0;
- (void)fetchRecordWithID:(int)arg0 completionHandler:(id /* block */)arg1;
- (void)saveRecord:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (void)deleteRecordWithID:(int)arg0 completionHandler:(id /* block */)arg1;
- (void)performQuery:(NSObject *)arg0 inZoneWithID:(int)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchAllRecordZonesWithCompletionHandler:(id /* block */)arg0;
- (void)deleteRecordZoneWithID:(int)arg0 completionHandler:(id /* block */)arg1;
- (void)saveSubscription:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (void)deleteSubscriptionWithID:(int)arg0 completionHandler:(id /* block */)arg1;
- (void)fetchAllSubscriptionsWithCompletionHandler:(id /* block */)arg0;
- (void)fetchAllSharesWithRecordZoneID:(CKRecordZoneID *)arg0 completionHandler:(id /* block */)arg1;
- (void)fetchShareWithID:(int)arg0 completionHandler:(id /* block */)arg1;
- (void)saveShare:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)deleteShareWithID:(int)arg0 completionHandler:(id /* block */)arg1;
- (void)acceptShareWithURL:(NSString *)arg0 completionHandler:(id /* block */)arg1;
- (void)dealloc;
- (CKDatabase *)init;
- (NSString *)description;
- (void)setContainer:(CKContainer *)arg0;
- (CKContainer *)container;
- (void)addOperation:(NSObject *)arg0;
- (void)setScope:(int)arg0;
- (int)scope;
- (void).cxx_destruct;
- (NSOperationQueue *)operationQueue;
- (DAStatusReport *)statusReport;
- (void)clearAssetCache;
- (NSString *)CKPropertiesDescription;
- (void)saveRecordZone:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (void)fetchRecordZoneWithID:(int)arg0 completionHandler:(id /* block */)arg1;
- (void)fetchSubscriptionWithID:(int)arg0 completionHandler:(id /* block */)arg1;

@end
