/* Runtime dump - SKDisplayLink
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKDisplayLink : NSObject
{
    NSTimer * _timer;
    CADisplayLink * _caDisplayLink;
    unsigned int _mode;
    char _paused;
    char _asynchronous;
    int _frameInterval;
    double _previousFrameTime;
    id _block;
    NSObject<OS_dispatch_queue> * _queue;
    float _averageFrameTime;
    int _frameCount;
    double _frameCountBeginTime;
    int _queuedFrameCount;
    unsigned int _maxQueuedFrameCount;
}

@property (nonatomic) char paused;
@property (nonatomic) int frameInterval;
@property (nonatomic) unsigned int mode;
@property (nonatomic) char asynchronous;
@property unsigned int maxQueuedFrameCount;

+ (SKDisplayLink *)displayLinkWithBlock:(id /* block */)arg0 queue:(/* block */ id)arg1;

- (void)_caDisplayLinkCallback;
- (void)setMaxQueuedFrameCount:(unsigned int)arg0;
- (void)_nsTimerCallback;
- (unsigned int)maxQueuedFrameCount;
- (void)_restart;
- (void)_callbackForNextFrame:(double)arg0;
- (char)asynchronous;
- (void)dealloc;
- (SKDisplayLink *)init;
- (void)setFrameInterval:(int)arg0;
- (void)_start;
- (int)frameInterval;
- (void)setMode:(unsigned int)arg0;
- (unsigned int)mode;
- (void)setPaused:(char)arg0;
- (void).cxx_destruct;
- (void)_setup;
- (SKDisplayLink *)initWithBlock:(id /* block */)arg0 queue:(/* block */ id)arg1;
- (void)_teardown;
- (char)isPaused;
- (void)setAsynchronous:(char)arg0;

@end
