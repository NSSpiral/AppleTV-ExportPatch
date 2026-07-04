/* Runtime dump - SAUIInitiateStartSpeechRequest
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIInitiateStartSpeechRequest : SABaseClientBoundCommand

+ (NSURLRequest *)initiateStartSpeechRequest;
+ (NSDictionary *)initiateStartSpeechRequestWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
