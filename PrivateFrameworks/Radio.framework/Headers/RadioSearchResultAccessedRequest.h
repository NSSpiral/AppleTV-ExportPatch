/* Runtime dump - RadioSearchResultAccessedRequest
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioSearchResultAccessedRequest : RadioRequest
{
    SSURLConnectionRequest * _request;
    NSArray * _searchResults;
}

- (void)cancel;
- (RadioSearchResultAccessedRequest *)init;
- (void).cxx_destruct;
- (void)startWithCompletionHandler:(id /* block */)arg0;
- (RadioSearchResultAccessedRequest *)initWithAccessedSearchResults:(NSArray *)arg0;

@end
