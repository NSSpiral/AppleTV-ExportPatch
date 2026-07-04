/* Runtime dump - PLCAAnimationDelegate
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLCAAnimationDelegate : NSObject
{
    id _completion;
    id _start;
}

@property (copy, nonatomic) id completion;
@property (copy, nonatomic) id start;

- (void)dealloc;
- (void)animationDidStop:(CAAnimation *)arg0 finished:(char)arg1;
- (void)animationDidStart:(CAAnimation *)arg0;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg0;
- (struct CGPoint)start;
- (void)setStart:(SBJsonStreamWriterStateArrayStart *)arg0;

@end
