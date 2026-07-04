/* Runtime dump - NEVPNManager
 * Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEVPNManager : NSObject
{
    char _hasLoaded;
    NEVPNConnection * _connection;
    NEConfiguration * _configuration;
    NEConfigurationManager * _configurationManager;
}

@property (copy) NSArray * onDemandRules;
@property char onDemandEnabled;
@property (copy) NSString * localizedDescription;
@property (retain) NEVPNProtocol * protocol;
@property (readonly) NEVPNConnection * connection;
@property char enabled;
@property (copy) NEConfiguration * configuration;
@property char hasLoaded;
@property (readonly) NEConfigurationManager * configurationManager;

+ (NEVPNManager *)sharedManager;

- (char)isOnDemandEnabled;
- (NSArray *)onDemandRules;
- (void)setOnDemandEnabled:(char)arg0;
- (void)loadFromPreferencesWithCompletionHandler:(id /* block */)arg0;
- (NEConfigurationManager *)configurationManager;
- (void)setHasLoaded:(char)arg0;
- (char)hasLoaded;
- (void)removeFromPreferencesWithCompletionHandler:(id /* block */)arg0;
- (void)saveToPreferencesWithCompletionHandler:(id /* block */)arg0;
- (NEVPNManager *)initVPNManager;
- (void)setOnDemandRules:(NSArray *)arg0;
- (NEVPNManager *)init;
- (void)setEnabled:(char)arg0;
- (char)isEnabled;
- (void)setConfiguration:(NEConfiguration *)arg0;
- (NSString *)localizedDescription;
- (void).cxx_destruct;
- (NEVPNConnection *)connection;
- (NEVPNProtocol *)protocol;
- (NEConfiguration *)configuration;
- (void)setLocalizedDescription:(NSString *)arg0;
- (void)setProtocol:(NEVPNProtocol *)arg0;

@end
