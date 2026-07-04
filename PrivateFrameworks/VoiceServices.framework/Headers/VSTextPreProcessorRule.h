/* Runtime dump - VSTextPreProcessorRule
 * Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSTextPreProcessorRule : NSObject
{
    NSString * _matchPattern;
    NSString * _replacement;
    char _caseSensitive;
    char _eatPunctuation;
}

- (void)dealloc;
- (VSTextPreProcessorRule *)initWithDictionaryRepresentation:(NSDictionary *)arg0;
- (NSString *)matchedString:(NSString *)arg0 forTokenInRange:(struct ? *)arg1;

@end
