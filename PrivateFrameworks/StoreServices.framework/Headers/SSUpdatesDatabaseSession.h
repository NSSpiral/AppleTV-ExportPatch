/* Runtime dump - SSUpdatesDatabaseSession
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSUpdatesDatabaseSession : NSObject
{
    SSSQLiteDatabase * _database;
}

@property (readonly, nonatomic) SSSQLiteDatabase * database;

- (SSUpdatesDatabaseSession *)initWithDatabase:(SSSQLiteDatabase *)arg0;
- (void)dealloc;
- (SSSQLiteDatabase *)database;

@end
