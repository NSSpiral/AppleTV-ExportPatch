/* Runtime dump - PLAggregateAlbumList
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLAggregateAlbumList : NSObject <PLAssetContainerListChangeObserver, PLAlbumContainer>
{
    NSMutableOrderedSet * _allAlbums;
    NSMutableOrderedSet * _childAlbumLists;
    int _filter;
}

@property (nonatomic) int filter;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) unsigned int containersCount;
@property (readonly, nonatomic) unsigned int albumsCount;
@property (readonly, nonatomic) char isFolder;
@property (readonly, copy, nonatomic) id albumsSortingComparator;
@property (readonly, nonatomic) unsigned int unreadAlbumsCount;
@property (readonly, retain, nonatomic) NSString * _prettyDescription;
@property (readonly, retain, nonatomic) NSString * _typeDescription;

+ (struct NSObject *)albumListWithFilter:(int)arg0 inPhotoLibrary:(NSObject *)arg1;

- (void)dealloc;
- (NSString *)identifier;
- (char)isEmpty;
- (void)setFilter:(int)arg0;
- (NSString *)managedObjectContext;
- (NSArray *)albums;
- (char)isFolder;
- (PLPhotoLibrary *)photoLibrary;
- (unsigned int)albumsCount;
- (NSString *)_prettyDescription;
- (int)filter;
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
- (void)assetContainerListDidChange:(NSDictionary *)arg0;
- (PLAggregateAlbumList *)initWithFilter:(int)arg0 inPhotoLibrary:(NSObject *)arg1;
- (void)_invalidateAllAlbums;

@end
