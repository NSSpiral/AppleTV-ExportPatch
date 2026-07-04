/* Runtime dump - UITableViewCellContentView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewCellContentView : UIView
{
    CALayer * _mask;
}

@property (retain, nonatomic) CALayer * mask;

+ (UITableViewCellContentView *)classFallbacksForKeyedArchiver;

- (UITableViewCellContentView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (UITableViewCellContentView *)initWithCoder:(NSCoder *)arg0;
- (void)setFrame:(struct CGRect)arg0;
- (void)setBounds:(struct CGRect)arg0;
- (CALayer *)mask;
- (void)setMask:(CALayer *)arg0;
- (void)updateConstraintsIfNeeded;
- (NSObject *)_cell;
- (void)_tableViewCellContentViewCommonSetup;

@end
