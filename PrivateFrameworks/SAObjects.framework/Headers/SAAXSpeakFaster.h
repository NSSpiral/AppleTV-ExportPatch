/* Runtime dump - SAAXSpeakFaster
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAXSpeakFaster : SADomainCommand

+ (SAAXSpeakFaster *)speakFaster;
+ (NSDictionary *)speakFasterWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
