/* Runtime dump - PFUbiquitySwitchboardEntryMetadata
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquitySwitchboardEntryMetadata : NSObject
{
    NSString * _localPeerID;
    NSString * _storeName;
    PFUbiquityLocation * _ubiquityRootLocation;
    PFUbiquityLocation * _localRootLocation;
    NSString * _activeModelVersionHash;
    NSMutableSet * _stores;
    NSPersistentStoreCoordinator * _privatePSC;
    NSSQLCore * _privateStore;
    _PFUbiquityRecordsImporter * _importer;
    _PFUbiquityRecordsExporter * _exporter;
    PFUbiquitySwitchboardCacheWrapper * _cacheWrapper;
    PFUbiquityRecordsImporterSchedulingContext * _schedulingContext;
    char _useLocalStorage;
    char _useLocaAccount;
    NSObject<OS_dispatch_queue> * _privateQueue;
    PFUbiquityBaselineHeuristics * _baselineHeuristics;
}

@property (retain, nonatomic) PFUbiquitySwitchboardCacheWrapper * cacheWrapper;
@property (readonly, nonatomic) _PFUbiquityRecordsImporter * importer;
@property (readonly, nonatomic) _PFUbiquityRecordsExporter * exporter;
@property (retain, nonatomic) PFUbiquityLocation * ubiquityRootLocation;
@property (readonly, nonatomic) NSSet * stores;
@property (readonly, nonatomic) NSString * activeModelVersionHash;
@property (readonly, nonatomic) NSPersistentStoreCoordinator * privatePSC;
@property (readonly, nonatomic) NSSQLCore * privateStore;
@property (readonly, nonatomic) PFUbiquityRecordsImporterSchedulingContext * schedulingContext;
@property (nonatomic) char useLocalStorage;
@property (nonatomic) char useLocalAccount;
@property (readonly, nonatomic) PFUbiquityBaselineHeuristics * baselineHeuristics;

- (NSSet *)stores;
- (NSSQLCore *)privateStore;
- (PFUbiquityLocation *)ubiquityRootLocation;
- (PFUbiquitySwitchboardCacheWrapper *)cacheWrapper;
- (PFUbiquityBaselineHeuristics *)baselineHeuristics;
- (void)setCacheWrapper:(PFUbiquitySwitchboardCacheWrapper *)arg0;
- (_PFUbiquityRecordsImporter *)importer;
- (void)setUseLocalStorage:(char)arg0;
- (void)setUbiquityRootLocation:(PFUbiquityLocation *)arg0;
- (char)useLocalStorage;
- (PFUbiquityRecordsImporterSchedulingContext *)schedulingContext;
- (NSPersistentStoreCoordinator *)privatePSC;
- (PFUbiquitySwitchboardEntryMetadata *)initWithLocalPeerID:(NSString *)arg0 ubiquityRootLocation:(PFUbiquityLocation *)arg1 localRootLocation:(PFUbiquityLocation *)arg2 storeName:(NSString *)arg3 andPrivateQueue:(NSObject *)arg4;
- (void)addPersistentStore:(NSObject *)arg0;
- (void)removePersistentStore:(NSObject *)arg0;
- (_PFUbiquityRecordsExporter *)exporter;
- (void)setUseLocalAccount:(char)arg0;
- (NSString *)activeModelVersionHash;
- (char)useLocalAccount;
- (void)dealloc;
- (void)tearDown;

@end
