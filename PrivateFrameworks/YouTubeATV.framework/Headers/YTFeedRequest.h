/* Runtime dump - YTFeedRequest
 * Image: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

@interface YTFeedRequest : YTXMLHTTPRequest
{
    id _delegate;
    NSMutableArray * _videos;
    NSURL * _batchURL;
    unsigned int _startIndex;
    unsigned int _videosPerPage;
    unsigned int _totalResults;
    char _invalidatedToken;
}

+ (int)partialFeedType;

- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (YTFeedRequest *)init;
- (void)failWithError:(NSError *)arg0;
- (int)parseData:(NSData *)arg0;
- (void)didParseData;
- (void)loadRequest:(NSURLRequest *)arg0 withDelegate:(NSObject *)arg1 accountAuthRequired:(char)arg2;

@end
