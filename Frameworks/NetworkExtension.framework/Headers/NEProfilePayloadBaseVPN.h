/* Runtime dump - NEProfilePayloadBaseVPN
 * Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEProfilePayloadBaseVPN : NEProfilePayloadBase
{
    char _userNameRequired;
    char _passwordRequired;
    char _proxyUserNameRequired;
    char _proxyPasswordRequired;
    char _sharedSecretRequired;
    char _pinRequired;
    NSString * _userName;
    NSString * _password;
    NSString * _proxyUserName;
    NSString * _proxyPassword;
    NSString * _sharedSecret;
    NSString * _pin;
}

@property (nonatomic) char userNameRequired;
@property (nonatomic) char passwordRequired;
@property (nonatomic) char proxyUserNameRequired;
@property (nonatomic) char proxyPasswordRequired;
@property (nonatomic) char sharedSecretRequired;
@property (nonatomic) char pinRequired;
@property (copy, nonatomic) NSString * userName;
@property (copy, nonatomic) NSString * password;
@property (copy, nonatomic) NSString * proxyUserName;
@property (copy, nonatomic) NSString * proxyPassword;
@property (copy, nonatomic) NSString * sharedSecret;
@property (copy, nonatomic) NSString * pin;

- (NSString *)userName;
- (id)getPreprocessedPayloadContents;
- (char)setPostprocessedPayloadContents:(id)arg0;
- (NSString *)proxyUserName;
- (NSString *)sharedSecret;
- (NSString *)pin;
- (void)extractPayloadContentsHTTPProxy:(NSObject *)arg0;
- (void)extractPayloadContentsUserNamePassword:(NSString *)arg0;
- (void)extractPayloadContentsSharedSecret:(id)arg0;
- (void)extractPayloadContentsPIN:(id)arg0;
- (void)extractPayloadContents:(id)arg0;
- (char)userNameRequired;
- (void)setUserNameRequired:(char)arg0;
- (char)proxyUserNameRequired;
- (void)setProxyUserNameRequired:(char)arg0;
- (char)proxyPasswordRequired;
- (void)setProxyPasswordRequired:(char)arg0;
- (char)sharedSecretRequired;
- (void)setSharedSecretRequired:(char)arg0;
- (char)pinRequired;
- (void)setPinRequired:(char)arg0;
- (void)setUserName:(NSString *)arg0;
- (void)setProxyUserName:(NSString *)arg0;
- (void)setSharedSecret:(NSString *)arg0;
- (void)setPin:(NSString *)arg0;
- (NEProfilePayloadBaseVPN *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (NEProfilePayloadBaseVPN *)initWithPayload:(NSDictionary *)arg0;
- (NSString *)password;
- (void)setPassword:(NSString *)arg0;
- (NSString *)proxyPassword;
- (char)passwordRequired;
- (void)setPasswordRequired:(char)arg0;
- (void)setProxyPassword:(NSString *)arg0;
- (NSData *)validatePayload;

@end
