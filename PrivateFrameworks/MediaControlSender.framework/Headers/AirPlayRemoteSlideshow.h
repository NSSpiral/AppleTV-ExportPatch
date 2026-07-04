/* Runtime dump - AirPlayRemoteSlideshow
 * Image: /System/Library/PrivateFrameworks/MediaControlSender.framework/MediaControlSender
 */

@interface AirPlayRemoteSlideshow : NSObject
{
    NSObject<OS_dispatch_queue> * _internalQueue;
    MediaControlClient * _client;
    <AirPlayRemoteSlideshowDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _userQueue;
    char _started;
    double _startTime;
}

@property (nonatomic) <AirPlayRemoteSlideshowDelegate> * delegate;

- (void)dealloc;
- (void)setDelegate:(<AirPlayRemoteSlideshowDelegate> *)arg0;
- (AirPlayRemoteSlideshow *)init;
- (<AirPlayRemoteSlideshowDelegate> *)delegate;
- (void)setHost:(NSString *)arg0;
- (void)setPassword:(NSString *)arg0;
- (void)setDispatchQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)_configureEventHandler;
- (void)getFeaturesWithOptions:(unsigned int)arg0 completion:(id /* block */)arg1;
- (void)getFeaturesWithCompletion:(id /* block */)arg0;
- (void)startWithOptions:(NSDictionary *)arg0 completion:(id /* block */)arg1;
- (void)stopWithOptions:(NSDictionary *)arg0 completion:(id /* block */)arg1;

@end
