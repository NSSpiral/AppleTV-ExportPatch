/* Runtime dump - AFShowAlarmRequest
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFShowAlarmRequest : AFSiriRequest
{
    NSArray * _alarms;
}

@property (copy, nonatomic) NSArray * alarms;

+ (char)supportsSecureCoding;

- (NSArray *)alarms;
- (void)setAlarms:(NSArray *)arg0;
- (AFShowAlarmRequest *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (NSURLResponse *)createResponse;

@end
