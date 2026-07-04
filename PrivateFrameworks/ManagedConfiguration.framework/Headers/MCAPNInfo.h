/* Runtime dump - MCAPNInfo
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCAPNInfo : NSObject
{
    NSString * _apnName;
    NSString * _username;
    NSString * _password;
    NSString * _proxy;
    NSNumber * _proxyPort;
}

@property (retain, nonatomic) NSString * apnName;
@property (retain, nonatomic) NSString * username;
@property (retain, nonatomic) NSString * password;
@property (retain, nonatomic) NSString * proxy;
@property (retain, nonatomic) NSNumber * proxyPort;

- (NSString *)description;
- (void).cxx_destruct;
- (NSString *)proxy;
- (void)setProxy:(NSString *)arg0;
- (NSString *)password;
- (void)setPassword:(NSString *)arg0;
- (void)setUsername:(NSString *)arg0;
- (NSArray *)installationWarnings;
- (NSNumber *)proxyPort;
- (void)setProxyPort:(NSNumber *)arg0;
- (void)setApnName:(NSString *)arg0;
- (NSDictionary *)defaultsRepresentation;
- (NSDictionary *)strippedDefaultsRepresentation;
- (NSString *)apnName;
- (NSString *)username;

@end
