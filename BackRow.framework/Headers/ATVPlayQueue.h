/* Runtime dump - ATVPlayQueue
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVPlayQueue : NSObject

+ (ATVPlayQueue *)upNext:(unsigned int *)arg0;
+ (MIPPlaylist *)_playlist;
+ (void)_pruneHistory;
+ (NSArray *)queuedItems;
+ (NSArray *)previouslyPlayedItems;
+ (unsigned int)_adjustQueueIndex:(unsigned int)arg0 forPlaylist:(ATVPlaylist *)arg1;
+ (void)promoteAssetAtIndex:(unsigned int)arg0;
+ (void)demoteAssetAtIndex:(unsigned int)arg0;
+ (void)enqueueItems:(NSArray *)arg0 action:(int)arg1 askUser:(char)arg2;
+ (NSArray *)_mediaAssetsFromArray:(NSArray *)arg0;
+ (char)isQueueValidForDataClient:(NSObject *)arg0;
+ (void)_playAssets:(NSArray *)arg0;
+ (char)isQueueingEnabled;
+ (void)enqueueItems:(NSArray *)arg0 action:(int)arg1;
+ (void)moveObjectAtIndex:(unsigned int)arg0 toIndex:(unsigned int)arg1;
+ (void)clearBackToItems;
+ (NSObject *)queueAssetAtIndex:(int)arg0;
+ (void)_refreshLookaheadItem;
+ (char)shouldGeniusPlaybackReplaceQueue;
+ (char)shouldPlaybackSwitchToAnotherSource;
+ (void)setUpNextLength:(unsigned int)arg0;
+ (unsigned int)upNextLength;
+ (void)setHistoryLength:(unsigned int)arg0;
+ (unsigned int)historyLength;
+ (void)enqueueItemsInCollection:(id)arg0 action:(int)arg1;
+ (void)enqueueItem:(NSObject *)arg0 action:(int)arg1;
+ (void)removeQueuedAssetAtIndex:(unsigned int)arg0;
+ (void)playExistingQueueAssetAtIndex:(unsigned int)arg0;
+ (ATVPlayQueue *)playingNext;
+ (ATVPlayQueue *)nowPlaying;
+ (NSString *)playlistName;
+ (void)adjustPlayerForQueueAction:(int)arg0;
+ (NSString *)description;
+ (void)clearHistory;
+ (void)purge;

@end
