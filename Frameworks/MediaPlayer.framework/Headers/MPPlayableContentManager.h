/* Runtime dump - MPPlayableContentManager
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPPlayableContentManager : NSObject
{
    NSMutableSet * _mutatedContentItems;
    NSMutableSet * _contentItemIdentifiersSentToMediaRemote;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSOperationQueue * _artworkUpdateQueue;
    char _coalescingUpdates;
    AVExternalDevice * _externalDevice;
    <MPPlayableContentDataSource> * _dataSource;
    <MPPlayableContentDelegate> * _delegate;
    MPPlayableContentManagerContext * _context;
}

@property (weak, nonatomic) <MPPlayableContentDataSource> * dataSource;
@property (weak, nonatomic) <MPPlayableContentDelegate> * delegate;
@property (retain, nonatomic) MPPlayableContentManagerContext * context;

+ (MPPlayableContentManager *)sharedContentManager;

- (void)_tearDownNotifications;
- (void)_setupMediaRemoteEndpoint;
- (void)_tearDownMediaRemoteEndpoint;
- (void)_pushContentItemsUpdate;
- (char)_onQueueContentItemWasSentToMediaRemote:(id)arg0;
- (void)_contentItemChangedNotification:(NSNotification *)arg0;
- (char)_areContentLimitsEnabled;
- (void)_limitedUIChanged:(NSNotification *)arg0;
- (void)_enqueueArtworkUpdate:(NSDate *)arg0 forContentItem:(NSObject *)arg1 withCompletion:(id /* block */)arg2;
- (void)_handleBeginLoadingCompletedAtIndexPath:(NSIndexPath *)arg0 withError:(NSError *)arg1;
- (void)_handlePlaybackInitializationCompletedWithContext:(MPPlayableContentManagerContext *)arg0 error:(NSError *)arg1;
- (char)_contentItemWasSentToMediaRemote:(id)arg0;
- (void)_markContentItemsAsSentToMediaRemote:(id)arg0;
- (void)_browsableContentEndpointChanged:(NSNotification *)arg0;
- (void)dealloc;
- (void)setDataSource:(<MPPlayableContentDataSource> *)arg0;
- (void)setDelegate:(<MPPlayableContentDelegate> *)arg0;
- (void)reloadData;
- (MPPlayableContentManager *)init;
- (<MPPlayableContentDataSource> *)dataSource;
- (<MPPlayableContentDelegate> *)delegate;
- (MPPlayableContentManager *)_init;
- (MPPlayableContentManagerContext *)context;
- (void)setContext:(MPPlayableContentManagerContext *)arg0;
- (void)beginUpdates;
- (void)endUpdates;
- (void).cxx_destruct;
- (void)_setupNotifications;

@end
