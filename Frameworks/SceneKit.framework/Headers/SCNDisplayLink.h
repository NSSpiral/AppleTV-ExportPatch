/* Runtime dump - SCNDisplayLink
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNDisplayLink : NSObject
{
    id _reserved;
    CADisplayLink * _caDisplayLink;
    id _owner;
    id _block;
    NSObject<OS_dispatch_queue> * _queue;
    char _paused;
    char _invalidated;
    char _asynchronous;
    int _frameInterval;
    double _lastVideoOutput;
    int _queuedFrameCount;
}

@property (nonatomic) char paused;
@property (nonatomic) int frameInterval;

- (void)_pause;
- (void)_caDisplayLinkCallback;
- (char)_isInvalidated;
- (void)_callbackWithTime:(double)arg0 andDeltaTime:(double)arg1;
- (SCNDisplayLink *)initWithOwner:(NSObject *)arg0 queue:(NSObject<OS_dispatch_queue> *)arg1 block:(id /* block */)arg2;
- (void)willDie;
- (void)setPaused:(char)arg0 nextFrameTimeHint:(double)arg1;
- (int)queuedFrameCount;
- (void)dealloc;
- (SCNDisplayLink *)init;
- (void)invalidate;
- (void)setFrameInterval:(int)arg0;
- (int)frameInterval;
- (void)setPaused:(char)arg0;
- (void)_resume;
- (void)_teardown;
- (char)isPaused;

@end
