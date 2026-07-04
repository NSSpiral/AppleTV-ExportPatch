/* Runtime dump - RadioContentLookupRequest
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioContentLookupRequest : RadioRequest
{
    SSURLConnectionRequest * _request;
    NSArray * _trackStoreIDs;
}

- (void)cancel;
- (void).cxx_destruct;
- (void)startWithCompletionHandler:(id /* block */)arg0;
- (RadioContentLookupRequest *)initWithTrackStoreIDs:(NSArray *)arg0;

@end
