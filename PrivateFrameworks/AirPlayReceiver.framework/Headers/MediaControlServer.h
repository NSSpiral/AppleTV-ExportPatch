/* Runtime dump - MediaControlServer
 * Image: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
 */

@interface MediaControlServer : NSObject
{
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    AirPlayLocalSlideshow * _slideshow;
    double _lastActivity;
    struct AirPlayReceiverServerPrivate * _connectionsServer;
}

- (MediaControlServer *)init:(struct AirPlayReceiverServerPrivate *)arg0;
- (void)dealloc;
- (void)invalidate;
- (void)slideshowRequestAssetWithInfo:(NSDictionary *)arg0 sessionUUID:(char *)arg1 completion:(id /* block */)arg2;
- (long)_ensurePresentationStarted:(struct MediaControlServerConnectionPrivate *)arg0 type:(NSObject *)arg1;
- (void)_slideshowActivity:(id)arg0;
- (void)_slideshowWillStart:(id)arg0;
- (void)_slideshowWillStop:(id)arg0;
- (long)_stopSlideshow:(struct MediaControlServerConnectionPrivate *)arg0;
- (void)_ensurePresentationStopped:(struct MediaControlServerConnectionPrivate *)arg0 type:(NSObject *)arg1;
- (long)_showPhoto:(struct MediaControlServerConnectionPrivate *)arg0 options:(NSDictionary *)arg1 data:(/* block */ id)arg2 path:(NSString *)arg3;
- (long)_startSlideshow:(struct MediaControlServerConnectionPrivate *)arg0 options:(NSDictionary *)arg1;
- (long)_startVideo:(struct MediaControlServerConnectionPrivate *)arg0 params:(NSDictionary *)arg1;
- (void)_stopVideo:(struct MediaControlServerConnectionPrivate *)arg0;
- (void)postEvent:(NSObject *)arg0;
- (void)setDispatchQueue:(NSObject<OS_dispatch_queue> *)arg0;

@end
