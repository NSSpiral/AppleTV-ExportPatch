/* Runtime dump - NEVPNProtocolPPTP
 * Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEVPNProtocolPPTP : NEVPNProtocolPPP
{
    int _encryptionLevel;
}

@property int encryptionLevel;

+ (char)supportsSecureCoding;

- (NSString *)descriptionWithIndent:(int)arg0;
- (NSDictionary *)copyLegacyDictionary;
- (struct __SCNetworkInterface *)createInterface;
- (NEVPNProtocolPPTP *)initFromLegacyDictionary:(NSDictionary *)arg0;
- (void)setEncryptionLevel:(int)arg0;
- (int)encryptionLevel;
- (NEVPNProtocolPPTP *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NEVPNProtocolPPTP *)init;
- (NEVPNProtocolPPTP *)copyWithZone:(struct _NSZone *)arg0;

@end
