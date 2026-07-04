/* Runtime dump - AFSetTimerRequest
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSetTimerRequest : AFSiriRequest
{
    AFTimer * _timer;
}

@property (retain, nonatomic) AFTimer * timer;

+ (char)supportsSecureCoding;

- (AFSetTimerRequest *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (void)setTimer:(AFTimer *)arg0;
- (AFTimer *)timer;
- (NSURLResponse *)createResponse;

@end
