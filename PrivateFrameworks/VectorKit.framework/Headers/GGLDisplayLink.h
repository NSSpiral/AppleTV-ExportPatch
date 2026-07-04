/* Runtime dump - GGLDisplayLink
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface GGLDisplayLink : NSObject
{
    SEL _selector;
    id _target;
    CADisplayLink * _displayLink;
    CADisplay * _display;
    int _frameInterval;
    int _skippedFrames;
    char _paused;
}

@property (nonatomic) char paused;
@property (nonatomic) int frameInterval;
@property (readonly, nonatomic) double timestamp;
@property (retain, nonatomic) CADisplay * display;

- (void)dealloc;
- (double)timestamp;
- (void)invalidate;
- (CADisplay *)display;
- (NSObject *)target;
- (void)setFrameInterval:(int)arg0;
- (void)addToRunLoop:(NSObject *)arg0 forMode:(struct __CFString *)arg1;
- (int)frameInterval;
- (void)setPaused:(char)arg0;
- (void)_displayLinkFired:(id)arg0;
- (void)setDisplay:(CADisplay *)arg0;
- (GGLDisplayLink *)initWithTarget:(NSObject *)arg0 selector:(SEL)arg1;
- (char)isPaused;

@end
