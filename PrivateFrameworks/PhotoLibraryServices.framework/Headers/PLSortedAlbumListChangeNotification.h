/* Runtime dump - PLSortedAlbumListChangeNotification
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLSortedAlbumListChangeNotification : PLAssetContainerListChangeNotification
{
    PLSortedAlbumList * _albumList;
    PLAssetContainerListChangeNotification * _backingNotification;
}

+ (NSObject *)notificationForDerivedObject:(NSObject *)arg0 priorChangeState:(NSObject *)arg1 forBackingObjectNotification:(NSNotification *)arg2;

- (void)dealloc;
- (PLSortedAlbumListChangeNotification *)init;
- (NSString *)description;
- (NSObject *)object;
- (PLSortedAlbumList *)albumList;
- (char)shouldReload;
- (char)_getOldSet:(id *)arg0 newSet:(id *)arg1;
- (NSArray *)_changedObjects;
- (char)countDidChange;
- (PLSortedAlbumListChangeNotification *)initWithSortedAlbumList:(NSArray *)arg0 albumListChangeNotification:(NSNotification *)arg1;

@end
