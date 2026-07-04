/* Runtime dump - UIDatePickerContentView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDatePickerContentView : UIView
{
    struct ? _datePickerContentViewFlags;
    char _isModern;
    UILabel * _titleLabel;
    float _titleLabelMaxX;
    int _titleAlignment;
}

@property (readonly, nonatomic) UILabel * titleLabel;
@property (nonatomic) float titleLabelMaxX;
@property (nonatomic) char isAmPm;
@property (nonatomic) int titleAlignment;
@property (nonatomic) char isModern;

- (UIDatePickerContentView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (char)_canBeReusedInPickerView;
- (UILabel *)titleLabel;
- (char)isAmPm;
- (void)setIsAmPm:(char)arg0;
- (void)setTitleLabelMaxX:(float)arg0;
- (void)setTitleAlignment:(int)arg0;
- (float)titleLabelMaxX;
- (int)titleAlignment;
- (char)isModern;
- (void)setIsModern:(char)arg0;

@end
