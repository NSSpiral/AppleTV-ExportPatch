/* Runtime dump - MediaControlClient
 * Image: /System/Library/PrivateFrameworks/MediaControlSender.framework/MediaControlSender
 */

@interface MediaControlClient : NSObject
{
    NSObject<OS_dispatch_queue> * _queue;
    struct MediaControlClientImp * _client;
    NSObject<OS_dispatch_queue> * _eventHandlerQueue;
    id _eventHandlerBlock;
}

- (struct MediaControlClientImp *)internalClient;
- (void)setEventHandlerQueue:(NSObject<OS_dispatch_queue> *)arg0 eventHandlerBlock:(id /* block */)arg1;
- (void)ensureDisconnected;
- (void)removeItem:(void *)arg0 completionQueue:(NSObject<OS_dispatch_queue> *)arg1 completionBlock:(id /* block */)arg2;
- (void)checkAuthentication;
- (void)ensureConnected;
- (void)setProperty:(NSString *)arg0 qualifier:(TSDGLShaderQualifier *)arg1 value:(NSObject *)arg2 completionQueue:(NSObject<OS_dispatch_queue> *)arg3 completionBlock:(id /* block */)arg4;
- (void)setRate:(float)arg0 completionQueue:(NSObject<OS_dispatch_queue> *)arg1 completionBlock:(id /* block */)arg2;
- (void)stopWithOptions:(unsigned int)arg0 completionQueue:(NSObject<OS_dispatch_queue> *)arg1 completionBlock:(id /* block */)arg2;
- (void)getProperty:(NSObject *)arg0 qualifier:(TSDGLShaderQualifier *)arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2 completionBlock:(id /* block */)arg3;
- (void)setPosition:(float)arg0 options:(NSDictionary *)arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2 completionBlock:(id /* block */)arg3;
- (void)insertItem:(NSObject *)arg0 afterItem:(NSObject *)arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2 completionBlock:(id /* block */)arg3;
- (void)playWithParams:(NSDictionary *)arg0 completionQueue:(NSObject<OS_dispatch_queue> *)arg1 completionBlock:(id /* block */)arg2;
- (void)getPlaybackInfoWithOptions:(unsigned int)arg0 completionQueue:(NSObject<OS_dispatch_queue> *)arg1 completionBlock:(id /* block */)arg2;
- (void)performRemoteAction:(NSObject *)arg0 withParams:(NSDictionary *)arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2 completionBlock:(id /* block */)arg3;
- (void)authorizeWithPICRequest:(NSURLRequest *)arg0 options:(NSDictionary *)arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2 completionBlock:(id /* block */)arg3;
- (void)authorizeWithPICRequest:(NSURLRequest *)arg0 completionQueue:(NSObject<OS_dispatch_queue> *)arg1 completionBlock:(id /* block */)arg2;
- (void)dealloc;
- (MediaControlClient *)init;
- (void)invalidate;
- (void)setHost:(NSString *)arg0;
- (void)setPassword:(NSString *)arg0;
- (void)getSlideshowFeaturesWithOptions:(unsigned int)arg0 completionQueue:(NSObject<OS_dispatch_queue> *)arg1 completionBlock:(id /* block */)arg2;
- (void)setSlideshowInfo:(NSDictionary *)arg0 completionQueue:(NSObject<OS_dispatch_queue> *)arg1 completionBlock:(id /* block */)arg2;
- (void)startPresentation:(id)arg0 completionQueue:(NSObject<OS_dispatch_queue> *)arg1 completionBlock:(id /* block */)arg2;
- (void)sendPhotoData:(NSData *)arg0 completionQueue:(NSObject<OS_dispatch_queue> *)arg1 completionBlock:(id /* block */)arg2;
- (void)getSlideshowInfoWithOptions:(unsigned int)arg0 completionQueue:(NSObject<OS_dispatch_queue> *)arg1 completionBlock:(id /* block */)arg2;
- (void)getPositionWithOptions:(unsigned int)arg0 completionQueue:(NSObject<OS_dispatch_queue> *)arg1 completionBlock:(id /* block */)arg2;
- (void)setPosition:(float)arg0 completionQueue:(NSObject<OS_dispatch_queue> *)arg1 completionBlock:(id /* block */)arg2;
- (void)getVolumeWithOptions:(unsigned int)arg0 completionQueue:(NSObject<OS_dispatch_queue> *)arg1 completionBlock:(id /* block */)arg2;
- (void)setVolume:(float)arg0 completionQueue:(NSObject<OS_dispatch_queue> *)arg1 completionBlock:(id /* block */)arg2;
- (void)sendPhotoData:(NSData *)arg0 options:(NSDictionary *)arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2 completionBlock:(id /* block */)arg3;

@end
