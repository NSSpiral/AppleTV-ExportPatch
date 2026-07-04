/* Runtime dump - PLBBPendingBulletinsBatch
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLBBPendingBulletinsBatch : NSObject
{
    NSObject<OS_dispatch_queue> * _isolationQueue;
    NSMutableArray * _pendingBulletins;
    NSObject<OS_dispatch_source> * _coalescingTimerSource;
    PLXPCTransaction * _coalescingTimerTransaction;
    NSObject<OS_dispatch_source> * _downloadTimerSource;
    PLXPCTransaction * _downloadTimerTransaction;
    int _currentState;
    char _downloadTimerExpired;
    <PLBBPendingBulletinsBatchDelegate> * _delegate;
}

@property <PLBBPendingBulletinsBatchDelegate> * delegate;
@property (readonly) char canAcceptNewBulletins;
@property (readonly) char canAcceptMergeBulletins;

- (void)dealloc;
- (void)setDelegate:(<PLBBPendingBulletinsBatchDelegate> *)arg0;
- (<PLBBPendingBulletinsBatchDelegate> *)delegate;
- (char)addBulletin:(BBBulletin *)arg0 forMergeOnly:(char)arg1;
- (void)noteAssetWithUUID:(id)arg0 didChangePlaceholderKindTo:(short)arg1 fromOldKind:(short)arg2;
- (char)canAcceptMergeBulletins;
- (void)removeBulletinsWithAlbumUUID:(NSString *)arg0 bulletinTypes:(NSArray *)arg1;
- (void)removeBulletinsWithAssetUUID:(NSString *)arg0 deleteCommentsOrLikesBulletin:(char)arg1 deletePhotosAddedToAlbumBulletin:(char)arg2;
- (char)canAcceptNewBulletins;
- (PLBBPendingBulletinsBatch *)initWithIsolationQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)_cancelCoalescingTimer;
- (void)_cancelDownloadTimer;
- (void)_startDownloadTimer;
- (void)_trackCompletionPercentageForState:(int)arg0;
- (void)_transitionToStateForEvent:(int)arg0;
- (void)_scheduleEvaluatePendingBulletins;
- (void)_evaluateAndProcessPendingBulletins;

@end
