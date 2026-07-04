/* Runtime dump - UIViewAnimationBlockDelegate
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIViewAnimationBlockDelegate : NSObject
{
    char _didBeginBlockAnimation;
    char _allowUserInteraction;
    char _isZeroDuration;
    char _allowsUserInteractionToCutOffEndOfAnimation;
    char _animationDidStopSent;
    id _start;
    id _completion;
}

@property (readonly, nonatomic) char _allowsUserInteraction;

+ (void)setAnimationBlockDelegateWithDuration:(double)arg0 options:(unsigned int)arg1 start:(SBJsonStreamWriterStateArrayStart *)arg2 completion:(/* block */ id)arg3;

- (void)dealloc;
- (char)_allowsUserInteraction;
- (char)_allowsUserInteractionToCutOffEndOfAnimation;
- (void)_willBeginBlockAnimation:(NSObject *)arg0 context:(NSObject *)arg1;
- (void)_didEndBlockAnimation:(NSObject *)arg0 finished:(id /* block */)arg1 context:(NSObject *)arg2;
- (void)_sendDeferredCompletion:(id /* block */)arg0;

@end
