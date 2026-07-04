/* Runtime dump - PLManagedFolder
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLManagedFolder : PLGenericAlbum <PLAlbumContainer>
{
    char _needsPersistenceUpdate;
    char _needsFixedOrderKeysComplianceUpdate;
}

@property (retain, nonatomic) NSOrderedSet * childCollections;
@property (nonatomic) char needsPersistenceUpdate;
@property (nonatomic) char needsFixedOrderKeysComplianceUpdate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) unsigned int containersCount;
@property (readonly, nonatomic) unsigned int albumsCount;
@property (readonly, nonatomic) char isFolder;
@property (readonly, copy, nonatomic) id albumsSortingComparator;
@property (readonly, nonatomic) int filter;
@property (readonly, nonatomic) unsigned int unreadAlbumsCount;
@property (readonly, retain, nonatomic) NSString * _prettyDescription;
@property (readonly, retain, nonatomic) NSString * _typeDescription;

+ (NSString *)entityName;
+ (NSString *)entityInManagedObjectContext:(NSObject *)arg0;
+ (NSString *)insertInManagedObjectContext:(NSObject *)arg0;
+ (PLManagedFolder *)childKeyForOrdering;

- (unsigned int)count;
- (NSString *)identifier;
- (char)isEmpty;
- (NSArray *)albums;
- (NSMutableOrderedSet *)mutableAssets;
- (char)canPerformEditOperation:(unsigned int)arg0;
- (NSArray *)assets;
- (unsigned int)approximateCount;
- (unsigned int)assetsCount;
- (unsigned int)photosCount;
- (unsigned int)videosCount;
- (void)persistMetadataToFileSystem;
- (void)prepareForDeletion;
- (char)isValidKindForPersistence;
- (void)removePersistedFileSystemData;
- (void)willSave;
- (void)setNeedsPersistenceUpdate:(char)arg0;
- (void)didSave;
- (char)needsPersistenceUpdate;
- (unsigned int)albumsCount;
- (id)childKeyForOrdering;
- (NSString *)_prettyDescription;
- (void)moveChildCollectionsAtIndexes:(NSArray *)arg0 toIndex:(unsigned int)arg1;
- (void)insertObject:(NSObject *)arg0 inChildCollectionsAtIndex:(unsigned int)arg1;
- (int)filter;
- (void)migration_handleChildOrderKeys;
- (NSOrderedSet *)containers;
- (char)canEditContainers;
- (NSString *)containersRelationshipName;
- (unsigned int)containersCount;
- (short)albumListType;
- (NSString *)_typeDescription;
- (char)hasAtLeastOneAlbum;
- (char)canEditAlbums;
- (id /* block */)albumsSortingComparator;
- (void)preheatAlbumsAtIndexes:(NSArray *)arg0 forProperties:(id *)arg1 relationships:(NSArray *)arg2;
- (char)albumHasFixedOrder:(struct NSObject *)arg0;
- (void)setNeedsReordering;
- (char)needsReordering;
- (void)updateAlbumsOrderIfNeeded;
- (void)preheatAlbumsForProperties:(NSDictionary *)arg0 relationships:(NSArray *)arg1;
- (unsigned int)unreadAlbumsCount;
- (NSObject *)migration_sortedOrderKeysForChildrenUsingMap:(NSObject *)arg0;
- (NSObject *)migration_newOrderKeyChild:(NSObject *)arg0;
- (void)addChildCollections:(id)arg0;
- (void)setNeedsFixedOrderKeysComplianceUpdate:(char)arg0;
- (char)needsFixedOrderKeysComplianceUpdate;
- (void)enforceFixedOrderKeyCompliance;
- (void)removeChildCollectionsAtIndexes:(NSArray *)arg0;
- (void)insertChildCollections:(id)arg0 atIndexes:(NSArray *)arg1;
- (void)removeObjectFromChildCollectionsAtIndex:(unsigned int)arg0;
- (void)replaceObjectInChildCollectionsAtIndex:(unsigned int)arg0 withObject:(NSObject *)arg1;
- (void)replaceChildCollectionsAtIndexes:(NSArray *)arg0 withChildCollections:(NSOrderedSet *)arg1;
- (void)addChildCollectionsObject:(NSObject *)arg0;
- (void)removeChildCollectionsObject:(NSObject *)arg0;
- (void)removeChildCollections:(id)arg0;
- (void)refreshCollections;
- (NSArray *)descriptionOfChildCollectionOrderValues;

@end
