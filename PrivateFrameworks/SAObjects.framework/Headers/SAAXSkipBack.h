/* Runtime dump - SAAXSkipBack
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAXSkipBack : SADomainCommand

+ (SAAXSkipBack *)skipBack;
+ (NSDictionary *)skipBackWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
