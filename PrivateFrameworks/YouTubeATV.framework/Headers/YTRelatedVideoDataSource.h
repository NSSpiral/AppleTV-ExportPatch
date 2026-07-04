/* Runtime dump - YTRelatedVideoDataSource
 * Image: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

@interface YTRelatedVideoDataSource : YTVideoDataSource
{
    YTVideo * _video;
}

- (void)dealloc;
- (void)reloadData;
- (void)setVideo:(YTVideo *)arg0;

@end
