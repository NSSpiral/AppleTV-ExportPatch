/* Runtime dump - NSBlockInvocation
 * Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSBlockInvocation : NSInvocation

- (void)invokeSuper;
- (void)invoke;
- (void)setSelector:(SEL)arg0;
- (SEL)selector;
- (void)invokeUsingIMP:(/* block */ id *)arg0;

@end
