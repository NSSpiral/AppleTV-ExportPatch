/* Runtime dump - SAHandoffAvailabilityCheck
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAHandoffAvailabilityCheck : SABaseClientBoundCommand

+ (SAHandoffAvailabilityCheck *)handoffAvailabilityCheck;
+ (NSDictionary *)handoffAvailabilityCheckWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
