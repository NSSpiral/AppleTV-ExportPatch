/* Runtime dump - PLInFlightAssetsAlbumChangeNotification
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLInFlightAssetsAlbumChangeNotification : PLAssetContainerChangeNotification
{
    PLInFlightAssetsAlbum * _album;
    PLAssetContainerChangeNotification * _backingNotification;
    NSOrderedSet * _oldOIDs;
    NSMutableSet * _uniquedOIDs;
    char _keyAssetDidChange;
}

@property (readonly, retain, nonatomic) PLInFlightAssetsAlbum * album;
@property (readonly, retain, nonatomic) PLAssetContainerChangeNotification * backingNotification;
@property (readonly, retain, nonatomic) NSOrderedSet * oldOIDs;

+ (NSObject *)notificationForDerivedObject:(NSObject *)arg0 priorChangeState:(NSObject *)arg1 forBackingObjectNotification:(NSNotification *)arg2;

- (void)dealloc;
- (NSString *)description;
- (NSObject *)object;
- (NSString *)_diffDescription;
- (char)_getOldSet:(id *)arg0 newSet:(id *)arg1;
- (NSArray *)_changedObjects;
- (PLInFlightAssetsAlbum *)album;
- (char)titleDidChange;
- (char)keyAssetDidChange;
- (PLInFlightAssetsAlbumChangeNotification *)initWithInFlightAssetsAlbum:(NSObject<PLAlbumProtocol> *)arg0 priorChangeState:(NSObject *)arg1 albumChangeNotification:(NSNotification *)arg2;
- (PLAssetContainerChangeNotification *)backingNotification;
- (NSOrderedSet *)oldOIDs;

@end
