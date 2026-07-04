/* Runtime dump - YTBookmarksVideoDataSource
 * Image: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

@interface YTBookmarksVideoDataSource : YTVideoDataSource
{
    NSMutableArray * _bookmarkedShortIDs;
    YTSearchRequest * _bookmarksSearchRequest;
    char _lastReloadWasAccountsFavorites;
}

- (void)dealloc;
- (void)reloadData;
- (YTBookmarksVideoDataSource *)init;
- (char)isLoading;
- (void)searchRequest:(YTSearchRequest *)arg0 foundBatchURL:(NSURL *)arg1;
- (void)searchRequest:(YTSearchRequest *)arg0 receivedVideos:(id)arg1 startIndex:(unsigned int)arg2 videosRemaining:(unsigned int)arg3;
- (unsigned int)maxVideosToSave;
- (void)_nextBatch;
- (void)addVideo:(YTVideo *)arg0;

@end
