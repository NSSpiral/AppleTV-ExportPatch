/* Runtime dump - NEVPNIKEv1ProposalParameters
 * Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEVPNIKEv1ProposalParameters : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>
{
    int _encryptionAlgorithm;
    int _integrityAlgorithm;
    int _diffieHellmanGroup;
    int _lifetimeSeconds;
}

@property int encryptionAlgorithm;
@property int integrityAlgorithm;
@property int diffieHellmanGroup;
@property int lifetimeSeconds;

+ (char)supportsSecureCoding;

- (int)encryptionAlgorithm;
- (int)integrityAlgorithm;
- (int)diffieHellmanGroup;
- (void)setEncryptionAlgorithm:(int)arg0;
- (void)setIntegrityAlgorithm:(int)arg0;
- (void)setDiffieHellmanGroup:(int)arg0;
- (char)checkValidityAndCollectErrors:(NSArray *)arg0;
- (NSString *)descriptionWithIndent:(int)arg0;
- (NSDictionary *)copyLegacyDictionary;
- (NEVPNIKEv1ProposalParameters *)initFromLegacyDictionary:(NSDictionary *)arg0;
- (void)setLifetimeSeconds:(int)arg0;
- (int)lifetimeSeconds;
- (NEVPNIKEv1ProposalParameters *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NEVPNIKEv1ProposalParameters *)init;
- (NEVPNIKEv1ProposalParameters *)copyWithZone:(struct _NSZone *)arg0;

@end
