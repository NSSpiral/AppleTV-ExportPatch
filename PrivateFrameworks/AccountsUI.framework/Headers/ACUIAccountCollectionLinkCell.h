/* Runtime dump - ACUIAccountCollectionLinkCell
 * Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

@interface ACUIAccountCollectionLinkCell : PSTableCell

+ (NSString *)specifierWithTitle:(NSString *)arg0 accounts:(MSAccounts *)arg1;

- (void)layoutSubviews;
- (NSArray *)_detailTextForAccountSpecifiers:(id)arg0;
- (ACUIAccountCollectionLinkCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1 specifier:(PSSpecifier *)arg2;

@end
