/* Runtime dump - MCAPNPayload
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCAPNPayload : MCPayload
{
    NSArray * _apnInfos;
    char _wasInstalled;
}

@property (nonatomic) char wasInstalled;

+ (NSArray *)typeStrings;
+ (NSString *)localizedSingularForm;
+ (NSString *)localizedPluralForm;
+ (NSString *)apnDomainName;

- (NSString *)description;
- (NSString *)subtitle2Label;
- (void).cxx_destruct;
- (MCAPNPayload *)initWithDictionary:(NSDictionary *)arg0 profile:(MCProfile *)arg1 outError:(id *)arg2;
- (NSDictionary *)stubDictionary;
- (NSString *)subtitle1Label;
- (NSString *)subtitle1Description;
- (NSArray *)payloadDescriptionKeyValueSections;
- (NSString *)subtitle2Description;
- (NSObject *)_validationErrorType:(int)arg0 forInvalidKey:(NSString *)arg1;
- (char)_checkForValidContents:(id)arg0 outError:(id *)arg1;
- (void)_finishInitializationWithContents:(id)arg0;
- (id)_strippedAPNDefaults;
- (id)apnDefaults;
- (char)wasInstalled;
- (void)setWasInstalled:(char)arg0;

@end
