/* Runtime dump - NEPluginPreferences
 * Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEPluginPreferences : NSObject
{
    struct __SCPreferences * _prefs;
    NSString * _pluginType;
}

@property struct __SCPreferences * prefs;
@property (readonly) NSString * pluginType;

+ (void)removePreferencesForPluginType:(NSObject *)arg0;

- (struct __SCPreferences *)prefs;
- (NSString *)pluginType;
- (NEPluginPreferences *)initWithPluginType:(NSString *)arg0;
- (char)isPluginTypeEnabled;
- (void)setPluginTypeEnabled:(char)arg0 appURLData:(NSData *)arg1;
- (NSURL *)copyAppURL;
- (char)isFlagSet:(struct __CFString *)arg0;
- (char)setPreferences:(struct __CFDictionary *)arg0 ofType:(long)arg1 configurationIdentifier:(NSString *)arg2;
- (struct __CFDictionary *)copyPersistentDataOfType:(long)arg0 configurationIdentifier:(NSString *)arg1;
- (void)setPrefs:(struct __SCPreferences *)arg0;
- (void)dealloc;
- (void).cxx_destruct;

@end
