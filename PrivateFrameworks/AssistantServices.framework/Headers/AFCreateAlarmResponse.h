/* Runtime dump - AFCreateAlarmResponse
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFCreateAlarmResponse : AFSiriResponse
{
    NSString * _alarmIdentifier;
}

@property (copy, nonatomic) NSString * alarmIdentifier;

+ (char)supportsSecureCoding;

- (AFCreateAlarmResponse *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (void)setAlarmIdentifier:(NSString *)arg0;
- (NSString *)alarmIdentifier;

@end
