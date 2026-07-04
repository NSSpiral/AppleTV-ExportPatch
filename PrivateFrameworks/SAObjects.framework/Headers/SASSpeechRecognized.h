/* Runtime dump - SASSpeechRecognized
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASSpeechRecognized : SABaseClientBoundCommand

@property (retain, nonatomic) SASRecognition * recognition;
@property (copy, nonatomic) NSString * sessionId;

+ (SASSpeechRecognized *)speechRecognized;
+ (NSDictionary *)speechRecognizedWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)af_correctionContext;
- (id)af_userUtteranceValue;
- (id)af_bestTextInterpretation;
- (NSString *)groupIdentifier;
- (NSString *)sessionId;
- (void)setSessionId:(NSString *)arg0;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (SASRecognition *)recognition;
- (void)setRecognition:(SASRecognition *)arg0;

@end
