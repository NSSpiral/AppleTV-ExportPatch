/* Runtime dump - MCAPNConfiguration
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCAPNConfiguration : NSObject
{
    NSString * _name;
    NSString * _username;
    NSString * _password;
    NSString * _proxyServer;
    NSNumber * _proxyPort;
    NSString * _authenticationType;
}

@property (retain, nonatomic) NSString * name;
@property (retain, nonatomic) NSString * username;
@property (retain, nonatomic) NSString * password;
@property (retain, nonatomic) NSString * proxyServer;
@property (retain, nonatomic) NSNumber * proxyPort;
@property (retain, nonatomic) NSString * authenticationType;

- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void).cxx_destruct;
- (void)setAuthenticationType:(NSString *)arg0;
- (NSString *)authenticationType;
- (NSString *)password;
- (void)setPassword:(NSString *)arg0;
- (void)setUsername:(NSString *)arg0;
- (NSDictionary *)stubDictionary;
- (MCAPNConfiguration *)initWithDictionary:(NSDictionary *)arg0 outError:(id *)arg1;
- (NSObject *)localizedAuthenticationType;
- (NSString *)proxyServer;
- (NSNumber *)proxyPort;
- (void)setProxyServer:(NSString *)arg0;
- (void)setProxyPort:(NSNumber *)arg0;
- (NSString *)username;

@end
