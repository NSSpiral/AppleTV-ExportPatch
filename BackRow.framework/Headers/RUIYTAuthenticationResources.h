/* Runtime dump - RUIYTAuthenticationResources
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRUserPasswordAuthenticationResources.h>
@interface RUIYTAuthenticationResources : BRUserPasswordAuthenticationResources
{
    ATVImage * _titleImage;
}

@property (readonly, nonatomic) ATVImage * titleImage;

- (NSString *)accountNameTitle;
- (NSString *)accountNameInstructions;
- (NSString *)accountNameLabel;
- (NSString *)clientIdentifierForTextHistoryStorage;
- (NSString *)behaviorIdentifierForTextHistoryStorage;
- (NSString *)accountPasswordTitle;
- (NSString *)defaultPasswordKey;
- (NSString *)defaultUserNameKey;
- (NSObject *)clientsForTextHistoryDisplay;
- (NSObject *)behaviorsForTextHistoryDisplay;
- (ATVImage *)titleImage;
- (NSString *)connectionString;
- (id)clientIDOAuth2;
- (id)clientSecretOAuth2;
- (id)scopeOAuth2DP;
- (id)deviceEndpointOAuth2DP;
- (id)tokenEndpointOAuth2;
- (void).cxx_destruct;

@end
