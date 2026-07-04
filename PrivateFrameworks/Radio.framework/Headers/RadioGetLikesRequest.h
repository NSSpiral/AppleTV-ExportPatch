/* Runtime dump - RadioGetLikesRequest
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioGetLikesRequest : RadioRequest
{
    unsigned int _numberOfBannedTracks;
    unsigned int _numberOfLikedTracks;
    SSURLConnectionRequest * _request;
    RadioStation * _station;
    char _shouldProcessItems;
}

@property (nonatomic) unsigned int numberOfLikedTracks;
@property (nonatomic) unsigned int numberOfBannedTracks;
@property (nonatomic) char shouldProcessItems;

- (RadioGetLikesRequest *)initWithStation:(RadioStation *)arg0;
- (void)cancel;
- (RadioGetLikesRequest *)init;
- (void).cxx_destruct;
- (void)startWithLikeBanCompletionHandler:(id /* block */)arg0;
- (unsigned int)numberOfBannedTracks;
- (void)setNumberOfBannedTracks:(unsigned int)arg0;
- (unsigned int)numberOfLikedTracks;
- (void)setNumberOfLikedTracks:(unsigned int)arg0;
- (char)shouldProcessItems;
- (void)setShouldProcessItems:(char)arg0;

@end
