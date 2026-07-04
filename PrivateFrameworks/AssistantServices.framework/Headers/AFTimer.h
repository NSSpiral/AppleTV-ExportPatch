/* Runtime dump - AFTimer
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFTimer : AFSiriModelObject
{
    int _state;
    NSNumber * _value;
}

@property (nonatomic) int state;
@property (copy, nonatomic) NSNumber * value;

+ (char)supportsSecureCoding;

- (AFTimer *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (int)state;
- (void)setState:(int)arg0;
- (NSNumber *)value;
- (void)setValue:(NSNumber *)arg0;
- (void).cxx_destruct;

@end
