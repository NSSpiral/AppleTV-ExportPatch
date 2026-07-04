/* Runtime dump - NEVPNIKEv2SecurityAssociationParameters
 * Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEVPNIKEv2SecurityAssociationParameters : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>
{
    int _encryptionAlgorithm;
    int _integrityAlgorithm;
    int _diffieHellmanGroup;
    int _lifetimeMinutes;
}

@property int encryptionAlgorithm;
@property int integrityAlgorithm;
@property int diffieHellmanGroup;
@property int lifetimeMinutes;

+ (char)supportsSecureCoding;

- (NSDictionary *)copyDictionary;
- (int)encryptionAlgorithm;
- (int)integrityAlgorithm;
- (int)diffieHellmanGroup;
- (int)lifetimeMinutes;
- (void)setEncryptionAlgorithm:(int)arg0;
- (void)setIntegrityAlgorithm:(int)arg0;
- (void)setDiffieHellmanGroup:(int)arg0;
- (void)setLifetimeMinutes:(int)arg0;
- (char)checkValidityAndCollectErrors:(NSArray *)arg0;
- (NSString *)descriptionWithIndent:(int)arg0;
- (NEVPNIKEv2SecurityAssociationParameters *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NEVPNIKEv2SecurityAssociationParameters *)init;
- (NEVPNIKEv2SecurityAssociationParameters *)copyWithZone:(struct _NSZone *)arg0;

@end
