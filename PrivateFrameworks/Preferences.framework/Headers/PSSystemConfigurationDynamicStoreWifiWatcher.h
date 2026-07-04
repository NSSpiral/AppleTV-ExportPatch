/* Runtime dump - PSSystemConfigurationDynamicStoreWifiWatcher
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSystemConfigurationDynamicStoreWifiWatcher : NSObject
{
    struct __SCDynamicStore * _prefs;
    struct __CFString * _wifiKey;
    struct __CFString * _wifiInterface;
    struct __CFString * _tetheringLink;
}

+ (PSSystemConfigurationDynamicStoreWifiWatcher *)sharedInstance;
+ (void)releaseSharedInstance;
+ (char)wifiEnabled;

- (void)dealloc;
- (PSSystemConfigurationDynamicStoreWifiWatcher *)init;
- (NSObject *)wifiConfig;
- (void)findKeysAirPortState:(id *)arg0 andTetheringState:(id *)arg1;
- (NSObject *)_wifiNameWithState:(NSObject *)arg0;
- (NSObject *)_wifiPowerWithState:(NSObject *)arg0;
- (NSObject *)_wifiTetheringWithState:(NSObject *)arg0;

@end
