/* Runtime dump - AFGetTimerResponse
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFGetTimerResponse : AFSiriResponse
{
    AFTimer * _timer;
}

@property (retain, nonatomic) AFTimer * timer;

+ (char)supportsSecureCoding;

- (AFGetTimerResponse *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (void)setTimer:(AFTimer *)arg0;
- (AFTimer *)timer;

@end
