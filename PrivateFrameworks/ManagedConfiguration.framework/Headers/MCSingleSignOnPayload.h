/* Runtime dump - MCSingleSignOnPayload
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCSingleSignOnPayload : MCPayload
{
    NSString * _humanReadableName;
    MCSingleSignOnPayloadKerberosInfo * _kerberosInfo;
}

@property (retain, nonatomic) NSString * humanReadableName;
@property (retain, nonatomic) MCSingleSignOnPayloadKerberosInfo * kerberosInfo;

+ (NSArray *)typeStrings;
+ (NSString *)localizedSingularForm;
+ (NSString *)localizedPluralForm;

- (NSString *)description;
- (NSString *)title;
- (void).cxx_destruct;
- (MCSingleSignOnPayload *)initWithDictionary:(NSDictionary *)arg0 profile:(MCProfile *)arg1 outError:(id *)arg2;
- (NSDictionary *)stubDictionary;
- (NSArray *)payloadDescriptionKeyValueSections;
- (MCSingleSignOnPayloadKerberosInfo *)kerberosInfo;
- (void)setHumanReadableName:(NSString *)arg0;
- (void)setKerberosInfo:(MCSingleSignOnPayloadKerberosInfo *)arg0;
- (NSString *)humanReadableName;

@end
