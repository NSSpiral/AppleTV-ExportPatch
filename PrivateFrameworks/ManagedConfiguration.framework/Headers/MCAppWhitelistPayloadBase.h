/* Runtime dump - MCAppWhitelistPayloadBase
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCAppWhitelistPayloadBase : MCPayload
{
    char _allowAccessWithoutPasscode;
    char _forceAllowSupervisorAccess;
    NSArray * _whitelistedAppsAndOptions;
}

@property (retain, nonatomic) NSArray * whitelistedAppsAndOptions;
@property (nonatomic) char allowAccessWithoutPasscode;
@property (nonatomic) char forceAllowSupervisorAccess;

+ (NSArray *)knownOptionsKeys;
+ (NSArray *)knownUserEnabledOptionKeys;

- (NSString *)description;
- (void).cxx_destruct;
- (NSArray *)restrictions;
- (MCAppWhitelistPayloadBase *)initWithDictionary:(NSDictionary *)arg0 profile:(MCProfile *)arg1 outError:(id *)arg2;
- (NSDictionary *)stubDictionary;
- (NSArray *)payloadDescriptionKeyValueSections;
- (void)setWhitelistedAppsAndOptions:(NSArray *)arg0;
- (NSArray *)whitelistedAppsAndOptions;
- (char)allowAccessWithoutPasscode;
- (char)forceAllowSupervisorAccess;
- (void)setAllowAccessWithoutPasscode:(char)arg0;
- (void)setForceAllowSupervisorAccess:(char)arg0;

@end
