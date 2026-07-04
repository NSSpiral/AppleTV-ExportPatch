/* Runtime dump - LTAVPlaylist
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface LTAVPlaylist : NSObject
{
    NSArray * _mediaList;
    int _sequentialIndex;
    unsigned int _queueLength;
    char _shuffleEnabled;
    char _skipExplicit;
    char _isPlaylistDynamic;
    int _repeatMode;
    ATVDataClient * _dataClient;
    NSString * _playlistName;
    NSArray * _sourceTracks;
    id _changeMediaToken;
}

@property (retain, nonatomic) id changeMediaToken;

- (long)mediaIndex;
- (void)removeMedia:(NSObject *)arg0;
- (void)appendMediaList:(NSArray *)arg0;
- (void)purgeTrackList;
- (void)insertMedia:(NSObject *)arg0 atIndex:(long)arg1;
- (NSObject *)nextMedia;
- (void)setIsPlaylistDynamic:(char)arg0;
- (id)upNext:(unsigned int *)arg0;
- (char)isValidForDataClient:(NSObject *)arg0;
- (char)isQueueEnabled;
- (NSArray *)queuedItems;
- (NSArray *)previouslyPlayedItems;
- (void)promoteAssetAtIndex:(unsigned int)arg0;
- (void)demoteAssetAtIndex:(unsigned int)arg0;
- (void)enqueueItems:(NSArray *)arg0 action:(int)arg1;
- (void)setQueueLength:(unsigned int)arg0;
- (void)moveObjectAtIndex:(unsigned int)arg0 toIndex:(unsigned int)arg1;
- (void)clearBackToItems;
- (void)removeAssetAtIndex:(unsigned int)arg0;
- (void)playExistingAssetAtIndex:(unsigned int)arg0;
- (unsigned int)queueLength;
- (NSObject *)currentMedia;
- (NSObject *)queueAssetAtIndex:(int)arg0;
- (void)pruneHistory;
- (void)swapObjectAtIndex:(unsigned int)arg0 withObjectAtIndex:(unsigned int)arg1;
- (void)removeAssetAtIndex:(unsigned int)arg0 suppressNotification:(char)arg1;
- (char)isPlaylistDynamic;
- (char)supportsShufflePlayback;
- (void)appendMediaToSlidingWindow:(NSObject *)arg0;
- (NSArray *)mediaList;
- (LTAVPlaylist *)initWithIndex:(long)arg0 inMediaList:(NSArray *)arg1;
- (void)changeMedia:(int)arg0 withCompletionHandler:(id /* block */)arg1;
- (void)setShuffleEnabled:(char)arg0 preservingNowPlaying:(char)arg1;
- (NSObject *)_mediaForSequentialIndex:(long)arg0;
- (long)_nextSequentialIndexInDirection:(int)arg0;
- (NSString *)changeMediaToken;
- (void)setChangeMediaToken:(NSString *)arg0;
- (long)_sequentialIndex;
- (LTAVPlaylist *)initWithIndex:(long)arg0 inMediaList:(NSArray *)arg1 playlistName:(NSString *)arg2;
- (char)isQueueEstablishedForDataClient:(NSObject *)arg0;
- (int)repeatMode;
- (void)setRepeatMode:(int)arg0;
- (void)dealloc;
- (long)count;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)name;
- (void)clearHistory;
- (void)purge;
- (void).cxx_destruct;
- (char)moreItemsAvailable:(int)arg0;
- (NSObject *)changeMedia:(int)arg0;
- (void)setShuffleEnabled:(char)arg0;
- (char)shuffleEnabled;
- (char)skipExplicit;
- (void)setSkipExplicit:(char)arg0;

@end
