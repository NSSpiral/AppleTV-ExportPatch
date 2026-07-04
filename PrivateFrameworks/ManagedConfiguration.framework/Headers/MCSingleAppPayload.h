/* Runtime dump - MCSingleAppPayload
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCSingleAppPayload : MCAppWhitelistPayloadBase

+ (NSArray *)typeStrings;
+ (NSString *)localizedSingularForm;
+ (NSString *)localizedPluralForm;

- (NSArray *)restrictions;
- (MCSingleAppPayload *)initWithDictionary:(NSDictionary *)arg0 profile:(MCProfile *)arg1 outError:(id *)arg2;
- (NSString *)subtitle1Label;
- (NSString *)subtitle1Description;
- (char)mustInstallNonInteractively;

@end
