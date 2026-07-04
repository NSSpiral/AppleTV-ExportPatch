/* Runtime dump - ACUIAccountSummaryCell
 * Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

@interface ACUIAccountSummaryCell : PSTableCell
{
    int _style;
    UILabel * _dataclassesLabel;
    NSSet * _enabledDataclasses;
    NSSet * _supportedDataclasses;
    ACAccount * _account;
    char _useCustomDetailsText;
    NSString * _desiredValue;
}

+ (ACUIAccountSummaryCell *)_nameForAccountSpecifier:(id)arg0 withStyle:(int)arg1;
+ (void)_configureSpecifier:(id)arg0 forAccount:(NSObject *)arg1 withStyle:(int)arg2 valueText:(NSString *)arg3;
+ (NSObject *)specifierWithStyle:(int)arg0 account:(ACAccount *)arg1 valueText:(NSString *)arg2 detailControllerClass:(Class)arg3 presentationStyle:(int)arg4;
+ (ACUIAccountSummaryCell *)_valueForCellSpecifier:(id)arg0;
+ (NSObject *)specifierWithStyle:(int)arg0 account:(ACAccount *)arg1 target:(NSObject *)arg2 controllerLoadAction:(SEL)arg3;
+ (NSObject *)specifierWithStyle:(int)arg0 account:(ACAccount *)arg1 detailControllerClass:(Class)arg2 presentationStyle:(int)arg3;

- (void)layoutSubviews;
- (UIFont *)_font;
- (void).cxx_destruct;
- (NSString *)_dataclassesLabel;
- (id)_enabledDataclassesTextForWidth:(float)arg0;
- (NSNumberFormatter *)_numberFormatter;
- (void)hideDataclass:(id)arg0;
- (ACUIAccountSummaryCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1 specifier:(PSSpecifier *)arg2;

@end
