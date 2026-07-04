/* Runtime dump - CMGestureManager
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMGestureManager : NSObject
{
    id _internal;
}

@property (copy) id gestureHandler;

+ (char)isGestureServiceEnabled;
+ (char)isGestureServiceAvailable;
+ (void)setGestureServiceEnabled:(char)arg0;

- (id /* block */)gestureHandler;
- (void)dealloc;
- (CMGestureManager *)init;
- (void)setGestureHandler:(id /* block */)arg0;
- (CMGestureManager *)initWithPriority:(int)arg0;

@end
