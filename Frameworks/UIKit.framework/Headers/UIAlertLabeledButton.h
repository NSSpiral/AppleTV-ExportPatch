/* Runtime dump - UIAlertLabeledButton
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAlertLabeledButton : UIAlertButton
{
    UILabel * _typeLabel;
    float _titleOffset;
}

@property (readonly, nonatomic) UILabel * typeLabel;
@property (nonatomic) float titleOffset;

- (void)dealloc;
- (void)layoutSubviews;
- (float)titleOffset;
- (void)setTitleOffset:(float)arg0;
- (UILabel *)typeLabel;

@end
