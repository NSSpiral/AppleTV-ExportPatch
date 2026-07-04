/* Runtime dump - SASAbortSpeechRequest
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASAbortSpeechRequest : SABaseClientBoundCommand

@property (copy, nonatomic) NSString * reason;

+ (NSURLRequest *)abortSpeechRequest;
+ (NSDictionary *)abortSpeechRequestWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)reason;
- (void)setReason:(NSString *)arg0;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
