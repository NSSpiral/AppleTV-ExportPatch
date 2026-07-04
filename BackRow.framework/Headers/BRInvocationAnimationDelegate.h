/* Runtime dump - BRInvocationAnimationDelegate
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface BRInvocationAnimationDelegate : NSObject
{
    NSInvocation * _startInvocation;
    NSInvocation * _endInvocation;
    id _endTarget;
}

+ (NSObject *)delegateWithTarget:(NSObject *)arg0 endSelector:(SEL)arg1;
+ (NSObject *)delegateWithTarget:(NSObject *)arg0 startSelector:(SEL)arg1 endSelector:(SEL)arg2;
+ (NSObject *)delegateWithEndInvocation:(NSInvocation *)arg0;
+ (NSObject *)delegateWithStartInvocation:(NSInvocation *)arg0;
+ (NSObject *)delegateWithStartInvocation:(NSInvocation *)arg0 endInvocation:(NSInvocation *)arg1;
+ (NSObject *)delegateWithTarget:(NSObject *)arg0 startSelector:(SEL)arg1;

- (NSInvocation *)endInvocation;
- (BRInvocationAnimationDelegate *)initWithStartInvocation:(NSInvocation *)arg0 endInvocation:(NSInvocation *)arg1;
- (NSInvocation *)startInvocation;
- (void)dealloc;
- (void)animationDidStop:(CAAnimation *)arg0 finished:(char)arg1;
- (void)animationDidStart:(CAAnimation *)arg0;

@end
