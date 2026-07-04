/* Runtime dump - SARequestCompleted
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SARequestCompleted : SABaseClientBoundCommand

+ (SARequestCompleted *)requestCompleted;
+ (NSDictionary *)requestCompletedWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
