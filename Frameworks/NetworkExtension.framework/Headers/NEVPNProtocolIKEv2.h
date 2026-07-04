/* Runtime dump - NEVPNProtocolIKEv2
 * Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEVPNProtocolIKEv2 : NEVPNProtocolIPSec
{
    char _wakeForRekey;
    int _deadPeerDetectionRate;
    NSString * _serverCertificateIssuerCommonName;
    NSString * _serverCertificateCommonName;
    int _certificateType;
    NEVPNIKEv2SecurityAssociationParameters * _IKESecurityAssociationParameters;
    NEVPNIKEv2SecurityAssociationParameters * _childSecurityAssociationParameters;
}

@property int deadPeerDetectionRate;
@property (copy) NSString * serverCertificateIssuerCommonName;
@property (copy) NSString * serverCertificateCommonName;
@property int certificateType;
@property (readonly) NEVPNIKEv2SecurityAssociationParameters * IKESecurityAssociationParameters;
@property (readonly) NEVPNIKEv2SecurityAssociationParameters * childSecurityAssociationParameters;
@property char wakeForRekey;

+ (char)supportsSecureCoding;

- (char)checkValidityAndCollectErrors:(NSArray *)arg0;
- (NSString *)descriptionWithIndent:(int)arg0;
- (int)deadPeerDetectionRate;
- (NSString *)serverCertificateIssuerCommonName;
- (NSString *)serverCertificateCommonName;
- (NEVPNIKEv2SecurityAssociationParameters *)IKESecurityAssociationParameters;
- (NEVPNIKEv2SecurityAssociationParameters *)childSecurityAssociationParameters;
- (char)wakeForRekey;
- (int)certificateType;
- (void)setDeadPeerDetectionRate:(int)arg0;
- (void)setServerCertificateIssuerCommonName:(NSString *)arg0;
- (void)setServerCertificateCommonName:(NSString *)arg0;
- (NSDictionary *)copyLegacyDictionary;
- (void)setCertificateType:(int)arg0;
- (void)setWakeForRekey:(char)arg0;
- (id)clone;
- (NEVPNProtocolIKEv2 *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NEVPNProtocolIKEv2 *)init;
- (NEVPNProtocolIKEv2 *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;

@end
