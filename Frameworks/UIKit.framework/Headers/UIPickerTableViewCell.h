/* Runtime dump - UIPickerTableViewCell
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPickerTableViewCell : UITableViewCell
{
    UITapGestureRecognizer * _tap;
    UIPickerTableView * pickerTable;
}

@property (nonatomic) UIPickerTableView * pickerTable;

- (void)dealloc;
- (UIPickerTableViewCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1;
- (void)_tapAction:(NSObject *)arg0;
- (void)_setIsCenterCell:(char)arg0 shouldModifyAlphaOfView:(char)arg1;
- (UIPickerTableView *)pickerTable;
- (void)setPickerTable:(UIPickerTableView *)arg0;

@end
