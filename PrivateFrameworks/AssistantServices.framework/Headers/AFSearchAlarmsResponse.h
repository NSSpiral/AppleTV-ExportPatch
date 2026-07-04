/* Runtime dump - AFSearchAlarmsResponse
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSearchAlarmsResponse : AFSiriResponse
{
    NSArray * _results;
}

@property (copy, nonatomic) NSArray * results;

+ (char)supportsSecureCoding;

- (AFSearchAlarmsResponse *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSArray *)results;
- (void).cxx_destruct;
- (void)setResults:(NSArray *)arg0;

@end
