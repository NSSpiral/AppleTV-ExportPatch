/* Runtime dump - AFGetSettingsRequest
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFGetSettingsRequest : AFSiriRequest
{
    NSArray * _settings;
}

@property (copy, nonatomic) NSArray * settings;

+ (char)supportsSecureCoding;

- (AFGetSettingsRequest *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSArray *)settings;
- (void)setSettings:(NSArray *)arg0;
- (void).cxx_destruct;
- (NSURLResponse *)createResponse;

@end
