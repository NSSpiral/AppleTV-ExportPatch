/* Runtime dump - NEFilterManager
 * Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEFilterManager : NSObject
{
    char _hasLoaded;
    NSArray * _entitlements;
    NEConfiguration * _configuration;
    NEConfigurationManager * _configurationManager;
}

@property (copy) NSString * localizedDescription;
@property (retain) NEContentFilterPlugin * pluginConfiguration;
@property char enabled;
@property char hasLoaded;
@property (retain) NSArray * entitlements;
@property (retain) NEConfiguration * configuration;
@property (readonly) NEConfigurationManager * configurationManager;

+ (NEFilterManager *)sharedManager;

- (void)loadFromPreferencesWithCompletionHandler:(id /* block */)arg0;
- (void)createEmptyConfiguration;
- (NEFilterManager *)initFilterManager;
- (void)setEntitlements:(NSArray *)arg0;
- (NEConfigurationManager *)configurationManager;
- (void)setHasLoaded:(char)arg0;
- (char)hasLoaded;
- (void)removeFromPreferencesWithCompletionHandler:(id /* block */)arg0;
- (void)saveToPreferencesWithCompletionHandler:(id /* block */)arg0;
- (NEFilterManager *)init;
- (void)setEnabled:(char)arg0;
- (char)isEnabled;
- (void)setConfiguration:(NEConfiguration *)arg0;
- (NSString *)localizedDescription;
- (void).cxx_destruct;
- (NEConfiguration *)configuration;
- (NSArray *)entitlements;
- (void)setLocalizedDescription:(NSString *)arg0;
- (NEContentFilterPlugin *)pluginConfiguration;
- (void)setPluginConfiguration:(NEContentFilterPlugin *)arg0;

@end
