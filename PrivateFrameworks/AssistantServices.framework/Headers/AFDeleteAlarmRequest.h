/* Runtime dump - AFDeleteAlarmRequest
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFDeleteAlarmRequest : AFSiriRequest
{
    NSArray * _alarmIdentifiers;
}

@property (copy, nonatomic) NSArray * alarmIdentifiers;

+ (char)supportsSecureCoding;

- (AFDeleteAlarmRequest *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (NSURLResponse *)createResponse;
- (void)setAlarmIdentifiers:(NSArray *)arg0;
- (NSArray *)alarmIdentifiers;

@end
