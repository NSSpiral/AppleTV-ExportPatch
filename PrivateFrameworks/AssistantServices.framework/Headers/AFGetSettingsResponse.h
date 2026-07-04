/* Runtime dump - AFGetSettingsResponse
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFGetSettingsResponse : AFSiriResponse
{
    NSArray * _settings;
}

@property (copy, nonatomic) NSArray * settings;

+ (char)supportsSecureCoding;

- (AFGetSettingsResponse *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSArray *)settings;
- (void)setSettings:(NSArray *)arg0;
- (void).cxx_destruct;

@end
