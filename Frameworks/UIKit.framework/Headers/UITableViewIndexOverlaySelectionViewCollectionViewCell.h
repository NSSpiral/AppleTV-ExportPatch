/* Runtime dump - UITableViewIndexOverlaySelectionViewCollectionViewCell
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewIndexOverlaySelectionViewCollectionViewCell : UICollectionViewCell
{
    UIButton * _button;
    float _rightMargin;
    char _rightMarginAdjusted;
    id _tapTarget;
    SEL _tapAction;
}

@property (copy, nonatomic) NSString * text;
@property (nonatomic) int textAlignment;
@property (nonatomic) float rightMargin;
@property (readonly) UILabel * label;
@property (readonly) UIButton * button;

- (UIButton *)button;
- (UITableViewIndexOverlaySelectionViewCollectionViewCell *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setTextAlignment:(int)arg0;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (void)setRightMargin:(float)arg0;
- (UILabel *)label;
- (int)textAlignment;
- (float)rightMargin;
- (void)applyLayoutAttributes:(NSDictionary *)arg0;

@end
