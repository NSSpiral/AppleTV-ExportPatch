/* Runtime dump - AFUpdateAlarmResponse
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFUpdateAlarmResponse : AFSiriResponse
{
    NSArray * _alarmIdentifiers;
}

@property (copy, nonatomic) NSArray * alarmIdentifiers;

+ (char)supportsSecureCoding;

- (AFUpdateAlarmResponse *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (void)setAlarmIdentifiers:(NSArray *)arg0;
- (void)setAlarmIdentifier:(NSString *)arg0;
- (NSArray *)alarmIdentifiers;

@end
