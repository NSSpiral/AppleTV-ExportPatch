/* Runtime dump - NSPersistentStore
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSPersistentStore : NSObject
{
    NSPersistentStoreCoordinator * _coordinator;
    NSString * _configurationName;
    NSURL * _url;
    NSDictionary * _options;
    id * _oidFactories;
    id _defaultFaultHandler;
    struct _objectStoreFlags _flags;
    void * _temporaryIDClass;
    id _externalRecordsMonitor;
    void * _reserved3;
}

@property (readonly, weak, nonatomic) NSPersistentStoreCoordinator * persistentStoreCoordinator;
@property (readonly, copy) NSString * configurationName;
@property (readonly) NSDictionary * options;
@property (retain) NSURL * URL;
@property (copy) NSString * identifier;
@property (readonly, copy) NSString * type;
@property char readOnly;
@property (retain, nonatomic) NSDictionary * metadata;

+ (NSURL *)metadataForPersistentStoreWithURL:(NSString *)arg0 error:(id *)arg1;
+ (char)doURLStuff:(id)arg0 createdStubFile:(char *)arg1 readOnly:(char *)arg2 error:(id *)arg3 options:(NSDictionary *)arg4;
+ (char)setMetadata:(NSDictionary *)arg0 forPersistentStoreWithURL:(NSString *)arg1 error:(id *)arg2;
+ (Class)migrationManagerClass;
+ (char)_replacePersistentStoreAtURL:(NSURL *)arg0 destinationOptions:(NSDictionary *)arg1 withPersistentStoreFromURL:(NSURL *)arg2 sourceOptions:(NSDictionary *)arg3 error:(id *)arg4;
+ (char)_destroyPersistentStoreAtURL:(NSURL *)arg0 options:(NSDictionary *)arg1 error:(id *)arg2;
+ (NSPersistentStore *)_figureOutWhereExternalReferencesEndedUpRelativeTo:(id)arg0;
+ (char)accessInstanceVariablesDirectly;
+ (void)initialize;

- (NSObject *)objectIDFactoryForEntity:(NSObject *)arg0;
- (NSPersistentStore *)initWithPersistentStoreCoordinator:(NSPersistentStoreCoordinator *)arg0 configurationName:(NSString *)arg1 URL:(NSString *)arg2 options:(NSDictionary *)arg3;
- (NSString *)configurationName;
- (id)_updatedMetadataWithSeed:(unsigned int)arg0 includeVersioning:(char)arg1;
- (char)load:(id *)arg0;
- (NSDictionary *)_rawMetadata__;
- (id /* block */)faultHandler;
- (char)_isMetadataDirty;
- (void)_setMetadataDirty:(char)arg0;
- (NSURLRequest *)executeRequest:(NSURLRequest *)arg0 withContext:(NSObject *)arg1 error:(id *)arg2;
- (NSObject *)newValuesForObjectWithID:(int)arg0 withContext:(NSObject *)arg1 error:(id *)arg2;
- (id)newValueForRelationship:(NSRelationshipDescription *)arg0 forObjectWithID:(int)arg1 withContext:(NSObject *)arg2 error:(id *)arg3;
- (void)_didLoadMetadata;
- (void)_preflightCrossCheck;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(int)arg0;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(int)arg0;
- (void)doFilesystemCleanupOnRemove:(char)arg0;
- (id *)knownKeyValuesForObjectID:(NSObject *)arg0 withContext:(NSObject *)arg1;
- (id)_newOrderedRelationshipInformationForRelationship:(id)arg0 forObjectWithID:(int)arg1 withContext:(NSObject *)arg2 error:(id *)arg3;
- (char)_unload:(id *)arg0;
- (void)_resetObjectIDFactoriesForStoreUUIDChange;
- (void)willRemoveFromPersistentStoreCoordinator:(NSObject *)arg0;
- (void)didAddToPersistentStoreCoordinator:(NSObject *)arg0;
- (Class)faultHandlerClass;
- (Class)_objectIDClass;
- (Class)objectIDClassForEntity:(NSObject *)arg0;
- (char)_prepareForExecuteRequest:(NSURLRequest *)arg0 withContext:(NSObject *)arg1 error:(id *)arg2;
- (NSDictionary *)_defaultMetadata;
- (void)_updateMetadata;
- (NSString *)_storeInfoForEntityDescription:(NSString *)arg0;
- (void)clearCachedInformationForRequestWithIdentifier:(NSString *)arg0;
- (void)dealloc;
- (NSString *)description;
- (NSString *)identifier;
- (NSString *)type;
- (NSPersistentStore *)copyWithZone:(struct _NSZone *)arg0;
- (void)setIdentifier:(NSString *)arg0;
- (NSURL *)URL;
- (void)setURL:(NSString *)arg0;
- (NSDictionary *)options;
- (void)setPersistentStoreCoordinator:(NSPersistentStoreCoordinator *)arg0;
- (void)setReadOnly:(char)arg0;
- (NSPersistentStoreCoordinator *)persistentStoreCoordinator;
- (char)isReadOnly;
- (void)setMetadata:(NSDictionary *)arg0;
- (NSDictionary *)metadata;
- (NSArray *)obtainPermanentIDsForObjects:(NSArray *)arg0 error:(id *)arg1;
- (char)loadMetadata:(id *)arg0;
- (NSObject *)_allOrderKeysForDestination:(NSObject *)arg0 inRelationship:(OCXRelationship *)arg1 error:(id *)arg2;
- (void)finalize;

@end
