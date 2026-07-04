/* Runtime dump - RadioLikeRequest
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioLikeRequest : RadioRequest
{
    long long _itemID;
    int _likeStatus;
    SSURLConnectionRequest * _request;
    int _seedType;
    RadioStation * _station;
    char _isSeed;
}

@property (nonatomic) int likeStatus;
@property (nonatomic) char isSeed;

- (RadioLikeRequest *)init;
- (void).cxx_destruct;
- (void)startWithCompletionHandler:(id /* block */)arg0;
- (char)isSeed;
- (void)setIsSeed:(char)arg0;
- (int)likeStatus;
- (void)startWithLikeCompletionHandler:(id /* block */)arg0;
- (RadioLikeRequest *)initWithTrack:(NSObject *)arg0 station:(RadioStation *)arg1;
- (RadioLikeRequest *)initWithTrackID:(NSObject *)arg0 station:(RadioStation *)arg1;
- (RadioLikeRequest *)initWithItemID:(long long)arg0 seedType:(int)arg1 station:(RadioStation *)arg2;
- (void)setLikeStatus:(int)arg0;

@end
