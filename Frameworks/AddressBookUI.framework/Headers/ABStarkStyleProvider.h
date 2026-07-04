/* Runtime dump - ABStarkStyleProvider
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABStarkStyleProvider : ABStyleProvider

+ (float)memberRowHeight;

- (UIColor *)memberNameTextColor;
- (UIColor *)membersBackgroundColor;
- (UIColor *)membersSearchBackgroundColor;
- (UIColor *)membersSearchCellBackgroundColor;
- (UIColor *)personLabelHighlightedColor;
- (UIColor *)memberNameDisabledTextColor;
- (UIFont *)memberNameRegularFont;
- (UIFont *)memberNameBoldFont;
- (UIFont *)memberNamePlaceholderFont;
- (unsigned int)membersCountToShowIndex;
- (float)memberNameFontSize;

@end
