/* Runtime dump - PLFilteredAlbumList
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLFilteredAlbumList : NSObject <PLAlbumContainer, PLIndexMapperDataSource, PLIndexMappingCache, PLDerivedAlbumListOrigin>
{
    PLIndexMapper * _indexMapper;
    NSMutableIndexSet * _filteredIndexes;
    NSMutableOrderedSet * _weak_albums;
    id _derivedAlbumLists;
    PLManagedAlbumList * backingAlbumList;
    int filter;
    NSPredicate * predicate;
}

@property (readonly, nonatomic) short albumListType;
@property (nonatomic) int filter;
@property (readonly, retain, nonatomic) NSMutableOrderedSet * albums;
@property (readonly, nonatomic) unsigned int unreadAlbumsCount;
@property (readonly, nonatomic) char canEditAlbums;
@property (readonly, retain, nonatomic) PLPhotoLibrary * photoLibrary;
@property (readonly, retain, nonatomic) PLIndexMapper * indexMapper;
@property (retain, nonatomic) PLManagedAlbumList * backingAlbumList;
@property (retain, nonatomic) NSPredicate * predicate;
@property (retain, nonatomic) NSMutableOrderedSet * _albums;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) unsigned int containersCount;
@property (readonly, nonatomic) unsigned int albumsCount;
@property (readonly, nonatomic) char isFolder;
@property (readonly, copy, nonatomic) id albumsSortingComparator;
@property (readonly, retain, nonatomic) NSString * _prettyDescription;
@property (readonly, retain, nonatomic) NSString * _typeDescription;
@property (readonly, copy, nonatomic) NSIndexSet * filteredIndexes;
@property (readonly, copy, nonatomic) <NSObject><NSCopying> * cachedIndexMapState;

+ (NSArray *)filteredAlbumList:(NSArray *)arg0 filter:(int)arg1;

- (void)dealloc;
- (NSString *)description;
- (NSString *)identifier;
- (char)isEmpty;
- (void)setFilter:(int)arg0;
- (void)setPredicate:(NSPredicate *)arg0;
- (NSPredicate *)predicate;
- (NSString *)managedObjectContext;
- (NSMutableOrderedSet *)albums;
- (char)isFolder;
- (PLPhotoLibrary *)photoLibrary;
- (unsigned int)albumsCount;
- (NSString *)_prettyDescription;
- (void)unregisterAllDerivedAlbums;
- (int)filter;
- (NSIndexSet *)filteredIndexes;
- (char)shouldIncludeObjectAtIndex:(unsigned int)arg0;
- (char)mappedDataSourceChanged:(id)arg0 remoteNotificationData:(NSDictionary *)arg1;
- (Class)derivedChangeNotificationClass;
- (<NSObject><NSCopying> *)cachedIndexMapState;
- (PLIndexMapper *)indexMapper;
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
- (void)enumerateDerivedAlbumLists:(id)arg0;
- (char)albumHasFixedOrder:(struct NSObject *)arg0;
- (void)setNeedsReordering;
- (char)needsReordering;
- (void)updateAlbumsOrderIfNeeded;
- (void)preheatAlbumsForProperties:(NSDictionary *)arg0 relationships:(NSArray *)arg1;
- (unsigned int)unreadAlbumsCount;
- (void)registerDerivedAlbumList:(struct NSObject *)arg0;
- (PLFilteredAlbumList *)initWithBackingAlbumList:(PLManagedAlbumList *)arg0 filter:(int)arg1;
- (void)setBackingAlbumList:(PLManagedAlbumList *)arg0;
- (PLManagedAlbumList *)backingAlbumList;
- (void)_backingContextDidChange:(NSDictionary *)arg0;
- (void)_invalidateFilteredIndexes;
- (NSMutableOrderedSet *)_albums;
- (void)set_albums:(NSMutableOrderedSet *)arg0;
- (unsigned int)countOfFilteredAlbums;
- (unsigned int)indexInFilteredAlbumsOfObject:(NSObject *)arg0;
- (NSObject *)objectInFilteredAlbumsAtIndex:(unsigned int)arg0;
- (NSIndexSet *)filteredAlbumsAtIndexes:(NSArray *)arg0;
- (void)getFilteredAlbums:(id *)arg0 range:(struct _NSRange)arg1;
- (void)insertObject:(NSObject *)arg0 inFilteredAlbumsAtIndex:(unsigned int)arg1;
- (void)removeObjectFromFilteredAlbumsAtIndex:(unsigned int)arg0;
- (void)insertFilteredAlbums:(id)arg0 atIndexes:(NSArray *)arg1;
- (void)removeFilteredAlbumsAtIndexes:(NSArray *)arg0;
- (void)replaceObjectInFilteredAlbumsAtIndex:(unsigned int)arg0 withObject:(NSObject *)arg1;
- (void)replaceFilteredAlbumsAtIndexes:(NSArray *)arg0 withFilteredValues:(char)arg1;

@end
