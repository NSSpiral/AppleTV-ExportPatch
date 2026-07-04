/* Runtime dump - AnalyticsWorkspace
 * Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
 */

@interface AnalyticsWorkspace : NSObject <NSCopying>
{
    NSString * backingStore;
    char readOnly;
    char pathKnownToFail;
    NSString * revision;
    NSString * storeKind;
    NSString * storeProt;
    NSPersistentStoreCoordinator * __persistentStoreCoordinator;
    NSManagedObjectContext * __mainObjectContext;
    NSManagedObjectModel * __objectModel;
    <ServiceInterface> * __service;
    id __resetCompletionBlock;
    NSXPCConnection * __connection;
}

@property (readonly, retain, nonatomic) NSManagedObjectModel * objectModel;
@property (readonly, retain, nonatomic) NSManagedObjectContext * mainObjectContext;
@property (readonly, retain, nonatomic) NSPersistentStoreCoordinator * persistentStoreCoordinator;
@property (readonly, retain, nonatomic) <ServiceInterface> * service;
@property (copy, nonatomic) id resetCompletionBlock;
@property (retain) NSXPCConnection * connection;

+ (AnalyticsWorkspace *)defaultWorkspace;
+ (NSString *)workspaceWithName:(NSString *)arg0 atPath:(NSString *)arg1 useReadOnly:(char)arg2;

- (char)save;
- (void)dealloc;
- (void)reset;
- (AnalyticsWorkspace *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (NSXPCConnection *)connection;
- (void)setConnection:(NSXPCConnection *)arg0;
- (<ServiceInterface> *)service;
- (NSPersistentStoreCoordinator *)persistentStoreCoordinator;
- (AnalyticsWorkspace *)initWorkspaceWithService:(<ServiceInterface> *)arg0;
- (AnalyticsWorkspace *)initWorkspaceWithName:(NSString *)arg0 atPath:(NSString *)arg1 useReadOnly:(char)arg2;
- (NSManagedObjectModel *)objectModel;
- (NSString *)_initWithName:(NSString *)arg0 useReadOnly:(char)arg1;
- (char)_primePath:(NSString *)arg0;
- (void)_analyticsErrorHandler;
- (NSString *)createNewContext;
- (NSManagedObjectContext *)mainObjectContext;
- (id /* block */)resetCompletionBlock;
- (void)setResetCompletionBlock:(id /* block */)arg0;

@end
