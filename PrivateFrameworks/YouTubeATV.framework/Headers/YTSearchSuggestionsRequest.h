/* Runtime dump - YTSearchSuggestionsRequest
 * Image: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

@interface YTSearchSuggestionsRequest : YTXMLHTTPRequest
{
    id _delegate;
    NSMutableArray * _suggestions;
    NSString * _query;
}

- (void)dealloc;
- (void)clearDelegate;
- (void)failWithError:(NSError *)arg0;
- (int)parseData:(NSData *)arg0;
- (void)didParseData;
- (void)didAuthenticate:(char)arg0;
- (NSObject *)_suggestionsURLForQuery:(NSObject *)arg0;
- (void)requestSuggestionsWithDelegate:(NSObject *)arg0 query:(NSString *)arg1;

@end
