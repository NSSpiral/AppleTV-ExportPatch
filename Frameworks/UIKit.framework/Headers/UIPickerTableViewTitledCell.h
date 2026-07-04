/* Runtime dump - UIPickerTableViewTitledCell
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPickerTableViewTitledCell : UIPickerTableViewCell
{
    UILabel * _titleLabel;
    char _isAttributed;
    char _usesModernStyle;
    UIColor * _textColor;
}

@property (retain, nonatomic) NSString * title;
@property (retain, nonatomic) NSAttributedString * attributedTitle;
@property (readonly, nonatomic) UILabel * _titleLabel;
@property (readonly, nonatomic) char _isAttributed;

- (void)dealloc;
- (char)_canBeReusedInPickerView;
- (UIPickerTableViewTitledCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1 isModern:(char)arg2 textColor:(UIColor *)arg3;
- (void)setAttributedTitle:(NSAttributedString *)arg0;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (void)prepareForReuse;
- (UILabel *)_titleLabel;
- (NSAttributedString *)attributedTitle;
- (void)_setIsCenterCell:(char)arg0 shouldModifyAlphaOfView:(char)arg1;
- (char)_isAttributed;

@end
