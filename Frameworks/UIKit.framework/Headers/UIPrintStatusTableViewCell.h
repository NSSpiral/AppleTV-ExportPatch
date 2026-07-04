/* Runtime dump - UIPrintStatusTableViewCell
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrintStatusTableViewCell : UITableViewCell
{
    UIActivityIndicatorView * _activityIndicator;
    UILabel * _titleLabel;
    UILabel * _hostLabel;
}

@property (retain, nonatomic) UILabel * titleLabel;
@property (retain, nonatomic) UILabel * hostLabel;
@property (nonatomic) char showActive;

- (void)dealloc;
- (void)layoutSubviews;
- (UILabel *)titleLabel;
- (UIPrintStatusTableViewCell *)initWithReuseIdentifier:(NSString *)arg0;
- (void)setTitleLabel:(UILabel *)arg0;
- (char)showActive;
- (void)setShowActive:(char)arg0;
- (UILabel *)hostLabel;
- (void)setHostLabel:(UILabel *)arg0;

@end
