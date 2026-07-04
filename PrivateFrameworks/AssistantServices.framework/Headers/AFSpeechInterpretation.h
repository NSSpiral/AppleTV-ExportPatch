/* Runtime dump - AFSpeechInterpretation
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSpeechInterpretation : NSObject <NSSecureCoding>
{
    NSArray * _tokens;
}

@property (copy, nonatomic) NSArray * tokens;

+ (char)supportsSecureCoding;

- (AFSpeechInterpretation *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (NSString *)text;
- (void).cxx_destruct;
- (NSArray *)tokens;
- (void)setTokens:(NSArray *)arg0;
- (int)confidenceScore;

@end
