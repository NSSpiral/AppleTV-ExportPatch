/* Runtime dump - PLShuffledAlbumChangeNotification
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLShuffledAlbumChangeNotification : PLAssetContainerChangeNotification
{
    PLShuffledAlbum * _album;
    PLAssetContainerChangeNotification * _backingNotification;
    NSIndexSet * _changedIndexes;
    NSOrderedSet * _newSet;
}

+ (NSObject *)notificationForDerivedObject:(NSObject *)arg0 priorChangeState:(NSObject *)arg1 forBackingObjectNotification:(NSNotification *)arg2;

- (void)dealloc;
- (PLShuffledAlbumChangeNotification *)init;
- (NSString *)description;
- (NSObject *)object;
- (char)shouldReload;
- (NSIndexSet *)deletedIndexes;
- (NSIndexSet *)insertedIndexes;
- (NSIndexSet *)changedIndexes;
- (void)_calculateDiffs;
- (NSString *)_diffDescription;
- (char)_getOldSet:(id *)arg0 newSet:(id *)arg1;
- (NSArray *)_changedObjects;
- (PLShuffledAlbum *)album;
- (char)titleDidChange;
- (char)keyAssetDidChange;
- (char)countDidChange;
- (PLShuffledAlbumChangeNotification *)initWithShuffledAlbum:(char)arg0 albumChangeNotification:(NSNotification *)arg1;

@end
