/* Runtime dump - MPUbiquitousPlaybackPositionController
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPUbiquitousPlaybackPositionController : NSObject
{
    char _databaseHasBookmarkableContents;
    char _isServiceActive;
    char _externallyActive;
    char _beganUsingPlaybackPositionMetadata;
    char _applicationBecomingActive;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_queue> * _serviceQueue;
    SBCPlaybackPositionSyncService * _uppServiceProxy;
    SBCPlaybackPositionDomain * _uppDomain;
}

@property (nonatomic) char externallyActive;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> * queue;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> * serviceQueue;
@property (retain, nonatomic) SBCPlaybackPositionSyncService * uppServiceProxy;
@property (retain, nonatomic) SBCPlaybackPositionDomain * uppDomain;
@property (nonatomic) char serviceActive;
@property (nonatomic) char beganUsingPlaybackPositionMetadata;
@property (nonatomic) char databaseHasBookmarkableContents;
@property (readonly, nonatomic) char applicationBecomingActive;

+ (MPUbiquitousPlaybackPositionController *)sharedUbiquitousPlaybackPositionController;

- (void)_applicationDidEnterBackgroundNotification:(NSNotification *)arg0;
- (void)_applicationWillEnterForegroundNotification:(NSNotification *)arg0;
- (void)_mediaLibraryDidChangeNotification:(NSNotification *)arg0;
- (void)noteChangedPlaybackPositionMetadataForTrackPersistentID:(long long)arg0 isCheckpoint:(char)arg1;
- (void)_defaultMediaLibraryDidChangeNotification:(NSNotification *)arg0;
- (void)_applicationDidEnterForegroundNotification:(NSNotification *)arg0;
- (void)_onServiceQueue_updateBoomkarkabilityState;
- (NSObject *)_onServiceQueue_connectedUPPServiceProxy;
- (void)_onServiceQueue_resignActiveService;
- (void)_onServiceQueue_updateActiveServiceIfNeeded;
- (char)_onQueue_shouldBeActive;
- (void)_onServiceQueue_becomeActiveService;
- (char)_onQueue_isEnabled;
- (NSObject *)_playbackPositionEntityWithValuesFromMusicLibraryTrackPersistentID:(long long)arg0;
- (void)_onServiceQueue_setDatabaseHasBookmarkableContents:(char)arg0;
- (SBCPlaybackPositionSyncService *)uppServiceProxy;
- (void)setDatabaseHasBookmarkableContents:(char)arg0;
- (void)beginUsingPlaybackPositionMetadata;
- (void)setExternallyActive:(char)arg0;
- (char)externallyActive;
- (char)databaseHasBookmarkableContents;
- (char)isServiceActive;
- (char)isServiceActive;
- (void)setServiceActive:(char)arg0;
- (NSObject<OS_dispatch_queue> *)serviceQueue;
- (void)setUppServiceProxy:(SBCPlaybackPositionSyncService *)arg0;
- (SBCPlaybackPositionDomain *)uppDomain;
- (void)setUppDomain:(SBCPlaybackPositionDomain *)arg0;
- (void)setBeganUsingPlaybackPositionMetadata:(char)arg0;
- (char)applicationBecomingActive;
- (void)dealloc;
- (MPUbiquitousPlaybackPositionController *)init;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)queue;

@end
