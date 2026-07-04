/* Runtime dump - SASStartStructuredDictationSpeechRequest
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASStartStructuredDictationSpeechRequest : SASStartSpeechRequest

@property (copy, nonatomic) NSString * structuredDictationType;

+ (NSURLRequest *)startStructuredDictationSpeechRequest;
+ (NSDictionary *)startStructuredDictationSpeechRequestWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSString *)structuredDictationType;
- (void)setStructuredDictationType:(NSString *)arg0;

@end
