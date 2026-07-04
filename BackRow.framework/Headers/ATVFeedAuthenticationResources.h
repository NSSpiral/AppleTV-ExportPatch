/* Runtime dump - ATVFeedAuthenticationResources
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRUserPasswordAuthenticationResources.h>

@class ATVMerchant;
@interface ATVFeedAuthenticationResources : BRUserPasswordAuthenticationResources
{
    ATVMerchant * _merchant;
}

+ (ATVFeedAuthenticationResources *)resourcesWithMerchant:(ATVMerchant *)arg0;

- (NSString *)accountNameTitle;
- (NSString *)accountNameInstructions;
- (NSString *)accountNameLabel;
- (NSString *)accountNameFootnote;
- (NSString *)clientIdentifierForTextHistoryStorage;
- (NSString *)behaviorIdentifierForTextHistoryStorage;
- (NSString *)accountPasswordTitle;
- (NSString *)accountPasswordInstructions;
- (NSString *)accountPasswordLabel;
- (NSString *)authenticationFailureInstructions;
- (NSString *)authenticationFailureTitle;
- (NSString *)defaultPasswordKey;
- (NSString *)defaultUserNameKey;
- (NSObject *)clientsForTextHistoryDisplay;
- (NSObject *)behaviorsForTextHistoryDisplay;
- (UIImage *)titleImage;
- (ATVFeedAuthenticationResources *)initWithMerchant:(ATVMerchant *)arg0;
- (NSString *)connectionString;
- (NSString *)authenticationTimeoutMessage;
- (void)dealloc;
- (NSString *)defaultUserName;

@end
