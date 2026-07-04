/* Runtime dump - NEProxyServer
 * Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEProxyServer : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>
{
    char _authenticationRequired;
    NSString * _address;
    int _port;
    int _type;
    NSString * _username;
    NSString * _password;
}

@property (readonly) NSString * address;
@property (readonly) int port;
@property (readonly) int type;
@property char authenticationRequired;
@property (copy) NSString * username;
@property (copy) NSString * password;

+ (char)supportsSecureCoding;

- (char)checkValidityAndCollectErrors:(NSArray *)arg0;
- (NSString *)descriptionWithIndent:(int)arg0;
- (void)syncWithKeychain;
- (NSString *)copyPassword;
- (NEProxyServer *)initWithType:(int)arg0 address:(NSString *)arg1 port:(int)arg2;
- (char)authenticationRequired;
- (NSObject *)copyProtectionSpace;
- (NEProxyServer *)initWithAddress:(NSString *)arg0 andPort:(int)arg1;
- (NEProxyServer *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (int)type;
- (NEProxyServer *)copyWithZone:(struct _NSZone *)arg0;
- (void)setAuthenticationRequired:(char)arg0;
- (void).cxx_destruct;
- (int)port;
- (NSString *)password;
- (void)setPassword:(NSString *)arg0;
- (void)setUsername:(NSString *)arg0;
- (NSString *)address;
- (NSString *)username;

@end
