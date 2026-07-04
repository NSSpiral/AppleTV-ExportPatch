/* Runtime dump - PLSubmissions
 * Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLSubmissions : NSObject
{
    PLStorageOperator * _storageOperator;
    PLSQLiteConnection * _connection;
}

@property (weak) PLStorageOperator * storageOperator;
@property (retain) PLSQLiteConnection * connection;

+ (PLSubmissions *)sharedInstance;

- (PLSubmissions *)init;
- (void).cxx_destruct;
- (PLSQLiteConnection *)connection;
- (void)setConnection:(PLSQLiteConnection *)arg0;
- (NSObject<OS_dispatch_queue> *)workQueue;
- (PLStorageOperator *)storageOperator;
- (void)setStorageOperator:(PLStorageOperator *)arg0;
- (void)generateSubmissionWithPayload:(NSData *)arg0;
- (void)filterDatabaseAtPath:(NSString *)arg0 withMaxOutputFileSize:(long long)arg1 removingTables:(id)arg2 hashingTableKeys:(NSArray *)arg3 usingTrimmingQueries:(id)arg4;
- (NSObject *)trimmingQueryForIndex:(int)arg0;
- (void)generateInternalOTASubmission;
- (void)generateTaskedOTASubmission;

@end
