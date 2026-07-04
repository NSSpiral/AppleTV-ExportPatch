/* Runtime dump - ABKeyboardSettings
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABKeyboardSettings : NSObject

+ (NSObject *)newKeyboardSettingsForProperty:(int)arg0;
+ (int)keyboardTypeFromDictionary:(NSDictionary *)arg0;
+ (int)autocorrectionTypeFromDictionary:(NSDictionary *)arg0;
+ (int)autocapitalizationTypeFromDictionary:(NSDictionary *)arg0;
+ (char)contentsIsSingleValue:(char)arg0;
+ (char)usesTextSuggestionDelegate:(NSObject *)arg0;

@end
