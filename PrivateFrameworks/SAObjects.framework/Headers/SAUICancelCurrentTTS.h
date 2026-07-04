/* Runtime dump - SAUICancelCurrentTTS
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUICancelCurrentTTS : SABaseClientBoundCommand

+ (SAUICancelCurrentTTS *)cancelCurrentTTS;
+ (NSDictionary *)cancelCurrentTTSWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
