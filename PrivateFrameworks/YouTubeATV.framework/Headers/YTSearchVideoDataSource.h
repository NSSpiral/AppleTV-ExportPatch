/* Runtime dump - YTSearchVideoDataSource
 * Image: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

@interface YTSearchVideoDataSource : YTVideoDataSource
{
    NSString * _searchString;
}

- (void)reloadData;
- (YTSearchVideoDataSource *)init;
- (NSString *)searchString;
- (void)setSearchString:(NSString *)arg0;

@end
