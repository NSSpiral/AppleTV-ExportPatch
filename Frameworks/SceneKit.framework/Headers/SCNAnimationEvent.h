/* Runtime dump - SCNAnimationEvent
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNAnimationEvent : NSObject
{
    id _reserved;
    double _eventTime;
    id _eventBlock;
}

+ (NSObject *)SCNJSExportProtocol;
+ (SCNAnimationEvent *)animationEventWithKeyTime:(float)arg0 block:(id /* block */)arg1;

- (void)setEventBlock:(id /* block */)arg0;
- (id /* block */)eventBlock;
- (void)dealloc;
- (SCNAnimationEvent *)init;
- (void)setTime:(double)arg0;
- (double)time;

@end
