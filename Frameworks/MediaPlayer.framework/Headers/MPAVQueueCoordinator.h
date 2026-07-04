/* Runtime dump - MPAVQueueCoordinator
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVQueueCoordinator : NSObject
{
    NSOperationQueue * _assetQueue;
    unsigned int _backgroundTaskIdentifier;
    unsigned int _backgroundTasks;
    char _holdingPlaybackTransactionForFirstItem;
    char _isPendingPlayerItemSync;
    char _isSyncingPlayerItems;
    NSHashTable * _itemsPendingAssetLoading;
    MPAVItem * _lastItemAnchor;
    NSDate * _lastPausedDate;
    char _needsCurrentItemUpdateAfterPlayerItemSync;
    char _preventLoadingItems;
    double _rateQueueDepthAdjustmentDelay;
    NSMutableSet * _reusableItems;
    MPQueuePlayer * _player;
    <MPAVQueueCoordinatorDataSource> * _dataSource;
    unsigned int _activeQueueDepth;
    unsigned int _maximumQueueDepth;
    MPAVItem * _currentItem;
    NSArray * _items;
    id _equilibriumAchievedHandler;
}

@property (readonly, nonatomic) MPQueuePlayer * player;
@property (readonly, weak, nonatomic) <MPAVQueueCoordinatorDataSource> * dataSource;
@property (readonly, nonatomic) unsigned int activeQueueDepth;
@property (nonatomic) unsigned int maximumQueueDepth;
@property (readonly, nonatomic) MPAVItem * currentItem;
@property (readonly, nonatomic) NSArray * items;
@property (copy, nonatomic) id equilibriumAchievedHandler;

- (void)reloadItemsKeepingCurrentItem:(char)arg0;
- (void)setMaximumQueueDepth:(unsigned int)arg0;
- (void)_updateQueueDepth;
- (void)_updateCurrentItem;
- (void)_updateQueueDepthWithPausedDuration:(double)arg0;
- (void)_syncItems;
- (NSArray *)_playerItems;
- (void)_beginBackgroundTaskAssertion;
- (void)_syncPlayerItems;
- (void)_dequeueFailedItem:(NSObject *)arg0;
- (void)_endBackgroundTaskAssertion;
- (char)_hasAchievedEquilibrium;
- (void)_loadAssetForItem:(NSObject *)arg0;
- (void)_removeAllItemsFromPlayer;
- (void)_removeItemFromPlayer:(id)arg0;
- (MPAVQueueCoordinator *)initWithPlayer:(MPQueuePlayer *)arg0 dataSource:(<MPAVQueueCoordinatorDataSource> *)arg1;
- (unsigned int)activeQueueDepth;
- (unsigned int)maximumQueueDepth;
- (id /* block */)equilibriumAchievedHandler;
- (void)setEquilibriumAchievedHandler:(id /* block */)arg0;
- (void)dealloc;
- (<MPAVQueueCoordinatorDataSource> *)dataSource;
- (NSArray *)items;
- (MPAVItem *)currentItem;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (void).cxx_destruct;
- (MPQueuePlayer *)player;

@end
