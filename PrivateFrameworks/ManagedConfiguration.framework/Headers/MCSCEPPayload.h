/* Runtime dump - MCSCEPPayload
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCSCEPPayload : MCCertificatePayload
{
    NSString * _URLString;
    NSString * _CAInstanceName;
    NSString * _challenge;
    NSArray * _subject;
    unsigned int _keySize;
    int _usageFlags;
    NSData * _CAFingerprint;
    NSArray * _CACaps;
    NSDictionary * _subjectAltName;
    unsigned int _retries;
    unsigned int _retryDelay;
}

@property (readonly, retain, nonatomic) NSString * URLString;
@property (readonly, retain, nonatomic) NSString * CAInstanceName;
@property (readonly, retain, nonatomic) NSData * CAFingerprint;
@property (readonly, retain, nonatomic) NSArray * CACaps;
@property (readonly, retain, nonatomic) NSString * challenge;
@property (readonly, retain, nonatomic) NSArray * subject;
@property (readonly, nonatomic) unsigned int keySize;
@property (readonly, nonatomic) int usageFlags;
@property (readonly, retain, nonatomic) NSDictionary * subjectAltName;
@property (readonly, nonatomic) unsigned int retries;
@property (readonly, nonatomic) unsigned int retryDelay;

+ (NSArray *)typeStrings;
+ (NSString *)localizedSingularForm;
+ (NSString *)localizedPluralForm;

- (NSString *)description;
- (void).cxx_destruct;
- (NSString *)URLString;
- (NSArray *)subject;
- (char)isRoot;
- (unsigned int)retries;
- (MCSCEPPayload *)initWithDictionary:(NSDictionary *)arg0 profile:(MCProfile *)arg1 outError:(id *)arg2;
- (NSDictionary *)stubDictionary;
- (NSArray *)payloadDescriptionKeyValueSections;
- (struct __SecCertificate *)copyCertificate;
- (struct __SecIdentity *)copyIdentityFromKeychain;
- (char)isIdentity;
- (NSString *)CAInstanceName;
- (unsigned int)keySize;
- (int)usageFlags;
- (NSData *)CAFingerprint;
- (NSArray *)CACaps;
- (NSDictionary *)subjectAltName;
- (unsigned int)retryDelay;
- (NSString *)challenge;

@end
