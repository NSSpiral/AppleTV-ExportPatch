/* Runtime dump - UITableViewLabel
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewLabel : UILabel
{
    UITableViewCell * _tableCell;
}

@property (nonatomic) UITableViewCell * tableCell;

- (void)setText:(NSString *)arg0;
- (void)setTableCell:(UITableViewCell *)arg0;
- (UITableViewCell *)tableCell;

@end
