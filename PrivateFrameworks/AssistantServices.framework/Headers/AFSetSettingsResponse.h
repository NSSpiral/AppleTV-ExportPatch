/* Runtime dump - AFSetSettingsResponse
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSetSettingsResponse : AFSiriResponse
{
    NSArray * _settingChanges;
}

+ (char)supportsSecureCoding;

- (AFSetSettingsResponse *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (NSURLRequest *)_initWithRequest:(NSURLRequest *)arg0 settingChanges:(NSArray *)arg1;
- (NSArray *)settingChanges;

@end
