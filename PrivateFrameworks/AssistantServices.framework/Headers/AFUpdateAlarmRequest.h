/* Runtime dump - AFUpdateAlarmRequest
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFUpdateAlarmRequest : AFSiriRequest
{
    NSArray * _alarms;
}

@property (copy, nonatomic) NSArray * alarms;

+ (char)supportsSecureCoding;

- (NSArray *)alarms;
- (void)setAlarms:(NSArray *)arg0;
- (AFUpdateAlarmRequest *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (AFAlarm *)alarm;
- (NSURLResponse *)createResponse;

@end
