/* Runtime dump - BKSApplicationDataStore
 * Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSApplicationDataStore : NSObject
{
    NSString * _bundleId;
    BKSApplicationDataStoreRepositoryClient * _client;
    char _clientNeedsCheckin;
}

+ (void)synchronize;
+ (void)_doWithClassClient:(Class)arg0;
+ (BKSApplicationDataStore *)applicationsWithAvailableStores;
+ (void)setPrefetchedKeys:(NSArray *)arg0;
+ (void)_setClassClient:(NSObject *)arg0;
+ (BKSApplicationDataStore *)storeForApplication:(id)arg0;

- (NSString *)objectForKey:(NSString *)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)dealloc;
- (BKSApplicationDataStore *)init;
- (void)removeAllObjects;
- (void)removeObjectForKey:(NSString *)arg0;
- (BKSApplicationDataStore *)initWithBundleIdentifier:(NSString *)arg0;
- (NSObject *)_initWithBundleId:(NSString *)arg0 client:(BKSApplicationDataStoreRepositoryClient *)arg1;
- (id)_makeSafe:(id)arg0 forType:(Class)arg1;
- (void)objectForKey:(NSString *)arg0 withResult:(NSObject *)arg1;
- (NSString *)safeObjectForKey:(NSString *)arg0 ofType:(Class)arg1;
- (void)safeObjectForKey:(NSString *)arg0 ofType:(Class)arg1 withResult:(NSObject *)arg2;
- (NSString *)archivedObjectForKey:(NSString *)arg0;
- (void)archivedObjectForKey:(NSString *)arg0 withResult:(NSObject *)arg1;
- (NSString *)safeArchivedObjectForKey:(NSString *)arg0 ofType:(Class)arg1;
- (void)safeArchivedObjectForKey:(NSString *)arg0 ofType:(Class)arg1 withResult:(NSObject *)arg2;
- (void)setArchivedObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (NSString *)archivedXPCCodableObjectForKey:(NSString *)arg0 ofType:(Class)arg1;
- (void)archivedXPCCodableObjectForKey:(NSString *)arg0 ofType:(Class)arg1 withResult:(NSObject *)arg2;
- (void)setArchivedXPCCodableObject:(NSObject *)arg0 forKey:(NSString *)arg1;

@end
