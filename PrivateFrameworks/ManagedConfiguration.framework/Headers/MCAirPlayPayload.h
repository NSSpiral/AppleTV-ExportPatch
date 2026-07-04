/* Runtime dump - MCAirPlayPayload
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCAirPlayPayload : MCPayload
{
    NSArray * _whitelistDestinations;
    NSArray * _destinationsWithPasswords;
    NSArray * _titlesAndDescriptions;
}

@property (retain, nonatomic) NSArray * whitelistDestinations;
@property (retain, nonatomic) NSArray * destinationsWithPasswords;
@property (retain, nonatomic) NSArray * titlesAndDescriptions;

+ (NSArray *)typeStrings;
+ (NSString *)localizedSingularForm;
+ (NSString *)localizedPluralForm;

- (NSString *)description;
- (NSString *)subtitle2Label;
- (void).cxx_destruct;
- (MCAirPlayPayload *)initWithDictionary:(NSDictionary *)arg0 profile:(MCProfile *)arg1 outError:(id *)arg2;
- (NSDictionary *)stubDictionary;
- (NSString *)subtitle1Label;
- (NSString *)subtitle1Description;
- (NSArray *)payloadDescriptionKeyValueSections;
- (NSString *)subtitle2Description;
- (void)setWhitelistDestinations:(NSArray *)arg0;
- (void)setDestinationsWithPasswords:(NSArray *)arg0;
- (NSArray *)whitelistDestinations;
- (NSArray *)destinationsWithPasswords;
- (NSArray *)titlesAndDescriptions;
- (void)setTitlesAndDescriptions:(NSArray *)arg0;

@end
