/* Runtime dump - YTAccountFeedRequest
 * Image: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

@interface YTAccountFeedRequest : YTFeedRequest

- (void)failWithError:(NSError *)arg0;
- (void)didParseData;
- (void)addVideosToFavorites:(id)arg0 withBatchURL:(NSURL *)arg1;
- (void)addVideo:(YTVideo *)arg0 toPlaylist:(ATVPlaylist *)arg1;

@end
