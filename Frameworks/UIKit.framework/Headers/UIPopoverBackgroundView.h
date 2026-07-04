/* Runtime dump - UIPopoverBackgroundView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPopoverBackgroundView : UIView <UIPopoverBackgroundViewMethods>

@property (nonatomic) float arrowOffset;
@property (nonatomic) unsigned int arrowDirection;

+ (float)cornerRadius;
+ (char)wantsDefaultContentAppearance;
+ (float)arrowHeight;
+ (float)arrowBase;
+ (struct UIEdgeInsets)contentViewInsets;
+ (float)_contentViewCornerRadiusForArrowDirection:(unsigned int)arg0;

- (void)layoutSubviews;
- (char)_shouldAnimatePropertyWithKey:(NSString *)arg0;
- (CALayer *)actionForLayer:(CALayer *)arg0 forKey:(NSString *)arg1;
- (struct CGSize)_shadowOffset;
- (unsigned int)arrowDirection;
- (void)setArrowDirection:(unsigned int)arg0;
- (float)_shadowRadius;
- (struct UIEdgeInsets)_shadowInsets;
- (float)_shadowOpacity;
- (NSString *)_shadowPath;
- (void)setArrowOffset:(float)arg0;
- (float)arrowOffset;
- (int)backgroundStyle;
- (struct UIEdgeInsets)_contentViewInsets;
- (NSObject *)_shadowPathForRect:(struct CGRect)arg0 arrowDirection:(struct CGSize)arg1;
- (struct CGRect)_contentViewFrame;
- (struct CGRect)_backgroundContentViewFrame;
- (void)_updateShadow;
- (struct UIEdgeInsets)_contentViewInsetsForArrowDirection:(unsigned int)arg0;
- (char)_wantsDefaultContentAppearance;

@end
