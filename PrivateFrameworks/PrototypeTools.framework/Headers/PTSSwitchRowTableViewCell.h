/* Runtime dump - PTSSwitchRowTableViewCell
 * Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSSwitchRowTableViewCell : PTSRowTableViewCell
{
    UISwitch * _switch;
}

- (PTSSwitchRowTableViewCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1;
- (void).cxx_destruct;
- (void)_valueChanged:(NSNotification *)arg0;
- (void)updateDisplayedValue;

@end
