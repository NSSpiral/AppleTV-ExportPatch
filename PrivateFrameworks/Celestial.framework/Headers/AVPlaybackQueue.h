/* Runtime dump - AVPlaybackQueue
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface AVPlaybackQueue : NSObject
{
    id _delegate;
    AVQueue * _avItemQueue;
    NSMutableArray * _pbItemQueue;
    struct OpaqueFigPlayer * _figPlayer;
    int _ignoreAVQueueModifications;
    char _hasBuiltPlaybackQueue;
    char _waitingToAddFirstItem;
    int _avQueueTransactionCount;
    int _repeatMode;
}

- (void)setRepeatMode:(int)arg0;
- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (void)beginAVQueueTransaction;
- (void)endAVQueueTransaction;
- (AVPlaybackQueue *)initWithDelegate:(NSObject *)arg0 figPlayer:(struct OpaqueFigPlayer *)arg1;
- (void)setAVItemQueue:(NSObject *)arg0;
- (void)ensurePlaybackQueue;
- (void)ensurePlaybackQueueImmed;
- (NSObject *)currentPlaybackItem;
- (void)playbackItemWasRemovedFromPlayQueue:(NSObject *)arg0;
- (void)updateBookmarkTimesIncludeFirst:(char)arg0 updateFirst:(char)arg1;
- (void)playbackItemInspectionComplete:(id)arg0;
- (void)checkQueueConsistency;
- (void)scheduleRemoveItemsNoLongerInPlayQueue;
- (void)clearPBItemQueueFromIndex:(int)arg0;
- (void)queueItemWasAddedNotification:(NSNotification *)arg0;
- (void)queueItemWillBeRemovedNotification:(NSNotification *)arg0;
- (void)fillInPBItemQueue;
- (void)removeItemsNoLongerInPlayQueue;

@end
