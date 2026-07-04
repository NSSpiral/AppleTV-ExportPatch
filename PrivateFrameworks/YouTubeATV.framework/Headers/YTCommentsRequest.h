/* Runtime dump - YTCommentsRequest
 * Image: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

@interface YTCommentsRequest : YTXMLHTTPRequest
{
    id _delegate;
    NSMutableArray * _comments;
    unsigned int _startIndex;
    unsigned int _totalResults;
    NSMutableString * _moreCommentsURLString;
    YTVideo * _video;
}

+ (unsigned int)commentsPerRequest;

- (void)dealloc;
- (void)failWithError:(NSError *)arg0;
- (int)parseData:(NSData *)arg0;
- (void)didParseData;
- (void)_requestCommentsFromURL:(NSURL *)arg0;
- (void)didAuthenticate:(char)arg0;
- (void)requestMoreComments;
- (YTCommentsRequest *)initRequestingCommentsForVideo:(id)arg0 withDelegate:(NSObject *)arg1;

@end
