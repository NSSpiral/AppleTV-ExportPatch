/* Runtime dump - MCWAPIIdentityCertificatePayload
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCWAPIIdentityCertificatePayload : MCCertificatePayload
{
    NSData * _pemData;
}

@property (readonly, retain, nonatomic) NSData * pemData;

+ (NSArray *)typeStrings;
+ (NSString *)localizedSingularForm;
+ (NSString *)localizedPluralForm;

- (NSString *)description;
- (void).cxx_destruct;
- (MCWAPIIdentityCertificatePayload *)initWithDictionary:(NSDictionary *)arg0 profile:(MCProfile *)arg1 outError:(id *)arg2;
- (struct __SecCertificate *)copyCertificate;
- (struct __SecIdentity *)copyIdentityFromKeychain;
- (char)isIdentity;
- (NSData *)pemData;

@end
