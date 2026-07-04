/* Runtime dump - UISegmentLabel
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISegmentLabel : UILabel
{
    UILabel * _associatedLabel;
}

@property (nonatomic) UILabel * associatedLabel;

- (UISegmentLabel *)init;
- (char)_shouldAnimatePropertyWithKey:(NSString *)arg0;
- (UIColor *)_disabledFontColor;
- (NSString *)_associatedScalingLabel;
- (void)setAssociatedLabel:(UILabel *)arg0;
- (UILabel *)associatedLabel;

@end
