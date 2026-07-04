/* Runtime dump - ATVHomeShareAuthenticationResources
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVMusicStoreAuthenticationResources.h>
@interface ATVHomeShareAuthenticationResources : ATVMusicStoreAuthenticationResources

+ (void)initialize;

- (NSString *)accountNameTitle;
- (NSString *)accountNameInstructions;
- (NSString *)accountNameFootnote;
- (NSString *)clientIdentifierForTextHistoryStorage;
- (NSString *)behaviorIdentifierForTextHistoryStorage;
- (NSString *)accountPasswordTitle;
- (NSString *)defaultPasswordKey;
- (NSString *)defaultUserNameKey;
- (NSObject *)clientsForTextHistoryDisplay;
- (NSObject *)behaviorsForTextHistoryDisplay;
- (UIImage *)titleImage;
- (NSString *)useSharedCredentialsTitle;
- (NSString *)useSharedCredentialsInstructions;
- (id)useSharedCredentialsAllow;
- (id)useSharedCredentialsDeny;
- (NSString *)setSharedCredentialsTitle;
- (NSString *)setSharedCredentialsInstructions;
- (id)setSharedCredentialsAllow;
- (id)setSharedCredentialsDeny;
- (NSString *)defaultUserName;

@end
