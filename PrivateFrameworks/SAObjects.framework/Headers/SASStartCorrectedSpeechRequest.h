/* Runtime dump - SASStartCorrectedSpeechRequest
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASStartCorrectedSpeechRequest : SAStartRequest

@property (copy, nonatomic) NSString * interactionId;
@property (copy, nonatomic) NSString * sessionId;

+ (NSURLRequest *)startCorrectedSpeechRequest;
+ (NSDictionary *)startCorrectedSpeechRequestWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)sessionId;
- (void)setSessionId:(NSString *)arg0;
- (NSString *)encodedClassName;
- (NSString *)interactionId;
- (void)setInteractionId:(NSString *)arg0;

@end
