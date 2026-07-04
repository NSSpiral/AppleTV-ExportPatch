/* Runtime dump - CAMCameraRoll
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMCameraRoll : NSObject
{
    char _changeNotificationsEnabled;
    char __weakAssetCollectionLoaded;
    char __hasPendingSessionAssets;
    char __hasLoadedCameraRollFrameworks;
    NSDate * _sessionIdentifier;
    PHFetchResult * __weakAssetCollectionFetchResult;
    PHAssetCollection * __weakAssetCollection;
    PHFetchResult * __userLibraryAssetsFetchResult;
    NSMutableSet * __cachedChangeObservers;
    NSMutableDictionary * __inflightAssets;
    NSMutableSet * __sessionAssetUUIDs;
}

@property (readonly, nonatomic) NSDate * sessionIdentifier;
@property (nonatomic) char changeNotificationsEnabled;
@property (readonly, nonatomic) char _weakAssetCollectionLoaded;
@property (readonly, nonatomic) PHFetchResult * _weakAssetCollectionFetchResult;
@property (readonly, nonatomic) PHAssetCollection * _weakAssetCollection;
@property (readonly, nonatomic) PHFetchResult * _userLibraryAssetsFetchResult;
@property (readonly, nonatomic) NSMutableSet * _cachedChangeObservers;
@property (readonly, nonatomic) NSMutableDictionary * _inflightAssets;
@property (readonly, nonatomic) NSMutableSet * _sessionAssetUUIDs;
@property (readonly, nonatomic) char _hasPendingSessionAssets;
@property (readonly, nonatomic) char _hasLoadedCameraRollFrameworks;

+ (CAMCameraRoll *)sharedCameraRoll;

- (void)dealloc;
- (CAMCameraRoll *)init;
- (NSDate *)sessionIdentifier;
- (void).cxx_destruct;
- (char)hasInflightAssets;
- (void)addChangeNotificationsObserver:(NSObject *)arg0;
- (void)setChangeNotificationsEnabled:(char)arg0;
- (void)removeChangeNotificationsObserver:(NSObject *)arg0;
- (char)updateFromChanges:(id)arg0;
- (void)startNewSessionWithIdentifier:(NSString *)arg0;
- (void)finishSession;
- (void)preflightCameraRollFrameworks;
- (id)realizedWeakAssetCollection;
- (id)fetchResultContainingAssetCollection;
- (NSMutableDictionary *)_inflightAssets;
- (void)removeInflightAsset:(NSSet *)arg0;
- (void)addSessionAsset:(NSSet *)arg0;
- (void)_unregisterAllObjectsForChangeNotifications;
- (char)_isWeakAssetCollectionLoaded;
- (void)_invalidateAssetCollection;
- (void)_ensureWeakAssetCollection;
- (void)_updateWeakAssetCollectionFromSessionChange;
- (void)_removeAllSessionAssets;
- (void)_updateWeakAlbumChangeNotificationsState;
- (char)isCameraSessionActive;
- (void)_ensureFetchedSessionAssets;
- (void)_registerChangeNotificationObserver:(NSObject *)arg0;
- (void)_unregisterChangeNotificationObserver:(NSObject *)arg0;
- (NSString *)_sessionLocalIdentifiers;
- (NSMutableSet *)_sessionAssetUUIDs;
- (void)_removeSessionAssets:(NSArray *)arg0;
- (void)_reloadSessionAssets;
- (void)_registerAllChangeNotificationObservers;
- (char)changeNotificationsEnabled;
- (PHFetchResult *)_weakAssetCollectionFetchResult;
- (PHAssetCollection *)_weakAssetCollection;
- (PHFetchResult *)_userLibraryAssetsFetchResult;
- (NSMutableSet *)_cachedChangeObservers;
- (char)_hasPendingSessionAssets;
- (char)_hasLoadedCameraRollFrameworks;
- (void)addInflightAsset:(NSSet *)arg0;
- (struct NSObject *)album;
- (void)startNewSession;

@end
