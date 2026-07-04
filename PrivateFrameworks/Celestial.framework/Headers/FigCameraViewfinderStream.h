/* Runtime dump - FigCameraViewfinderStream
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCameraViewfinderStream : NSObject
{
    FigDelegateStorage * _delegateStorage;
    FigStateMachine * _stateMachine;
    struct OpaqueFigEndpoint * _endpoint;
    struct OpaqueFigEndpointStream * _stream;
    struct OpaqueFigVirtualDisplaySource * _displaySource;
    id _endpointsChangedNotificationToken;
    id _streamsChangedNotificationToken;
}

+ (void)initialize;

- (void)_setEndpoint:(struct OpaqueFigEndpoint *)arg0;
- (void)dealloc;
- (FigCameraViewfinderStream *)init;
- (void)close;
- (void)_setupStateMachine;
- (void)openWithDestination:(NSObject *)arg0;
- (long)enqueueVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg0;
- (void)_handleEndpointsChanged:(NSNotification *)arg0;
- (void)_handleStreamsChanged:(NSNotification *)arg0;
- (void)setDelegate:(NSObject *)arg0 queue:(NSObject *)arg1;

@end
