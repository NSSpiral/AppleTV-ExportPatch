/* Runtime dump - ATVMusicStoreAuthenticationResources
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRUserPasswordAuthenticationResources.h>
@interface ATVMusicStoreAuthenticationResources : BRUserPasswordAuthenticationResources

+ (void)initialize;

- (NSString *)accountNameTitle;
- (NSString *)accountNameInstructions;
- (NSString *)accountNameLabel;
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
- (NSString *)connectionString;
- (id)errorResolutionInstruction;
- (NSString *)defaultUserName;

@end
