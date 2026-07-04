/* Runtime dump - MCChaperonePayload
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCChaperonePayload : MCPayload
{
    NSData * _pairingCertificateData;
    char _nonChaperonePairingAllowed;
    NSNumber * _nonChaperonePairingAllowedNum;
}

@property (readonly, retain, nonatomic) NSData * pairingCertificateData;
@property (readonly, nonatomic) char nonChaperonePairingAllowed;
@property (readonly, nonatomic) NSNumber * nonChaperonePairingAllowedNum;

+ (NSArray *)typeStrings;
+ (NSString *)localizedSingularForm;
+ (NSString *)localizedPluralForm;

- (NSString *)description;
- (NSString *)subtitle2Label;
- (void).cxx_destruct;
- (MCChaperonePayload *)initWithDictionary:(NSDictionary *)arg0 profile:(MCProfile *)arg1 outError:(id *)arg2;
- (NSDictionary *)stubDictionary;
- (NSString *)subtitle1Label;
- (NSString *)subtitle1Description;
- (NSArray *)payloadDescriptionKeyValueSections;
- (NSString *)subtitle2Description;
- (NSData *)pairingCertificateData;
- (char)nonChaperonePairingAllowed;
- (NSNumber *)nonChaperonePairingAllowedNum;

@end
