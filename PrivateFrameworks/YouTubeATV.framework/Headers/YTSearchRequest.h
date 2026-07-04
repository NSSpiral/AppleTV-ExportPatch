/* Runtime dump - YTSearchRequest
 * Image: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

@interface YTSearchRequest : YTFeedRequest

+ (unsigned int)videosPerRequest;
+ (NSObject *)_formatFilter;
+ (YTSearchRequest *)feedCountryCode;

- (void)failWithError:(NSError *)arg0;
- (char)receivedValidResponse:(NSURLResponse *)arg0;
- (void)didParseData;
- (void)searchForVideosWithFeedURLBase:(NSString *)arg0 startingAtIndex:(unsigned int)arg1 maxResults:(unsigned int)arg2 withTimeQualifier:(NSString *)arg3 withFormatFilter:(char)arg4 authenticationRequired:(char)arg5 withDelegate:(NSObject *)arg6;
- (void)searchForVideoWithID:(int)arg0 withDelegate:(NSObject *)arg1;
- (void)searchForVideosWithIDs:(int)arg0 withDelegate:(NSObject *)arg1;
- (void)searchForVideosMatchingString:(NSString *)arg0 startingAtIndex:(unsigned int)arg1 maxResults:(unsigned int)arg2 withDelegate:(NSObject *)arg3;
- (void)searchForStandardFeedVideosOfType:(NSObject *)arg0 startIndex:(unsigned int)arg1 maxResults:(unsigned int)arg2 timeQualifier:(NSString *)arg3 withDelegate:(NSObject *)arg4;
- (void)searchForRecentVideosStartingAtIndex:(unsigned int)arg0 maxResults:(unsigned int)arg1 withDelegate:(NSObject *)arg2;
- (void)searchForVideosRelatedToVideo:(id)arg0 startingAtIndex:(unsigned int)arg1 maxResults:(unsigned int)arg2 withDelegate:(NSObject *)arg3;
- (void)searchForVideosByAuthor:(id)arg0 startingAtIndex:(unsigned int)arg1 maxResults:(unsigned int)arg2 withDelegate:(NSObject *)arg3;
- (void)searchForFavoriteVideosStartingAtIndex:(unsigned int)arg0 maxResults:(unsigned int)arg1 withDelegate:(NSObject *)arg2;
- (void)searchForMyVideosStartingAtIndex:(unsigned int)arg0 maxResults:(unsigned int)arg1 withDelegate:(NSObject *)arg2;
- (void)searchForVideosFromWatchLaterPlaylistStartingAtIndex:(unsigned int)arg0 maxResults:(unsigned int)arg1 withDelegate:(NSObject *)arg2;

@end
