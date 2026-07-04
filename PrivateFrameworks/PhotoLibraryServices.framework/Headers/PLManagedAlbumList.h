/* Runtime dump - PLManagedAlbumList
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLManagedAlbumList : _PLManagedAlbumList <PLAlbumContainer, PLDerivedAlbumListOrigin, PLIndexMappersDataOrigin>
{
    id _derivedAlbumLists;
    char isRegisteredForChanges;
    char didRegisteredWithUserInterfaceContext;
}

@property (nonatomic) short albumListType;
@property (retain, nonatomic) NSString * uuid;
@property (readonly, retain, nonatomic) NSMutableOrderedSet * albums;
@property (readonly, nonatomic) char hasAtLeastOneAlbum;
@property (readonly, nonatomic) char canEditAlbums;
@property (nonatomic) char isRegisteredForChanges;
@property (nonatomic) char didRegisteredWithUserInterfaceContext;
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

+ (void)initialize;
+ (NSObject *)albumListInPhotoLibrary:(NSObject *)arg0;
+ (NSObject *)importListInPhotoLibrary:(NSObject *)arg0;
+ (NSObject *)eventListInPhotoLibrary:(NSObject *)arg0;
+ (NSObject *)facesAlbumListInPhotoLibrary:(NSObject *)arg0;
+ (char)isValidPathForPersistence:(id)arg0;
+ (void)restoreAlbumListFromPersistedDataAtPath:(NSString *)arg0 library:(NSObject *)arg1;
+ (NSObject *)allStreamedAlbumsListInPhotoLibrary:(NSObject *)arg0;
+ (NSObject *)placesAlbumListInPhotoLibrary:(NSObject *)arg0;
+ (NSString *)keyPathsForValuesAffectingValueForKey:(NSString *)arg0;
+ (void)addSingletonObjectsToContext:(NSObject *)arg0;
+ (NSString *)importListInManagedObjectContext:(NSObject *)arg0;
+ (NSString *)eventListInManagedObjectContext:(NSObject *)arg0;
+ (NSString *)albumListInManagedObjectContext:(NSObject *)arg0;
+ (void)pushChangesFromAlbumContainer:(NSObject *)arg0 toAlbumContainer:(NSObject *)arg1;
+ (NSString *)allStreamedAlbumsListInManagedObjectContext:(NSObject *)arg0;
+ (char)albumKindHasFixedOrder:(int)arg0;
+ (unsigned int)priorityForAlbumKind:(int)arg0;
+ (NSObject *)_albumListWithType:(short)arg0 inManagedObjectContext:(NSObject *)arg1;
+ (NSObject *)_singletonListWithType:(short)arg0 library:(NSObject *)arg1;
+ (NSObject *)_typeDescriptionForAlbumListType:(short)arg0;
+ (NSObject *)_validAlbumsFromSource:(NSObject *)arg0 destination:(NSObject *)arg1;
+ (char)_albumOrderMatchesFrom:(NSObject *)arg0 inDestination:(NSObject *)arg1;
+ (char)isValidTypeForPersistence:(short)arg0;
+ (void)persistAlbumListUUIDs:(id)arg0 type:(short)arg1 allowsOverwrite:(char)arg2;
+ (NSObject *)wallpaperAlbumListInPhotoLibrary:(NSObject *)arg0;
+ (NSString *)facesAlbumListInManagedObjectContext:(NSObject *)arg0;
+ (NSString *)placesAlbumListInManagedObjectContext:(NSObject *)arg0;

- (void)dealloc;
- (char)isEmpty;
- (NSMutableOrderedSet *)albums;
- (char)isFolder;
- (void)awakeFromInsert;
- (void)willSave;
- (void)didSave;
- (char)isRegisteredForChanges;
- (void)setDidRegisteredWithUserInterfaceContext:(char)arg0;
- (void)registerForChanges;
- (char)didRegisteredWithUserInterfaceContext;
- (void)unregisterForChanges;
- (unsigned int)albumsCount;
- (void)awakeFromFetch;
- (void)willTurnIntoFault;
- (NSString *)_prettyDescription;
- (void)unregisterAllDerivedAlbums;
- (void)insertIntoOrderedAlbumsAtIndexByPriorityForAlbum:(id)arg0;
- (void)setIsRegisteredForChanges:(char)arg0;
- (void)enumerateDerivedIndexMappers:(id)arg0;
- (char)hasDerivedIndexMappers;
- (int)filter;
- (NSOrderedSet *)containers;
- (char)canEditContainers;
- (NSString *)containersRelationshipName;
- (unsigned int)containersCount;
- (NSURLRequest *)_albumsCountFetchRequest;
- (short)albumListType;
- (NSString *)_typeDescription;
- (char)hasAtLeastOneAlbum;
- (char)canEditAlbums;
- (id /* block */)albumsSortingComparator;
- (void)preheatAlbumsAtIndexes:(NSArray *)arg0 forProperties:(id *)arg1 relationships:(NSArray *)arg2;
- (void)enumerateDerivedAlbumLists:(id)arg0;
- (char)albumHasFixedOrder:(struct NSObject *)arg0;
- (void)setNeedsReordering;
- (char)needsReordering;
- (void)updateAlbumsOrderIfNeeded;
- (void)preheatAlbumsForProperties:(NSDictionary *)arg0 relationships:(NSArray *)arg1;
- (unsigned int)unreadAlbumsCount;
- (void)registerDerivedAlbumList:(struct NSObject *)arg0;
- (void)setAlbumListType:(short)arg0;

@end
