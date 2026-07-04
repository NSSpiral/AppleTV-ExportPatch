/* Runtime dump - PLAggregateAlbumListChangeNotification
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLAggregateAlbumListChangeNotification : PLAssetContainerListChangeNotification
{
    PLAggregateAlbumList * _albumList;
    PLAssetContainerListChangeNotification * _note;
    unsigned int _indexOffet;
}

+ (NSArray *)notificationForAggregateAlbumList:(NSArray *)arg0 fromAlbumListChangeNotification:(NSNotification *)arg1 indexOffset:(unsigned int)arg2;

- (void)dealloc;
- (NSObject *)object;
- (struct NSObject *)albumList;
- (NSArray *)insertedObjects;
- (NSArray *)deletedObjects;
- (char)shouldReload;
- (NSIndexSet *)deletedIndexes;
- (NSIndexSet *)insertedIndexes;
- (void)enumerateMovesWithBlock:(id /* block */)arg0;
- (NSIndexSet *)changedIndexes;
- (char)_getOldSet:(id *)arg0 newSet:(id *)arg1;
- (NSIndexSet *)changedIndexesRelativeToSnapshot;
- (NSArray *)changedObjects;
- (unsigned int)snapshotIndexForContainedObject:(NSObject *)arg0;
- (PLAggregateAlbumListChangeNotification *)initWithAggregateAlbumList:(NSArray *)arg0 fromAlbumListChangeNotification:(NSNotification *)arg1 indexOffset:(unsigned int)arg2;

@end
