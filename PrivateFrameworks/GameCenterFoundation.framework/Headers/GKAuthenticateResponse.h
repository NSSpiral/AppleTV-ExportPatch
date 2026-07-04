/* Runtime dump - GKAuthenticateResponse
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKAuthenticateResponse : GKInternalRepresentation
{
    char _loginDisabled;
    char _passwordChangeRequired;
    char _shouldShowLinkAccountsUI;
    NSString * _accountName;
    NSString * _playerID;
    NSString * _authToken;
    int _environment;
    NSURL * _passwordChangeURL;
}

@property (retain, nonatomic) NSString * accountName;
@property (retain, nonatomic) NSString * playerID;
@property (retain, nonatomic) NSString * authToken;
@property (nonatomic) char loginDisabled;
@property (nonatomic) int environment;
@property (nonatomic) char passwordChangeRequired;
@property (retain, nonatomic) NSURL * passwordChangeURL;
@property (nonatomic) char shouldShowLinkAccountsUI;

+ (NSArray *)secureCodedPropertyKeys;

- (void)dealloc;
- (int)environment;
- (void)setAccountName:(NSString *)arg0;
- (NSString *)accountName;
- (void)setAuthToken:(NSString *)arg0;
- (void)setEnvironment:(int)arg0;
- (NSString *)authToken;
- (void)setLoginDisabled:(char)arg0;
- (char)passwordChangeRequired;
- (void)setPasswordChangeRequired:(char)arg0;
- (NSURL *)passwordChangeURL;
- (void)setPasswordChangeURL:(NSURL *)arg0;
- (char)shouldShowLinkAccountsUI;
- (void)setShouldShowLinkAccountsUI:(char)arg0;
- (NSString *)playerID;
- (void)setPlayerID:(NSString *)arg0;
- (char)loginDisabled;

@end
