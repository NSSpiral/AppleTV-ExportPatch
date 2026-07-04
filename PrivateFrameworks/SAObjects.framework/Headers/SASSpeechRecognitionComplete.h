/* Runtime dump - SASSpeechRecognitionComplete
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASSpeechRecognitionComplete : SABaseClientBoundCommand

@property (copy, nonatomic) NSString * sessionId;

+ (SASSpeechRecognitionComplete *)speechRecognitionComplete;
+ (NSDictionary *)speechRecognitionCompleteWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)sessionId;
- (void)setSessionId:(NSString *)arg0;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
