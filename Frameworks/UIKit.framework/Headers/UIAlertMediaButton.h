/* Runtime dump - UIAlertMediaButton
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAlertMediaButton : UIAlertButton
{
    UIImageView * _checkmarkView;
    UIImage * _tableIcon;
    UIImage * _highlightedTableIcon;
}

@property (readonly, nonatomic) UIImageView * checkmarkView;
@property (retain, nonatomic) UIImage * tableIcon;
@property (retain, nonatomic) UIImage * highlightedTableIcon;

- (void)dealloc;
- (void)layoutSubviews;
- (UIImageView *)checkmarkView;
- (UIImage *)tableIcon;
- (void)setTableIcon:(UIImage *)arg0;
- (UIImage *)highlightedTableIcon;
- (void)setHighlightedTableIcon:(UIImage *)arg0;

@end
