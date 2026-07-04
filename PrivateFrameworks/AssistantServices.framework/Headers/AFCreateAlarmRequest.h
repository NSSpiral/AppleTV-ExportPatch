/* Runtime dump - AFCreateAlarmRequest
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFCreateAlarmRequest : AFSiriRequest
{
    AFAlarm * _alarm;
}

@property (retain, nonatomic) AFAlarm * alarm;

+ (char)supportsSecureCoding;

- (AFCreateAlarmRequest *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (AFAlarm *)alarm;
- (NSURLResponse *)createResponse;
- (void)setAlarm:(AFAlarm *)arg0;

@end
