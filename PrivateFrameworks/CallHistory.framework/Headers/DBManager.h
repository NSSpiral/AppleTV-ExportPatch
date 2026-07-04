/* Runtime dump - DBManager
 * Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface DBManager : CHLogger
{
    NSPersistentStoreCoordinator * fPersistentStoreCoordinator;
}

@property (retain, nonatomic) NSPersistentStoreCoordinator * fPersistentStoreCoordinator;

+ (int)isDataStoreAtURLInitialized:(id)arg0 withModelAtURL:(NSURL *)arg1;
+ (char)migrateDataStoreAtLocation:(NSObject *)arg0 withGetDestinationModel:(NSObject *)arg1 isEncrypted:(/* block */ id)arg2;
+ (int)versionForDBAtLocation:(NSObject *)arg0;
+ (NSString *)entityDescriptionHavingName:(NSString *)arg0 forContext:(NSObject *)arg1;
+ (DBManager *)instanceWithModelURL:(NSURL *)arg0;
+ (NSString *)getPropertyValueForKey:(NSString *)arg0 forContext:(NSObject *)arg1;
+ (void)setPropertyValue:(id)arg0 forKey:(NSString *)arg1 forContext:(NSObject *)arg2;
+ (NSObject *)getPersistenCoordinator:(NSObject *)arg0;
+ (int)getVersionForMappingModel:(NSObject *)arg0;
+ (NSDictionary *)dbOptions:(char)arg0;
+ (char)destroyDBAtLocation:(NSObject *)arg0 withModelAtLocation:(NSObject *)arg1;
+ (char)moveDBAtLocation:(NSObject *)arg0 toLocation:(NSObject *)arg1 withModelAtLocation:(NSObject *)arg2;
+ (NSString *)getStoreURLforContext:(NSObject *)arg0;
+ (NSString *)mangedObjectWithURI:(NSString *)arg0 inContext:(NSObject *)arg1;
+ (char)replacePersistentStore:(NSObject *)arg0 withURL:(NSString *)arg1;

- (DBManager *)init;
- (void).cxx_destruct;
- (char)addDataStoreAtLocation:(NSObject *)arg0 isEncrypted:(char)arg1;
- (NSString *)createManagedObjectContext;
- (NSPersistentStoreCoordinator *)fPersistentStoreCoordinator;
- (void)removeDataStoreAtLocation:(NSObject *)arg0;
- (void)setFPersistentStoreCoordinator:(NSPersistentStoreCoordinator *)arg0;

@end
