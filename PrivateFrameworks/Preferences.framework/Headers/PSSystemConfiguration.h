/* Runtime dump - PSSystemConfiguration
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSystemConfiguration : NSObject
{
    struct __SCPreferences * _prefs;
}

+ (PSSystemConfiguration *)sharedInstance;
+ (void)releaseSharedInstance;

- (void)dealloc;
- (unsigned char)synchronizeForWriting:(char)arg0;
- (void)cleanupPrefs;
- (struct __CFString *)dataServiceID;
- (struct __CFString *)voicemailServiceID;
- (struct __CFString *)getServiceIDForPDPContext:(unsigned int)arg0;
- (NSString *)interfaceConfigurationValueForKey:(struct __CFString *)arg0 serviceID:(struct __CFString *)arg1;
- (void)setInterfaceConfigurationValue:(id)arg0 forKey:(struct __CFString *)arg1 serviceID:(struct __CFString *)arg2;
- (NSDictionary *)protocolConfiguration:(struct __CFString *)arg0 serviceID:(struct __CFString *)arg1;
- (void)setProtocolConfiguration:(NSDictionary *)arg0 protocolType:(struct __CFString *)arg1 serviceID:(struct __CFString *)arg2;
- (NSString *)protocolConfigurationValueForKey:(struct __CFString *)arg0 protocolType:(struct __CFString *)arg1 serviceID:(struct __CFString *)arg2;
- (void)setProtocolConfigurationValue:(id)arg0 forKey:(struct __CFString *)arg1 protocolType:(struct __CFString *)arg2 serviceID:(struct __CFString *)arg3;

@end
