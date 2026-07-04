/* Runtime dump - SAAXSkipAhead
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAXSkipAhead : SADomainCommand

+ (SAAXSkipAhead *)skipAhead;
+ (NSDictionary *)skipAheadWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
