/* Runtime dump - MCCertificateWrapperProfile
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCCertificateWrapperProfile : MCConfigurationProfile

+ (NSData *)_identifierHashFromData:(NSData *)arg0;
+ (NSString *)_basicWrapperProfileDictForCertificateName:(NSString *)arg0 fileName:(NSString *)arg1 identifier:(NSString *)arg2;
+ (NSData *)_wrapperPayloadDictWithCertData:(NSData *)arg0 fileName:(NSString *)arg1 name:(NSString *)arg2 identifier:(NSString *)arg3 type:(NSObject *)arg4;
+ (NSData *)_wrapperWAPIPayloadDictWithPEMData:(NSData *)arg0 fileName:(NSString *)arg1 name:(NSString *)arg2 identifier:(NSString *)arg3;
+ (NSObject *)_wrapperProfileForWAPICertificate:(struct __SecCertificate *)arg0 fileName:(NSString *)arg1 PEMData:(NSData *)arg2;
+ (NSObject *)_wrapperProfileDictForCertificate:(struct __SecCertificate *)arg0 fileName:(NSString *)arg1 certData:(NSData *)arg2 type:(NSObject *)arg3;
+ (NSData *)wrapperProfileDictionaryWithCertificateData:(NSData *)arg0 fileName:(NSString *)arg1;

- (NSDictionary *)stubDictionary;
- (MCCertificateWrapperProfile *)initWithDictionary:(NSDictionary *)arg0 allowEmptyPayload:(char)arg1 outError:(id *)arg2;
- (NSDate *)earliestCertificateExpiryDate;
- (NSData *)_certificatePayload;
- (int)trustLevel;
- (char)isSigned;

@end
