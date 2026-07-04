/* Runtime dump - IMSystemProxySettingsFetcher
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMSystemProxySettingsFetcher : NSObject
{
    unsigned short _port;
    unsigned short _proxyPort;
    id _delegate;
    NSString * _host;
    int _proxyProtocol;
    NSString * _proxyHost;
    NSString * _proxyAccount;
    NSString * _proxyPassword;
}

@property id delegate;
@property (copy, nonatomic) NSString * _host;
@property (nonatomic) unsigned short _port;
@property (nonatomic) int _proxyProtocol;
@property (copy, nonatomic) NSString * _proxyHost;
@property (nonatomic) unsigned short _proxyPort;
@property (copy, nonatomic) NSString * _proxyAccount;
@property (copy, nonatomic) NSString * _proxyPassword;

- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (NSObject *)delegate;
- (void)_callAccountSettingsDelegateMethod;
- (void)_getProxyAccountAndPasswordFromKeychain;
- (void)_callProxySettingsDelegateMethod;
- (void)_takeProxySettingsFromDictionary:(struct __CFDictionary *)arg0;
- (IMSystemProxySettingsFetcher *)initWithHost:(NSString *)arg0 port:(unsigned short)arg1 delegate:(NSObject *)arg2;
- (IMSystemProxySettingsFetcher *)initWithProxyProtocol:(int)arg0 proxyHost:(NSString *)arg1 proxyPort:(unsigned short)arg2 delegate:(NSObject *)arg3;
- (void)retrieveProxySettings;
- (void)retrieveProxyAccountSettings;
- (NSString *)_host;
- (void)set_host:(NSString *)arg0;
- (unsigned short)_port;
- (void)set_port:(unsigned short)arg0;
- (int)_proxyProtocol;
- (void)set_proxyProtocol:(int)arg0;
- (NSString *)_proxyHost;
- (void)set_proxyHost:(NSString *)arg0;
- (unsigned short)_proxyPort;
- (void)set_proxyPort:(unsigned short)arg0;
- (NSString *)_proxyAccount;
- (void)set_proxyAccount:(NSString *)arg0;
- (NSString *)_proxyPassword;
- (void)set_proxyPassword:(NSString *)arg0;

@end
