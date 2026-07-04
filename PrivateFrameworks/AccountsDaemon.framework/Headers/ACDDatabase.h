/* Runtime dump - ACDDatabase
 * Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDDatabase : NSObject
{
    NSString * _path;
    NSManagedObjectContext * _context;
    NSManagedObjectModel * _model;
    NSPersistentStore * _store;
    id _contextDidSaveNotificationObserver;
}

@property (readonly, nonatomic) NSString * path;
@property (readonly, nonatomic) NSManagedObjectContext * managedObjectContext;
@property (nonatomic) int version;

+ (NSManagedObjectModel *)_managedObjectModel;
+ (struct __CFString *)_copyRootPath;
+ (NSString *)_sharedPersistentCoordinatorForStoreAtPath:(NSString *)arg0;
+ (NSObject *)_optionsForOpeningPersistentStore;
+ (char)_addPersistentStoreWithURL:(NSString *)arg0 toStoreCoordinator:(NSObject *)arg1 withOptions:(unsigned long long)arg2 error:(id *)arg3;
+ (char)_isUnrecoverableDatabaseError:(NSError *)arg0;
+ (void)_replacePersistentStoreAtURL:(NSURL *)arg0 withCleanStoreForCoordinator:(NSObject *)arg1;
+ (void)_removePersistentStoreAtURL:(NSURL *)arg0 forStoreCoordinator:(NSObject *)arg1;
+ (void)_resetPeristentStoreCoordinator;
+ (ACDDatabase *)defaultPath;

- (void)dealloc;
- (NSString *)path;
- (void)setVersion:(int)arg0;
- (int)version;
- (ACDDatabase *)initWithPath:(NSString *)arg0;
- (void).cxx_destruct;
- (NSManagedObjectContext *)managedObjectContext;
- (id)fetchObjectsForEntityNamed:(id)arg0;
- (char)saveWithError:(id *)arg0;
- (id)fetchObjectsForEntityNamed:(id)arg0 withPredicate:(NSPredicate *)arg1;
- (unsigned int)countOfEntityNamed:(id)arg0 withPredicate:(NSPredicate *)arg1;
- (NSString *)existingObjectWithURI:(NSString *)arg0;
- (id)fetchObjectsForEntityNamed:(id)arg0 withPredicate:(NSPredicate *)arg1 sortDescriptor:(NSObject *)arg2;
- (void)deleteAccountPropertyWithKey:(NSString *)arg0 owner:(NSObject *)arg1;
- (void)setAccountPropertyWithKey:(NSString *)arg0 value:(NSObject *)arg1 owner:(NSObject *)arg2;
- (NSString *)managedObjectIDForURI:(NSString *)arg0;
- (NSString *)objectForObjectURI:(NSString *)arg0;
- (ACDDatabase *)initWithDefaultPath;
- (char)saveWithError:(id *)arg0 rollbackOnFailure:(char)arg1;
- (void)_setupManagedObjectContext;
- (void)_handleManagedObjectContextDidSaveNotification:(NSNotification *)arg0;
- (NSPersistentStore *)_store;
- (NSString *)_accountPropertyWithKey:(NSString *)arg0 owner:(NSObject *)arg1;
- (char)_databaseFileExists;

@end
