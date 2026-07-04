/* Runtime dump - RadioGetWishListRequest
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioGetWishListRequest : RadioRequest
{
    SSURLConnectionRequest * _request;
    unsigned int _maxNumberOfTracks;
}

@property (nonatomic) unsigned int maxNumberOfTracks;

- (void)cancel;
- (RadioGetWishListRequest *)init;
- (void).cxx_destruct;
- (void)startWithCompletionHandler:(id /* block */)arg0;
- (unsigned int)maxNumberOfTracks;
- (void)setMaxNumberOfTracks:(unsigned int)arg0;

@end
