/* Runtime dump - CAMAnimationDelegate
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMAnimationDelegate : NSObject
{
    id _completion;
    id _start;
}

@property (copy, nonatomic) id completion;
@property (copy, nonatomic) id start;

- (void)animationDidStop:(CAAnimation *)arg0 finished:(char)arg1;
- (void)animationDidStart:(CAAnimation *)arg0;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg0;
- (struct CGPoint)start;
- (void)setStart:(SBJsonStreamWriterStateArrayStart *)arg0;
- (void).cxx_destruct;

@end
