/* Runtime dump - RadioRemoveAllFromWishListRequest
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioRemoveAllFromWishListRequest : RadioRequest
{
    SSURLConnectionRequest * _request;
    NSArray * _trackStoreIDs;
}

- (RadioRemoveAllFromWishListRequest *)init;
- (void).cxx_destruct;
- (void)startWithCompletionHandler:(id /* block */)arg0;
- (RadioRemoveAllFromWishListRequest *)initWithTrackStoreIDs:(NSArray *)arg0;
- (RadioRemoveAllFromWishListRequest *)initWithTracks:(NSArray *)arg0;

@end
