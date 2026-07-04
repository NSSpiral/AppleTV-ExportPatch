/* Runtime dump - UIDropShadowView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDropShadowView : UIView
{
    float _cornerRadius;
    UIView * _contentView;
    UIView * _backgroundImage;
    NSDictionary * _preservedLayerValues;
}

@property float cornerRadius;
@property (nonatomic) UIView * contentView;

- (void)dealloc;
- (UIDropShadowView *)init;
- (void)setFrame:(struct CGRect)arg0;
- (void)setBounds:(struct CGRect)arg0;
- (UIView *)contentView;
- (void)setContentView:(UIView *)arg0;
- (float)cornerRadius;
- (void)setCornerRadius:(float)arg0;
- (void)willBeginRotationWithOriginalBounds:(struct CGRect)arg0 newBounds:(struct CGSize)arg1;
- (void)didFinishRotation;
- (void)updateShadowPath;

@end
