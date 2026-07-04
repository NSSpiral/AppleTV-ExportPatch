/* Runtime dump - ABDirectoryGroupWrapper
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABDirectoryGroupWrapper : ABGroupWrapper

+ (NSString *)newDirectoryGroupWrapperWithAccountIdentifier:(NSString *)arg0 store:(void *)arg1 addressBook:(void *)arg2;

- (char)isDirectoryWrapper;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)name;
- (int)sourceType;

@end
