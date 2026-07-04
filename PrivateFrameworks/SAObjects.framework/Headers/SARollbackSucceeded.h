/* Runtime dump - SARollbackSucceeded
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SARollbackSucceeded : SABaseClientBoundCommand

+ (SARollbackSucceeded *)rollbackSucceeded;
+ (NSDictionary *)rollbackSucceededWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
