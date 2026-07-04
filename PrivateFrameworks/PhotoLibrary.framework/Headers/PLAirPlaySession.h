/* Runtime dump - PLAirPlaySession
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLAirPlaySession : NSObject
{
    <PLAirPlaySessionDataSource> * _dataSource;
    NSMutableArray * _streamedPhotoUuids;
    NSDictionary * _pickedRoute;
    MediaControlClient * _mediaControlClient;
    AirPlayRemoteSlideshow * _remoteSlideshow;
    char _streamingPhotos;
    char _streamingRemoteSlideshow;
    char _streamingLocalSlideShow;
    char _sentPhoto;
    char _supportsPhotoCaching;
}

@property (nonatomic) char streamingLocalSlideShow;
@property (nonatomic) <PLAirPlaySessionDataSource> * dataSource;

+ (char)canDisplayMedia:(NSObject *)arg0;
+ (void)endNetworkAssertion;
+ (void)beginNetworkAssertion;

- (void)dealloc;
- (void)setDataSource:(<PLAirPlaySessionDataSource> *)arg0;
- (<PLAirPlaySessionDataSource> *)dataSource;
- (NSObject *)pickedRouteID;
- (char)supportsRemoteSlideshow;
- (NSString *)pickedRouteName;
- (PLAirPlaySession *)initWithPickedRoute:(NSDictionary *)arg0 mediaControlClient:(MediaControlClient *)arg1 airplayRemoteSlideshow:(AirPlayRemoteSlideshow *)arg2;
- (void)invalidatePhotoCache;
- (void)streamPhoto:(UIImage *)arg0 withTransition:(NSObject *)arg1;
- (void)stopStreaming;
- (void)startRemoteSlideshowWithTheme:(id)arg0 remoteSlideshowDelegate:(NSObject *)arg1;
- (void)setStreamingLocalSlideShow:(char)arg0;
- (char)_shouldCachePhotos;
- (void)stopRemoteSlideshow;
- (void)_reallySendPhotoData:(NSData *)arg0 forPhotoWithUUID:(id)arg1 withTransition:(NSObject *)arg2 andAction:(NSObject *)arg3;
- (void)_streamPhoto:(UIImage *)arg0 withTransition:(NSObject *)arg1 andAction:(NSObject *)arg2;
- (NSObject *)_fixLegacyEvent:(NSObject *)arg0;
- (void)_streamPhotosAdjacentToPhoto:(UIImage *)arg0 withTransition:(NSObject *)arg1;
- (char)_streaming;
- (char)streamingLocalSlideShow;

@end
