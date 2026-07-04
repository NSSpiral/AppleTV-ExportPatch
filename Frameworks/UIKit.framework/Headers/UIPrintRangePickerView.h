/* Runtime dump - UIPrintRangePickerView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrintRangePickerView : UIPickerView
{
    float _shift;
}

- (void)layoutSubviews;
- (float)_wheelShift;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;

@end
