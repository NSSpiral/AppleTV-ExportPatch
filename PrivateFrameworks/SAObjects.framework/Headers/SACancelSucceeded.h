/* Runtime dump - SACancelSucceeded
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SACancelSucceeded : SABaseClientBoundCommand

+ (SACancelSucceeded *)cancelSucceeded;
+ (NSDictionary *)cancelSucceededWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
