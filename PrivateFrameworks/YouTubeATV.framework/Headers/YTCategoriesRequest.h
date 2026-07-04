/* Runtime dump - YTCategoriesRequest
 * Image: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

@interface YTCategoriesRequest : YTXMLHTTPRequest
{
    id _delegate;
    NSMutableArray * _categories;
}

- (void)dealloc;
- (YTCategoriesRequest *)init;
- (void)clearDelegate;
- (void)loadRequest:(NSURLRequest *)arg0;
- (void)failWithError:(NSError *)arg0;
- (int)parseData:(NSData *)arg0;
- (void)didParseData;
- (void)didAuthenticate:(char)arg0;
- (NSURL *)_categoriesURL;
- (void)requestCategoriesWithDelegate:(NSObject *)arg0;

@end
