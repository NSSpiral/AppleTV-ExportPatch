/* Runtime dump - AFMetrics
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFMetrics : NSObject <NSSecureCoding>
{
    NSString * _originalCommandId;
    int _category;
    NSNumber * _duration;
}

@property (copy, nonatomic) NSString * originalCommandId;
@property (nonatomic) int category;
@property (retain, nonatomic) NSNumber * duration;

+ (char)supportsSecureCoding;

- (AFMetrics *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (NSNumber *)duration;
- (void)setCategory:(int)arg0;
- (int)category;
- (void)setDuration:(NSNumber *)arg0;
- (void).cxx_destruct;
- (NSString *)categoryString;
- (double)_roundDouble:(double)arg0 toSignificantDigits:(unsigned int)arg1;
- (id)aceMetrics;
- (NSString *)originalCommandId;
- (void)setOriginalCommandId:(NSString *)arg0;

@end
