/* Runtime dump - SSAppPurchaseHistoryTransaction
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSAppPurchaseHistoryTransaction : NSObject
{
    SSSQLiteDatabase * _database;
}

@property (readonly, nonatomic) SSSQLiteDatabase * database;

- (SSAppPurchaseHistoryTransaction *)initWithDatabase:(SSSQLiteDatabase *)arg0;
- (void)dealloc;
- (SSSQLiteDatabase *)database;

@end
