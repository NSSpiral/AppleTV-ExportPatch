/* Runtime dump - MFEmailSearchOperation
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFEmailSearchOperation : _MFAddressBookPropertySearchOperation

+ (int)property;

- (struct __CFArray *)copyArrayOfUIDsMatchingText:(NSString *)arg0 addresses:(struct __CFArray * *)arg1 identifiers:(struct __CFArray *)arg2;

@end
