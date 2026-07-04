/* Runtime dump - UIPrintStatusJobTableViewCell
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrintStatusJobTableViewCell : UITableViewCell
{
    UIActivityIndicatorView * _activityIndicator;
}

@property (nonatomic) char showActive;

- (void)dealloc;
- (void)layoutSubviews;
- (UIPrintStatusJobTableViewCell *)initWithReuseIdentifier:(NSString *)arg0;
- (char)showActive;
- (void)setShowActive:(char)arg0;

@end
