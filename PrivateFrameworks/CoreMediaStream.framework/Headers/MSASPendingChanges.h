/* Runtime dump - MSASPendingChanges
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSASPendingChanges : NSObject
{
    NSMutableSet * _pendingAlbumGUIDsWithKeyValueChanges;
    NSMutableSet * _pendingAlbumChanges;
    NSMutableSet * _pendingAlbumGUIDsWithSharingInfoChanges;
    NSMutableDictionary * _pendingAlbumGUIDToAssetCollections;
}

@property (retain, nonatomic) NSMutableSet * pendingAlbumGUIDsWithKeyValueChanges;
@property (retain, nonatomic) NSMutableSet * pendingAlbumChanges;
@property (retain, nonatomic) NSMutableSet * pendingAlbumGUIDsWithSharingInfoChanges;
@property (retain, nonatomic) NSMutableDictionary * pendingAlbumGUIDToAssetCollections;

- (void).cxx_destruct;
- (MSASPendingChanges *)initWithSyncedKeyValueChangesForAlbumGUIDS:(id)arg0 albumChanges:(id)arg1 accessControlChangesForAlbumGUIDS:(id)arg2;
- (void)removePendingKeyValueChangesForAlbumGUID:(NSString *)arg0;
- (void)addPendingChangesForAlbumGUID:(NSString *)arg0;
- (void)removePendingChangesForAlbumGUID:(NSString *)arg0;
- (void)addPendingAssetCollectionChanges:(id)arg0 forAlbumGUID:(NSString *)arg1;
- (void)removePendingAssetCollection:(id)arg0 forAlbumGUID:(NSString *)arg1;
- (void)removePendingSharingInfoChangesForAlbumGUID:(NSString *)arg0;
- (char)hasPendingChanges;
- (NSMutableSet *)pendingAlbumGUIDsWithKeyValueChanges;
- (void)setPendingAlbumGUIDsWithKeyValueChanges:(NSMutableSet *)arg0;
- (NSMutableSet *)pendingAlbumChanges;
- (void)setPendingAlbumChanges:(NSMutableSet *)arg0;
- (NSMutableSet *)pendingAlbumGUIDsWithSharingInfoChanges;
- (void)setPendingAlbumGUIDsWithSharingInfoChanges:(NSMutableSet *)arg0;
- (NSMutableDictionary *)pendingAlbumGUIDToAssetCollections;
- (void)setPendingAlbumGUIDToAssetCollections:(NSMutableDictionary *)arg0;

@end
