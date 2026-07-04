/* Runtime dump - MCAppLayerVPNPayload
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCAppLayerVPNPayload : MCVPNPayloadBase
{
    NSString * _VPNUUID;
    NSArray * _SafariDomains;
}

@property (retain, nonatomic) NSString * VPNUUID;
@property (retain, nonatomic) NSArray * SafariDomains;

+ (NSArray *)typeStrings;
+ (NSString *)localizedSingularForm;
+ (NSString *)localizedPluralForm;

- (NSString *)description;
- (void).cxx_destruct;
- (MCAppLayerVPNPayload *)initWithDictionary:(NSDictionary *)arg0 profile:(MCProfile *)arg1 outError:(id *)arg2;
- (NSDictionary *)stubDictionary;
- (NSArray *)payloadDescriptionKeyValueSections;
- (NSString *)VPNUUID;
- (NSArray *)SafariDomains;
- (void)setVPNUUID:(NSSet *)arg0;
- (void)setSafariDomains:(id)arg0;

@end
