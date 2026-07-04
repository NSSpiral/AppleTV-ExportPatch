/* Runtime dump - TSCHCallbackAnimationDelegate
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHCallbackAnimationDelegate : NSObject
{
    id target;
    SEL selector;
}

@property (retain, nonatomic) id target;
@property (nonatomic) SEL selector;

- (void)dealloc;
- (void)setTarget:(NSObject *)arg0;
- (void)setSelector:(SEL)arg0;
- (NSObject *)target;
- (SEL)selector;
- (void)animationDidStop:(CAAnimation *)arg0 finished:(char)arg1;

@end
