/* Runtime dump - SSMetricsEventTable
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSMetricsEventTable : NSObject
{
    SSSQLiteDatabase * _database;
}

+ (NSString *)databasePath;

- (SSMetricsEventTable *)initWithDatabase:(SSSQLiteDatabase *)arg0;
- (void)dealloc;
- (SSMetricsEventTable *)init;
- (void)performTransactionWithBlock:(id /* block */)arg0;
- (char)_setupDatabase;

@end
