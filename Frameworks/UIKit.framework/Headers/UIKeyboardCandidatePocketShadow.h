/* Runtime dump - UIKeyboardCandidatePocketShadow
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardCandidatePocketShadow : UIView
{
    char _shadowFadesToBottom;
    char _drawsShadow;
    float _shadowHeightGrowthFactor;
}

@property (nonatomic) float shadowHeightGrowthFactor;
@property (nonatomic) char shadowFadesToBottom;
@property (nonatomic) char drawsShadow;

+ (float)width;

- (UIKeyboardCandidatePocketShadow *)initWithFrame:(struct CGRect)arg0;
- (void)drawRect:(struct CGRect)arg0;
- (void)setShadowHeightGrowthFactor:(float)arg0;
- (void)setShadowFadesToBottom:(char)arg0;
- (void)setDrawsShadow:(char)arg0;
- (char)shadowFadesToBottom;
- (char)drawsShadow;
- (float)shadowHeightGrowthFactor;

@end
