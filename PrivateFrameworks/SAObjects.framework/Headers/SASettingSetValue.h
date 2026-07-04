/* Runtime dump - SASettingSetValue
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASettingSetValue : SASettingCommand

@property (nonatomic) char dryRun;
@property (nonatomic) char failOnSiriDisconnectWarnings;

+ (SASettingSetValue *)setValue;
+ (NSDictionary *)setValueWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (char)dryRun;
- (void)setDryRun:(char)arg0;
- (char)failOnSiriDisconnectWarnings;
- (void)setFailOnSiriDisconnectWarnings:(char)arg0;

@end
