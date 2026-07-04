/* Runtime dump - SSKeyValueStoreSession
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSKeyValueStoreSession : NSObject
{
    SSSQLiteDatabase * _database;
}

@property (readonly, nonatomic) SSSQLiteDatabase * database;

- (SSKeyValueStoreSession *)initWithDatabase:(SSSQLiteDatabase *)arg0;
- (void)dealloc;
- (SSSQLiteDatabase *)database;
- (NSString *)copyValueForDomain:(NSString *)arg0 key:(NSString *)arg1;
- (NSString *)copyAccountDictionaryForDomain:(NSString *)arg0;
- (NSString *)iTunesValueForKey:(NSString *)arg0 usedDomain:(id *)arg1;
- (NSString *)copyDataForDomain:(NSString *)arg0 key:(NSString *)arg1;
- (NSString *)existingEntityForDomain:(NSString *)arg0 key:(NSString *)arg1;

@end
