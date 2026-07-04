/* Runtime dump - AFShowSettingRequest
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFShowSettingRequest : AFSiriRequest
{
    int _settingType;
}

+ (char)supportsSecureCoding;

- (AFShowSettingRequest *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSURLResponse *)createResponse;
- (int)settingType;
- (NSObject *)_initWithSettingType:(int)arg0;

@end
