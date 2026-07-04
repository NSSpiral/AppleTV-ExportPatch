/* Runtime dump - UITableViewIndexOverlayIndicatorView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewIndexOverlayIndicatorView : UIView
{
    UILabel * _label;
    UITapGestureRecognizer * _tapGestureRecognizer;
    UITableView * _table;
}

@property (copy, nonatomic) NSString * currentText;

- (void)dealloc;
- (void)layoutSubviews;
- (void)_tapGestureChanged:(NSNotification *)arg0;
- (UITableViewIndexOverlayIndicatorView *)initWithTable:(UITableView *)arg0;
- (void)_invalidateTable;
- (void)_willChangeToIdiom:(int)arg0 onScreen:(NSObject *)arg1;
- (NSString *)currentText;
- (void)setCurrentText:(NSString *)arg0;

@end
