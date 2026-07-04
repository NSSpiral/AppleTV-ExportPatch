/* Runtime dump - MCCellularPayload
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCCellularPayload : MCPayload
{
    MCAPNConfiguration * _attachAPN;
    NSArray * _APNs;
}

@property (retain, nonatomic) MCAPNConfiguration * attachAPN;
@property (retain, nonatomic) NSArray * APNs;

+ (NSArray *)typeStrings;
+ (NSString *)localizedSingularForm;
+ (NSString *)localizedPluralForm;

- (NSString *)description;
- (NSString *)subtitle2Label;
- (void).cxx_destruct;
- (MCCellularPayload *)initWithDictionary:(NSDictionary *)arg0 profile:(MCProfile *)arg1 outError:(id *)arg2;
- (NSDictionary *)stubDictionary;
- (NSString *)subtitle1Label;
- (NSString *)subtitle1Description;
- (NSArray *)payloadDescriptionKeyValueSections;
- (NSArray *)installationWarnings;
- (NSString *)subtitle2Description;
- (MCAPNConfiguration *)attachAPN;
- (NSArray *)APNs;
- (NSString *)attachAPNConfigurationLabel;
- (NSString *)APNsLabel;
- (NSString *)APNConfigurationDescription;
- (NSString *)APNsDescription;
- (void)setAttachAPN:(MCAPNConfiguration *)arg0;
- (void)setAPNs:(id)arg0;

@end
