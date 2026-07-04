/* Runtime dump - YTVideoDataSource
 * Image: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

@interface YTVideoDataSource : NSObject
{
    char _hasLoaded;
    NSMutableArray * _videos;
    YTSearchRequest * _searchRequest;
    unsigned int _startIndex;
    unsigned int _videosRemaining;
    NSError * _lastError;
}

+ (YTVideoDataSource *)sharedDataSource;
+ (char)shouldRemoveOldDefaults;
+ (void)setShouldRemoveOldDefaults;
+ (void)saveDataSources;

- (void)loadMore;
- (char)hasLoaded;
- (void)dealloc;
- (void)reloadData;
- (YTVideoDataSource *)init;
- (char)isLoading;
- (NSError *)lastError;
- (void)_didChange;
- (NSMutableArray *)videos;
- (void)searchRequest:(YTSearchRequest *)arg0 receivedVideos:(id)arg1 startIndex:(unsigned int)arg2 videosRemaining:(unsigned int)arg3;
- (void)searchRequest:(YTSearchRequest *)arg0 didFailWithError:(NSError *)arg1;
- (void)_saveToDefaults;
- (void)_searchRequestLoadingStatusDidChange;
- (void)_setLastError:(NSError *)arg0;
- (void)loadFromDefaults;
- (NSString *)_deprecatedVideosDefaultsKey;
- (void)_setVideos:(id)arg0;
- (void)addVideos:(id)arg0 toTop:(char)arg1;
- (void)_clearVideos;
- (unsigned int)videosRemaining;
- (unsigned int)maxVideosToSave;
- (void)removeVideoAtIndex:(int)arg0;
- (void)removeAllVideos;

@end
