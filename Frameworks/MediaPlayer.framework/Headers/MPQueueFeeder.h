/* Runtime dump - MPQueueFeeder
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPQueueFeeder : NSObject <MPQueueBehaviorManaging, NSCoding>
{
    unsigned int _repeatType;
    unsigned int _shuffleType;
    NSMutableDictionary * _nextStartTimes;
    char _requiresQueueChangeVerification;
    <MPQueueFeederDelegate> * _delegate;
    unsigned int _state;
    unsigned int _activeShuffleType;
    struct ? _skipLimit;
}

@property (weak, nonatomic) <MPQueueFeederDelegate> * delegate;
@property (nonatomic) unsigned int state;
@property (nonatomic) char requiresQueueChangeVerification;
@property (readonly, nonatomic) unsigned int itemCount;
@property (readonly, nonatomic) Class itemClass;
@property (readonly, nonatomic) char canReorder;
@property (readonly, nonatomic) char playerPreparesItemsForPlaybackAsynchronously;
@property (nonatomic) struct ? skipLimit;
@property (readonly, nonatomic) char trackChangesCanEndPlayback;
@property (readonly, nonatomic) unsigned int realRepeatType;
@property (readonly, nonatomic) unsigned int realShuffleType;
@property (nonatomic) unsigned int repeatType;
@property (nonatomic) unsigned int shuffleType;
@property (nonatomic) unsigned int activeShuffleType;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) char allowsUserVisibleUpcomingItems;
@property (readonly, nonatomic) char canSeek;
@property (readonly, nonatomic) char canSkipToPreviousItem;
@property (readonly, nonatomic) int playbackMode;
@property (readonly, nonatomic) char userCanChangeShuffleAndRepeatType;

+ (char)supportsStateRestoration;

- (int)playbackMode;
- (unsigned int)indexOfItemWithIdentifier:(NSString *)arg0;
- (NSObject *)copyRawItemAtIndex:(unsigned int)arg0;
- (NSString *)playbackInfoForIdentifier:(NSString *)arg0;
- (NSObject *)pathAtIndex:(unsigned int)arg0;
- (NSObject *)identifierAtIndex:(unsigned int)arg0;
- (void)reloadWithPlaybackContext:(RadioPlaybackContext *)arg0 completionHandler:(id /* block */)arg1;
- (NSObject *)localizedAttributedPositionInPlaylistStringForItem:(NSObject *)arg0 withRegularTextAttributes:(NSDictionary *)arg1 emphasizedTextAttributes:(NSDictionary *)arg2;
- (NSString *)localizedPositionInPlaylistString:(NSString *)arg0;
- (unsigned int)repeatType;
- (unsigned int)shuffleType;
- (BRControl *)itemForIndex:(unsigned int)arg0;
- (char)hasValidItemAtIndex:(unsigned int)arg0;
- (NSString *)itemForIdentifier:(NSString *)arg0;
- (void)contentsDidChangeWithPreferredStartIndex:(unsigned int)arg0 error:(NSError *)arg1;
- (char)_canPurgeNextStartTimes;
- (char)canSkipItem:(NSObject *)arg0;
- (char)allowsUserVisibleUpcomingItems;
- (char)canSkipToPreviousItem;
- (char)userCanChangeShuffleAndRepeatType;
- (char)shouldReuseQueueFeederForPlaybackContext:(NSObject *)arg0;
- (void)setNextStartTime:(double)arg0 forIndentifier:(id)arg1;
- (void)shuffleItemsWithAnchor:(unsigned int *)arg0;
- (NSObject *)errorResolverForItem:(NSObject *)arg0;
- (char)shouldBeginPlaybackOfItem:(NSObject *)arg0 error:(id *)arg1;
- (char)canReorder;
- (unsigned int)itemTypeForIndex:(unsigned int)arg0;
- (char)playerPreparesItemsForPlaybackAsynchronously;
- (struct ?)skipLimit;
- (char)trackChangesCanEndPlayback;
- (unsigned int)realRepeatType;
- (unsigned int)realShuffleType;
- (NSObject *)audioSessionModeForItemAtIndex:(unsigned int)arg0;
- (char)hasItemForIndex:(unsigned int)arg0;
- (unsigned int)initialPlaybackQueueDepthForStartingIndex:(unsigned int)arg0;
- (NSString *)metadataItemForIdentifier:(NSString *)arg0;
- (unsigned int)indexOfMediaItem:(NSObject *)arg0;
- (NSObject *)mediaItemAtIndex:(unsigned int)arg0;
- (void)contentsDidChangeWithPreferredStartIndex:(unsigned int)arg0;
- (void)player:(ATVPlayer *)arg0 currentItemWillChangeFromItem:(NSObject *)arg1;
- (void)player:(ATVPlayer *)arg0 currentItemDidChangeToItem:(NSObject *)arg1;
- (char)player:(ATVPlayer *)arg0 shouldContinuePlaybackForNetworkType:(int)arg1 returningError:(id *)arg2;
- (char)requiresQueueChangeVerification;
- (void)setRequiresQueueChangeVerification:(char)arg0;
- (void)setSkipLimit:(struct ?)arg0;
- (void)setRepeatType:(unsigned int)arg0;
- (void)setShuffleType:(unsigned int)arg0;
- (unsigned int)activeShuffleType;
- (void)setActiveShuffleType:(unsigned int)arg0;
- (MPQueueFeeder *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setDelegate:(<MPQueueFeederDelegate> *)arg0;
- (<MPQueueFeederDelegate> *)delegate;
- (unsigned int)state;
- (void)setState:(unsigned int)arg0;
- (Class)itemClass;
- (NSArray *)preferredLanguages;
- (void).cxx_destruct;
- (unsigned int)itemCount;
- (char)canSeek;

@end
