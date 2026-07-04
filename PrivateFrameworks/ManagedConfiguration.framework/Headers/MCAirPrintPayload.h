/* Runtime dump - MCAirPrintPayload
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCAirPrintPayload : MCPayload
{
    unsigned int _airPrintCount;
    NSMutableArray * _ippAddresses;
}

@property (nonatomic) unsigned int airPrintCount;
@property (retain, nonatomic) NSMutableArray * ippAddresses;

+ (NSArray *)typeStrings;
+ (NSString *)localizedSingularForm;
+ (NSString *)localizedPluralForm;

- (NSString *)description;
- (void).cxx_destruct;
- (NSArray *)restrictions;
- (MCAirPrintPayload *)initWithDictionary:(NSDictionary *)arg0 profile:(MCProfile *)arg1 outError:(id *)arg2;
- (NSDictionary *)stubDictionary;
- (unsigned int)airPrintCount;
- (NSMutableArray *)ippAddresses;
- (NSString *)subtitle1Label;
- (NSString *)subtitle1Description;
- (NSArray *)payloadDescriptionKeyValueSections;
- (void)setAirPrintCount:(unsigned int)arg0;
- (void)setIppAddresses:(NSMutableArray *)arg0;

@end
