/* Runtime dump - SATimerGet
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SATimerGet : SADomainCommand

+ (NSObject *)get;
+ (NSDictionary *)getWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
