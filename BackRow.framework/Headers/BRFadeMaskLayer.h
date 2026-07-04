/* Runtime dump - BRFadeMaskLayer
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>
@interface BRFadeMaskLayer : BRControl
{
    float _topFadeHeight;
    float _bottomFadeHeight;
    float _leftFadeWidth;
    float _rightFadeWidth;
    struct CGFunction * _shadingFunction;
    struct CGColor * _fillColor;
}

@property struct CGColor * fillColor;

- (void)setLeftFadeWidth:(float)arg0;
- (void)setRightFadeWidth:(float)arg0;
- (void)setEnableMaskAnimation:(char)arg0;
- (void)setBottomFadeHeight:(float)arg0;
- (void)setTopFadeHeight:(float)arg0;
- (float)topFadeHeight;
- (float)bottomFadeHeight;
- (float)leftFadeWidth;
- (float)rightFadeWidth;
- (BRFadeMaskLayer *)initWithLayout:(NSObject *)arg0;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (BRFadeMaskLayer *)init;
- (void)setFillColor:(struct CGColor *)arg0;
- (struct CGColor *)fillColor;

@end
