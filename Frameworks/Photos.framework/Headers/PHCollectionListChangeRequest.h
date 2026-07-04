/* Runtime dump - PHCollectionListChangeRequest
 * Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHCollectionListChangeRequest : NSObject <PHInsertChangeRequest, PHUpdateChangeRequest>
{
    PHCollectionList * _originalCollectionList;
    char _entitled;
    NSString * _clientName;
    int _clientProcessID;
    PHChangeRequestHelper * _helper;
    PHCollectionChangeRequestHelper * _collectionsHelper;
}

@property (readonly, nonatomic) PHObjectPlaceholder * placeholderForCreatedCollectionList;
@property (retain, nonatomic) NSString * title;
@property (readonly, nonatomic) PHChangeRequestHelper * helper;
@property (readonly, nonatomic) PHCollectionChangeRequestHelper * collectionsHelper;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) NSString * managedEntityName;
@property (readonly, nonatomic) NSString * uuid;
@property (readonly, nonatomic) NSManagedObjectID * objectID;
@property (readonly, nonatomic) char entitled;
@property (readonly, nonatomic) NSString * clientName;
@property (readonly, nonatomic) int clientProcessID;
@property (readonly) char new;
@property (readonly) char mutated;

+ (NSArray *)changeRequestForCollectionList:(NSArray *)arg0 childCollections:(NSOrderedSet *)arg1;
+ (NSArray *)changeRequestForCollectionList:(NSArray *)arg0;
+ (NSString *)creationRequestForCollectionListWithTitle:(NSString *)arg0;
+ (void)deleteCollectionLists:(id)arg0;

- (PHChangeRequestHelper *)helper;
- (char)isNew;
- (NSString *)managedEntityName;
- (char)isEntitled;
- (int)clientProcessID;
- (char)validateInsertIntoPhotoLibrary:(PLPhotoLibrary *)arg0 error:(id *)arg1;
- (char)validateMutationsToManagedObject:(NSManagedObject *)arg0 error:(id *)arg1;
- (PHCollectionListChangeRequest *)initWithUUID:(NSString *)arg0 objectID:(NSManagedObjectID *)arg1;
- (PHCollectionListChangeRequest *)initWithXPCDict:(NSObject<OS_xpc_object> *)arg0 entitled:(char)arg1 clientName:(NSString *)arg2 clientBundleID:(NSString *)arg3 clientProcessID:(int)arg4;
- (void)encodeToXPCDict:(NSObject<OS_xpc_object> *)arg0;
- (PHCollectionListChangeRequest *)initForNewObject;
- (char)canGenerateUUIDLocally;
- (char)allowMutationToManagedObject:(NSManagedObject *)arg0 propertyKey:(NSString *)arg1 error:(id *)arg2;
- (id)mutations;
- (void)didMutate;
- (char)isMutated;
- (NSManagedObject *)createManagedObjectForInsertIntoPhotoLibrary:(PLPhotoLibrary *)arg0 error:(id *)arg1;
- (char)applyMutationsToManagedObject:(NSManagedObject *)arg0 error:(id *)arg1;
- (NSMutableArray *)_mutableObjectIDsAndUUIDs;
- (void)_setOriginalCollectionList:(NSArray *)arg0;
- (void)_prepareWithFetchResult:(NSObject *)arg0;
- (PHCollectionChangeRequestHelper *)collectionsHelper;
- (void)_prepareAssetIDsIfNeeded;
- (PHObjectPlaceholder *)placeholderForCreatedCollectionList;
- (void)insertChildCollection:(id)arg0 inChildCollectionsAtIndex:(unsigned int)arg1;
- (void)removeChildCollectionFromChildCollectionsAtIndex:(unsigned int)arg0;
- (void)replaceChildCollectionsAtIndex:(unsigned int)arg0 withChildCollection:(TSSStylesheet *)arg1;
- (void)addChildCollection:(id)arg0;
- (void)removeChildCollection:(id)arg0;
- (void)setTitle:(NSString *)arg0;
- (NSString *)description;
- (NSString *)title;
- (void).cxx_destruct;
- (NSString *)uuid;
- (NSString *)clientName;
- (NSManagedObjectID *)objectID;
- (void)moveChildCollectionsAtIndexes:(NSArray *)arg0 toIndex:(unsigned int)arg1;
- (void)addChildCollections:(id)arg0;
- (void)removeChildCollectionsAtIndexes:(NSArray *)arg0;
- (void)insertChildCollections:(id)arg0 atIndexes:(NSArray *)arg1;
- (void)replaceChildCollectionsAtIndexes:(NSArray *)arg0 withChildCollections:(NSOrderedSet *)arg1;
- (void)removeChildCollections:(id)arg0;

@end
