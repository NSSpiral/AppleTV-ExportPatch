/* Runtime dump - UITableViewCellLayoutManagerEditable1
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewCellLayoutManagerEditable1 : UITableViewCellLayoutManager <UITextFieldDelegate>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)textFieldShouldBeginEditing:(UITextField *)arg0;
- (void)textFieldDidBeginEditing:(UITextField *)arg0;
- (void)textFieldDidEndEditing:(UITextField *)arg0;
- (char)textFieldShouldReturn:(UITextField *)arg0;
- (void)layoutSubviewsOfCell:(NSObject *)arg0;
- (NSObject *)detailTextLabelForCell:(NSObject *)arg0;
- (NSObject *)editableTextFieldForCell:(NSObject *)arg0;
- (NSObject *)defaultTextLabelFontForCell:(NSObject *)arg0;
- (float)defaultTextFieldFontSizeForCell:(NSObject *)arg0;
- (void)_textFieldStartEditing:(id)arg0;
- (void)_textFieldEndEditing:(id)arg0;
- (void)_textFieldEndEditingOnReturn:(id)arg0;
- (void)_textValueChanged:(NSNotification *)arg0;

@end
