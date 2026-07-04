/* Runtime dump - ABContactStyleStyleProvider
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABContactStyleStyleProvider : ABStyleProvider
{
    CNContactStyle * _contactStyle;
}

@property (retain, nonatomic) CNContactStyle * contactStyle;

- (UIColor *)groupsTableBackgroundColor;
- (id)cardCellDividerColorVertical:(char)arg0;
- (UIColor *)groupCellBackgroundColor;
- (UIColor *)groupCellTextColor;
- (UIColor *)groupHeaderBackgroudColor;
- (UIColor *)cardCellBackgroundColor;
- (void)setContactStyle:(CNContactStyle *)arg0;
- (CNContactStyle *)contactStyle;
- (UIColor *)cardValueTextColor;
- (NSObject *)separatorColorForCellStyle:(int)arg0;
- (char)shouldUsePeoplePickerBarStyle;
- (int)peoplePickerBarStyle;
- (char)peoplePickerBarStyleIsTranslucent;
- (UIColor *)membersHeaderBackgroundColor;
- (UIColor *)memberNameTextColor;
- (UIColor *)membersHeaderContentViewBackgroundColor;
- (UIView *)memberHeaderBackgroundView;
- (UIColor *)membersBackgroundColor;
- (UIColor *)membersSearchBackgroundColor;
- (UIColor *)cardSectionBackgroundColor;
- (UIColor *)memberSearchFieldBackgroundColor;
- (int)headerViewBorderStyle;
- (UIColor *)cardLabelSelectedBackgroundColor;
- (ABContactStyleStyleProvider *)initWithContactStyle:(CNContactStyle *)arg0;
- (void)dealloc;

@end
