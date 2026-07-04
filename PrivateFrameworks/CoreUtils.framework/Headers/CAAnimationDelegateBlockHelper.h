/* Runtime dump - CAAnimationDelegateBlockHelper
 * Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CAAnimationDelegateBlockHelper : NSObject
{
    id _animationDidStartBlock;
    id _animationDidStopBlock;
}

@property (copy, nonatomic) id animationDidStartBlock;
@property (copy, nonatomic) id animationDidStopBlock;

- (void)dealloc;
- (void)animationDidStop:(CAAnimation *)arg0 finished:(char)arg1;
- (void)animationDidStart:(CAAnimation *)arg0;
- (id /* block */)animationDidStartBlock;
- (void)setAnimationDidStartBlock:(id /* block */)arg0;
- (id /* block */)animationDidStopBlock;
- (void)setAnimationDidStopBlock:(id /* block */)arg0;

@end
