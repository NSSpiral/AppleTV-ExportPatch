/* Runtime dump - ABMultiCellContentView_SocialProfile
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABMultiCellContentView_SocialProfile : ABMultiCellContentView_DisplayAlternate

@property (readonly) NSString * placeholder;
@property (readonly) NSString * username;
@property (readonly) NSString * service;

- (void)textFieldTextDidChange:(NSDictionary *)arg0;
- (void)reloadFromModelIncludingRows:(char)arg0;
- (void)textFieldDidEndEditing:(UITextField *)arg0;
- (NSString *)placeholder;
- (NSString *)service;
- (NSString *)username;

@end
