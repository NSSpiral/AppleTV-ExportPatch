/* Runtime dump - SASStartPronunciationRequest
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASStartPronunciationRequest : SASStartSpeech

@property (retain, nonatomic) SASPronunciationContext * context;

+ (NSURLRequest *)startPronunciationRequest;
+ (NSDictionary *)startPronunciationRequestWithDictionary:(NSDictionary *)arg0 context:(SASPronunciationContext *)arg1;

- (NSString *)groupIdentifier;
- (SASPronunciationContext *)context;
- (void)setContext:(SASPronunciationContext *)arg0;
- (NSString *)encodedClassName;

@end
