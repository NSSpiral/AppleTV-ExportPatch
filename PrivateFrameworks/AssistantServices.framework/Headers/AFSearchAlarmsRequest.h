/* Runtime dump - AFSearchAlarmsRequest
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSearchAlarmsRequest : AFSiriRequest
{
    int _options;
    AFAlarm * _criteria;
}

@property (nonatomic) int options;
@property (retain, nonatomic) AFAlarm * criteria;

+ (char)supportsSecureCoding;

- (AFAlarm *)criteria;
- (void)setCriteria:(AFAlarm *)arg0;
- (AFSearchAlarmsRequest *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setOptions:(int)arg0;
- (int)options;
- (void).cxx_destruct;
- (NSURLResponse *)createResponse;

@end
