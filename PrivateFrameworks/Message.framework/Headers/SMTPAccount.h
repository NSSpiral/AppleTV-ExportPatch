/* Runtime dump - SMTPAccount
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface SMTPAccount : DeliveryAccount
{
    Class _deliveryClass;
    MFSMTPConnection * _connection;
    NSTimer * _timer;
    long _lastTimerSetTime;
    id _supportsPipelining;
    id _supportsOutboxCopy;
    id _useCellDataOnly;
}

+ (NSString *)accountTypeString;
+ (NSString *)displayedAccountTypeString;
+ (unsigned int)defaultPortNumber;
+ (NSString *)displayedShortAccountTypeString;
+ (void *)legacyKeychainProtocol;
+ (char)isCommonPortNumber:(unsigned int)arg0;
+ (NSString *)saslProfileName;
+ (SMTPAccount *)newDefaultInstance;
+ (void)registerAppleServiceDeliveryHostname:(id)arg0;

- (void)dealloc;
- (NSString *)serviceName;
- (void)releaseAllConnections;
- (NSString *)preferredAuthScheme;
- (char)_shouldTryDirectSSLConnectionOnPort:(unsigned int)arg0;
- (Class)connectionClass;
- (NSString *)certUIService;
- (struct __CFString *)connectionServiceType;
- (void)releaseAllForcedConnections;
- (void)setPreferredAuthScheme:(NSString *)arg0;
- (NSDictionary *)alternateConnectionSettings;
- (NSDictionary *)insecureConnectionSettings;
- (NSDictionary *)secureConnectionSettings;
- (Class)deliveryClass;
- (char)canBeFallbackAccount;
- (char)supportsOutboxCopy;
- (NSURLConnection *)authenticatedConnection:(char)arg0;
- (void)setSupportsOutboxCopy:(char)arg0;
- (NSURLResponse *)errorForResponse:(NSURLResponse *)arg0;
- (char)supportsPipelining;
- (NSObject *)_defaultSettingsWithPort:(unsigned int)arg0 useSSL:(char)arg1 directSSL:(char)arg2;
- (id)connectionSettingsForAuthentication:(char)arg0 secure:(char)arg1 insecure:(id)arg2;
- (void)setSupportsPipelining:(char)arg0;
- (void)disconnect:(NEOnDemandRuleDisconnect *)arg0;
- (void)connectionExpired:(id)arg0;
- (void)setTimer;
- (char)_isAppleServiceDeliveryHostname:(id)arg0;
- (void)setDeliveryClass:(Class)arg0;
- (NSError *)customAuthenticationErrorStringForError:(NSError *)arg0 authScheme:(MFAuthScheme *)arg1;
- (void)checkInConnection:(NSURLConnection *)arg0;

@end
