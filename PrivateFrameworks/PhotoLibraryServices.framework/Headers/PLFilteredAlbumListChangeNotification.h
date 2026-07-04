/* Runtime dump - PLFilteredAlbumListChangeNotification
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLFilteredAlbumListChangeNotification : PLAssetContainerListChangeNotification <PLIndexMapperDataSource>
{
    PLFilteredAlbumList * _albumList;
    NSIndexSet * _oldFilteredIndexes;
    NSIndexSet * _filteredIndexes;
    PLIndexMapper * _indexMapper;
    PLAssetContainerListChangeNotification * _backingNotification;
}

@property (readonly, retain, nonatomic) NSIndexSet * updatedFilteredIndexes;
@property (copy, nonatomic) NSIndexSet * filteredIndexes;
@property (readonly, retain, nonatomic) PLIndexMapper * indexMapper;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)notificationForDerivedObject:(NSObject *)arg0 priorChangeState:(NSObject *)arg1 forBackingObjectNotification:(NSNotification *)arg2;

- (void)dealloc;
- (PLFilteredAlbumListChangeNotification *)init;
- (NSString *)description;
- (NSObject *)object;
- (NSIndexSet *)filteredIndexes;
- (char)shouldIncludeObjectAtIndex:(unsigned int)arg0;
- (PLIndexMapper *)indexMapper;
- (PLFilteredAlbumList *)albumList;
- (char)shouldReload;
- (NSString *)_diffDescription;
- (char)_getOldSet:(id *)arg0 newSet:(id *)arg1;
- (NSArray *)_changedObjects;
- (NSIndexSet *)updatedFilteredIndexes;
- (char)countDidChange;
- (void)setFilteredIndexes:(NSIndexSet *)arg0;
- (PLFilteredAlbumListChangeNotification *)initWithFilteredAlbumList:(NSArray *)arg0 albumListChangeNotification:(NSNotification *)arg1;

@end
