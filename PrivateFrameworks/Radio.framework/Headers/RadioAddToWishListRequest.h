/* Runtime dump - RadioAddToWishListRequest
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioAddToWishListRequest : RadioRequest
{
    SSURLConnectionRequest * _request;
    NSString * _stationHash;
    long long _stationID;
    NSString * _stationStringID;
    RadioTrack * _track;
    int _action;
    long long _trackStoreID;
}

@property (nonatomic) int action;
@property (readonly, nonatomic) long long trackStoreID;

- (void)cancel;
- (RadioAddToWishListRequest *)init;
- (int)action;
- (void)setAction:(int)arg0;
- (void).cxx_destruct;
- (void)startWithCompletionHandler:(id /* block */)arg0;
- (RadioAddToWishListRequest *)initWithTrack:(RadioTrack *)arg0 station:(RadioStation *)arg1;
- (RadioAddToWishListRequest *)initWithTrackStoreID:(long long)arg0 stationID:(long long)arg1 stationHash:(NSString *)arg2 stationStringID:(NSString *)arg3;
- (RadioAddToWishListRequest *)initWithTrackStoreID:(long long)arg0 stationID:(long long)arg1 stationHash:(NSString *)arg2;
- (long long)trackStoreID;

@end
