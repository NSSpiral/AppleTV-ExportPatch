/* Runtime dump - MCCertificatePayload
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCCertificatePayload : MCPayload
{
    NSData * _certificatePersistentID;
    NSString * _installedOnDeviceID;
}

@property (copy, nonatomic) NSString * installedOnDeviceID;
@property (retain, nonatomic) NSData * certificatePersistentID;
@property (readonly, nonatomic) char isRoot;
@property (readonly, nonatomic) char isIdentity;
@property (readonly, retain, nonatomic) NSDate * expiry;
@property (readonly, nonatomic) char isSigned;

- (NSString *)description;
- (NSString *)title;
- (NSString *)subtitle2Label;
- (void).cxx_destruct;
- (char)isRoot;
- (NSDate *)expiry;
- (MCCertificatePayload *)initWithDictionary:(NSDictionary *)arg0 profile:(MCProfile *)arg1 outError:(id *)arg2;
- (NSDictionary *)stubDictionary;
- (NSString *)subtitle1Label;
- (NSString *)subtitle1Description;
- (struct __SecCertificate *)copyCertificate;
- (NSData *)certificatePersistentID;
- (NSString *)subtitle2Description;
- (struct __SecIdentity *)copyIdentityFromKeychain;
- (char)isIdentity;
- (NSString *)installedOnDeviceID;
- (void)setCertificatePersistentID:(NSData *)arg0;
- (void)setInstalledOnDeviceID:(NSString *)arg0;
- (char)isSigned;

@end
