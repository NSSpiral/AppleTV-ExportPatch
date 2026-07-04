/* Runtime dump - AFSpeechPhrase
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSpeechPhrase : NSObject <NSSecureCoding>
{
    char _isLowConfidence;
    NSArray * _interpretations;
}

@property (copy, nonatomic) NSArray * interpretations;
@property (nonatomic) char isLowConfidence;

+ (char)supportsSecureCoding;

- (AFSpeechPhrase *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (void).cxx_destruct;
- (NSArray *)interpretations;
- (id)bestInterpretation;
- (char)isLowConfidence;
- (void)setIsLowConfidence:(char)arg0;
- (void)setInterpretations:(NSArray *)arg0;

@end
