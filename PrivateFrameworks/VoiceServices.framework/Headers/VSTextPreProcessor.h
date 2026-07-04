/* Runtime dump - VSTextPreProcessor
 * Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSTextPreProcessor : NSObject
{
    NSArray * _rules;
    NSString * _languageID;
    struct __CFStringTokenizer * _tokenizer;
}

- (void)dealloc;
- (VSTextPreProcessor *)initWithContentsOfPath:(NSString *)arg0 languageIdentifier:(NSString *)arg1;
- (NSString *)processedTextFromString:(NSString *)arg0;

@end
