/* Runtime dump - ABContactToggleBlockCallerAction
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABContactToggleBlockCallerAction : ABContactAction

@property (readonly, nonatomic) char isBlocked;

- (void)performActionWithSender:(NSObject *)arg0;
- (id)allNumbersAndEmails;
- (void)unblock;
- (char)isBlocked;
- (void)block;

@end
