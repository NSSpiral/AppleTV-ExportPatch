/* Runtime dump - MCPlainCertificatePayload
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCPlainCertificatePayload : MCCertificatePayload
{
    NSString * _certificateFileName;
    NSData * _certificateData;
    NSString * _password;
    int _dataEncoding;
}

@property (readonly, retain, nonatomic) NSString * certificateFileName;
@property (readonly, retain, nonatomic) NSData * certificateData;
@property (readonly, nonatomic) int dataEncoding;
@property (readonly, retain, nonatomic) NSString * password;

+ (NSArray *)typeStrings;
+ (NSString *)localizedSingularForm;
+ (NSString *)localizedPluralForm;

- (NSString *)description;
- (void).cxx_destruct;
- (NSData *)certificateData;
- (NSString *)password;
- (MCPlainCertificatePayload *)initWithDictionary:(NSDictionary *)arg0 profile:(MCProfile *)arg1 outError:(id *)arg2;
- (struct __SecCertificate *)copyCertificate;
- (NSArray *)installationWarnings;
- (char)isIdentity;
- (NSString *)persistentResourceID;
- (NSString *)certificateFileName;
- (int)dataEncoding;
- (char)isSigned;

@end
