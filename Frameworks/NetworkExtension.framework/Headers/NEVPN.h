/* Runtime dump - NEVPN
 * Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEVPN : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>
{
    char _enabled;
    char _onDemandEnabled;
    NSArray * _onDemandRules;
    NEVPNProtocol * _protocol;
}

@property char enabled;
@property char onDemandEnabled;
@property (copy) NSArray * onDemandRules;
@property (copy) NEVPNProtocol * protocol;

+ (char)supportsSecureCoding;

- (char)checkValidityAndCollectErrors:(NSArray *)arg0;
- (NSString *)descriptionWithIndent:(int)arg0;
- (NSDictionary *)copyLegacyDictionary;
- (NEVPN *)initFromLegacyDictionary:(NSDictionary *)arg0;
- (char)isOnDemandEnabled;
- (NSArray *)onDemandRules;
- (void)setOnDemandEnabled:(char)arg0;
- (void)setOnDemandRules:(NSArray *)arg0;
- (id)copyProfileDictionaryWithCertificateUUID:(NSString *)arg0;
- (NEVPN *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NEVPN *)init;
- (NSString *)description;
- (void)setEnabled:(char)arg0;
- (char)isEnabled;
- (NEVPN *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (NEVPNProtocol *)protocol;
- (void)setProtocol:(NEVPNProtocol *)arg0;

@end
