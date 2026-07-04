/* Runtime dump - PTSEditRowTableViewCell
 * Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSEditRowTableViewCell : PTSRowTableViewCell <UITextFieldDelegate>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (int)cellStyleForRow:(id)arg0;

- (PTSEditRowTableViewCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1;
- (void)textFieldDidEndEditing:(UITextField *)arg0;
- (id)textForValue:(id)arg0;
- (NSString *)valueForText:(NSString *)arg0;
- (void)updateDisplayedValue;

@end
