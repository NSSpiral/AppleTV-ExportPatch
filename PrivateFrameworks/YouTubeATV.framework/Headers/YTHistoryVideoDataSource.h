/* Runtime dump - YTHistoryVideoDataSource
 * Image: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

@interface YTHistoryVideoDataSource : YTVideoDataSource
{
    NSMutableArray * _history;
}

- (void)reloadData;
- (void)clearHistory;
- (void)_saveToDefaults;
- (void)loadFromDefaults;
- (unsigned int)maxVideosToSave;
- (void)addVideo:(YTVideo *)arg0;
- (NSMutableArray *)_history;

@end
