/* Runtime dump - MFConnectionSettings
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFConnectionSettings : NSObject <NSCopying>
{
    NSString * _hostname;
    NSString * _serviceName;
    NSString * _certUIService;
    NSArray * _clientCertificates;
    unsigned int _portNumber;
    struct __CFString * _connectionServiceType;
    char _usesSSL;
    char _usesOpportunisticSockets;
    char _tryDirectSSLConnection;
    char _allowsTrustPrompt;
    NSString * _sourceApplicationBundleIdentifier;
    NSString * _accountIdentifier;
}

@property (copy, nonatomic) NSString * certUIService;
@property (copy, nonatomic) NSString * hostname;
@property (copy, nonatomic) NSString * serviceName;
@property (copy, nonatomic) NSArray * clientCertificates;
@property (copy, nonatomic) NSString * sourceApplicationBundleIdentifier;
@property (copy, nonatomic) NSString * accountIdentifier;
@property (nonatomic) unsigned int portNumber;
@property (nonatomic) char usesSSL;
@property (nonatomic) char usesOpportunisticSockets;
@property (nonatomic) char tryDirectSSL;
@property (nonatomic) char allowsTrustPrompt;

- (void)setAccountIdentifier:(NSString *)arg0;
- (void)dealloc;
- (NSString *)description;
- (MFConnectionSettings *)copyWithZone:(struct _NSZone *)arg0;
- (void)setSourceApplicationBundleIdentifier:(NSString *)arg0;
- (NSString *)sourceApplicationBundleIdentifier;
- (NSString *)accountIdentifier;
- (void)setServiceName:(NSString *)arg0;
- (NSString *)serviceName;
- (char)usesSSL;
- (unsigned int)portNumber;
- (void)setUsesSSL:(char)arg0;
- (void)setHostname:(NSString *)arg0;
- (void)setPortNumber:(unsigned int)arg0;
- (NSString *)certUIService;
- (void)setCertUIService:(NSString *)arg0;
- (NSArray *)clientCertificates;
- (void)setClientCertificates:(NSArray *)arg0;
- (void)setTryDirectSSL:(char)arg0;
- (char)tryDirectSSL;
- (struct __CFString *)connectionServiceType;
- (void)setConnectionServiceType:(struct __CFString *)arg0;
- (char)allowsTrustPrompt;
- (void)setAllowsTrustPrompt:(char)arg0;
- (char)usesOpportunisticSockets;
- (void)setUsesOpportunisticSockets:(char)arg0;
- (NSString *)hostname;

@end
