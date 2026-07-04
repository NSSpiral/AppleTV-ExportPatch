/* Runtime dump - PLSortedAlbumList
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLSortedAlbumList : NSObject <PLAlbumContainer, PLIndexMappingCache>
{
    struct NSObject * _backingAlbumList;
    struct __CFArray * _toBackingMap;
    struct __CFArray * _fromBackingMap;
    id _sortComparator;
    NSMutableOrderedSet * _weak_albums;
}

@property (retain, nonatomic) NSObject<PLAlbumContainer> * backingAlbumList;
@property (copy, nonatomic) id sortComparator;
@property (retain, nonatomic) NSMutableOrderedSet * _albums;
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
@property (readonly, copy, nonatomic) <NSObject><NSCopying> * cachedIndexMapState;

- (void)dealloc;
- (NSString *)identifier;
- (char)isEmpty;
- (NSString *)managedObjectContext;
- (NSArray *)albums;
- (char)isFolder;
- (PLPhotoLibrary *)photoLibrary;
- (unsigned int)albumsCount;
- (NSString *)_prettyDescription;
- (int)filter;
- (char)mappedDataSourceChanged:(id)arg0 remoteNotificationData:(NSDictionary *)arg1;
- (Class)derivedChangeNotificationClass;
- (<NSObject><NSCopying> *)cachedIndexMapState;
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
- (void)setBackingAlbumList:(struct NSObject *)arg0;
- (struct NSObject *)backingAlbumList;
- (NSMutableOrderedSet *)_albums;
- (void)set_albums:(NSMutableOrderedSet *)arg0;
- (void)setSortComparator:(id /* block */)arg0;
- (/* block */ id *)sortComparator;
- (PLSortedAlbumList *)initWithAlbumList:(struct NSObject *)arg0 sortComparator:(id /* block */)arg1;
- (void)createSortedIndexesMap;
- (unsigned int)countOfSortedAlbums;
- (unsigned int)indexInSortedAlbumsOfObject:(NSObject *)arg0;
- (NSObject *)objectInSortedAlbumsAtIndex:(unsigned int)arg0;
- (void)insertObject:(NSObject *)arg0 inSortedAlbumsAtIndex:(unsigned int)arg1;
- (void)removeObjectFromSortedAlbumsAtIndex:(unsigned int)arg0;
- (void)replaceObjectInSortedAlbumsAtIndex:(unsigned int)arg0 withObject:(NSObject *)arg1;

@end
