/* Runtime dump - YTSubscriptionsRequest
 * Image: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

@interface YTSubscriptionsRequest : YTXMLHTTPRequest
{
    id _delegate;
    NSMutableArray * _subscriptions;
    int _mode;
    int _startIndex;
    int _totalResults;
    int _resultsPerPage;
}

+ (unsigned int)resultsPerRequest;
+ (NSObject *)displayStringForSubscription:(NSObject *)arg0;
+ (char)isSubscription:(NSObject *)arg0 channelOfUser:(id)arg1;
+ (NSObject *)URLForSubscription:(NSObject *)arg0;

- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (YTSubscriptionsRequest *)init;
- (void)failWithError:(NSError *)arg0;
- (int)parseData:(NSData *)arg0;
- (void)didParseData;
- (void)didAuthenticate:(char)arg0;
- (void)_doRequestWithURL:(NSURL *)arg0;
- (void)requestUserSubscriptionsFromIndex:(unsigned int)arg0 maxResults:(unsigned int)arg1;
- (void)requestUserPlaylistsFromIndex:(unsigned int)arg0 maxResults:(unsigned int)arg1;
- (void)requestPlaylistsFromIndex:(unsigned int)arg0 maxResults:(unsigned int)arg1 searchTerm:(NSString *)arg2;
- (void)createPlaylistNamed:(id)arg0;
- (void)subscribeToUser:(id)arg0;

@end
