/* Runtime dump - MPMediaQueryQueueFeeder
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaQueryQueueFeeder : MPQueueFeeder <MPAVRoutingControllerDelegate, MPShuffleControllerDataSource>
{
    MPMediaLibraryConnectionAssertion * _connectionAssertion;
    unsigned long long _feederRevisionID;
    char _hasValidItems;
    MPMediaQuery * _query;
    NSArray * _queryItems;
    MPShuffleController * _shuffleController;
    struct vector<long long, std::__1::allocator<long long> > _itemPIDs;
    MPMutableBidirectionalDictionary * _indexToIdentifierCache;
    unsigned int _currentInvalidationRevision;
    char _isPlaylistQueueFeeder;
    MPMediaItem * _cloudDialogAllowedMediaItem;
}

@property (copy, nonatomic) MPMediaQuery * query;
@property (retain, nonatomic) MPMediaItem * cloudDialogAllowedMediaItem;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)audioSessionModeForMediaType:(unsigned int)arg0;

- (unsigned int)indexOfItemWithIdentifier:(NSString *)arg0;
- (NSObject *)copyRawItemAtIndex:(unsigned int)arg0;
- (NSString *)playbackInfoForIdentifier:(NSString *)arg0;
- (NSObject *)pathAtIndex:(unsigned int)arg0;
- (NSObject *)identifierAtIndex:(unsigned int)arg0;
- (void)reloadWithPlaybackContext:(RadioPlaybackContext *)arg0 completionHandler:(id /* block */)arg1;
- (char)hasValidItemAtIndex:(unsigned int)arg0;
- (NSString *)itemForIdentifier:(NSString *)arg0;
- (char)shouldReuseQueueFeederForPlaybackContext:(NSObject *)arg0;
- (void)shuffleItemsWithAnchor:(unsigned int *)arg0;
- (unsigned int)itemTypeForIndex:(unsigned int)arg0;
- (NSObject *)audioSessionModeForItemAtIndex:(unsigned int)arg0;
- (unsigned int)initialPlaybackQueueDepthForStartingIndex:(unsigned int)arg0;
- (unsigned int)indexOfMediaItem:(NSObject *)arg0;
- (NSObject *)mediaItemAtIndex:(unsigned int)arg0;
- (void)player:(ATVPlayer *)arg0 currentItemWillChangeFromItem:(NSObject *)arg1;
- (NSObject *)shuffleController:(MPShuffleController *)arg0 identifierForItemAtIndex:(unsigned int)arg1;
- (unsigned int)shuffleController:(MPShuffleController *)arg0 countOfItemIdentifier:(NSString *)arg1 withMaximumCount:(unsigned int)arg2;
- (unsigned int)itemCountForShuffleController:(BRController *)arg0;
- (void)_libraryDidChangeNotification:(NSNotification *)arg0;
- (id)_mediaItemForPID:(unsigned long long)arg0;
- (void)setCloudDialogAllowedMediaItem:(MPMediaItem *)arg0;
- (unsigned int)_playbackIndexByApplyShuffleType:(unsigned int)arg0 withStartIndex:(unsigned int)arg1 startIndexMediaItem:(NSObject *)arg2 shouldKeepConsistentQueueOrder:(char)arg3;
- (unsigned int)_indexForSongShuffledIndex:(unsigned int)arg0;
- (NSObject *)_identifierAtIndex:(unsigned int)arg0;
- (void)_invalidateMediaLibraryValues;
- (unsigned int)_indexForPersistentID:(unsigned long long)arg0;
- (void)_handleMediaLibraryDidChange;
- (void)_verifyQueueInvalidationCompletionHandler:(id /* block */)arg0;
- (unsigned int)unshuffledIndexOfAVItem:(NSObject *)arg0;
- (MPMediaItem *)cloudDialogAllowedMediaItem;
- (void)dealloc;
- (MPMediaQueryQueueFeeder *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (MPMediaQueryQueueFeeder *)init;
- (MPMediaQuery *)query;
- (void)_commonInit;
- (Class)itemClass;
- (void)setQuery:(MPMediaQuery *)arg0;
- (void).cxx_construct;
- (void).cxx_destruct;
- (unsigned int)itemCount;

@end
