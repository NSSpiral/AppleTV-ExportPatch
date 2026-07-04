/* Runtime dump - BRUserPasswordAuthenticationResources
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface BRUserPasswordAuthenticationResources : NSObject

+ (NSArray *)resources;

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
- (double)authenticationTimeout;
- (UIImage *)titleImage;
- (NSString *)connectionString;
- (NSString *)authenticationTimeoutMessage;
- (NSString *)authenticationCancellationTitle;
- (NSString *)defaultUserName;

@end
