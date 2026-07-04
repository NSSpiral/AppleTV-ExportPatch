/* Runtime dump - AFSetSettingsRequest
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSetSettingsRequest : AFSiriRequest
{
    NSArray * _settings;
    char _applyChanges;
}

@property (copy, nonatomic) NSArray * settings;
@property (nonatomic) char applyChanges;

+ (char)supportsSecureCoding;

- (AFSetSettingsRequest *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSArray *)settings;
- (void).cxx_destruct;
- (NSURLResponse *)createResponse;
- (id)createResponseWithSettingChanges:(NSArray *)arg0;
- (void)_setSettings:(NSDictionary *)arg0;
- (char)applyChanges;
- (void)_setApplyChanges:(char)arg0;

@end
