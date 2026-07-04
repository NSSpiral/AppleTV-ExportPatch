/* Runtime dump - UIKeyboardEmojiSplitCategoryCell
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardEmojiSplitCategoryCell : UITableViewCell
{
    UIImageView * _symbol;
    UILabel * _title;
    UIView * _selectedCircle;
}

@property (retain, nonatomic) UIImageView * symbol;
@property (retain, nonatomic) UILabel * title;
@property (retain, nonatomic) UIView * selectedCircle;

- (void)dealloc;
- (UIKeyboardEmojiSplitCategoryCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1;
- (void)setTitle:(UILabel *)arg0;
- (UILabel *)title;
- (void)setPressIndicatorHidden:(char)arg0;
- (UIImageView *)symbol;
- (void)setTitleText:(NSString *)arg0;
- (void)setSelectedCircleBlendMode:(char)arg0;
- (UIFont *)titleFont;
- (UIFont *)symbolFont;
- (void)setSymbol:(UIImageView *)arg0;
- (UIView *)selectedCircle;
- (void)setSelectedCircle:(UIView *)arg0;

@end
