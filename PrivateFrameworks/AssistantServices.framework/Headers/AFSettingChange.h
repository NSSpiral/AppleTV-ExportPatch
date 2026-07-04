/* Runtime dump - AFSettingChange
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSettingChange : AFSiriModelObject
{
    int _settingType;
    id _valueBeforeUpdate;
    id _valueAfterUpdate;
}

+ (char)supportsSecureCoding;

- (AFSettingChange *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (AFSettingChange *)initWithSettingType:(int)arg0 valueBeforeUpdate:(NSDate *)arg1 valueAfterUpdate:(NSDate *)arg2;
- (int)settingType;
- (NSDate *)valueBeforeUpdate;
- (NSDate *)valueAfterUpdate;

@end
