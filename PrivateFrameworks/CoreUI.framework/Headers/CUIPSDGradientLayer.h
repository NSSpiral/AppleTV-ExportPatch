/* Runtime dump - CUIPSDGradientLayer
 * Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIPSDGradientLayer : CUIPSDLayer
{
    CUIPSDGradient * _gradient;
}

@property (readonly, nonatomic) CUIPSDGradient * gradient;

- (void)dealloc;
- (CUIPSDGradient *)gradient;
- (CUIPSDGradientLayer *)initWithGradient:(CUIPSDGradient *)arg0;

@end
