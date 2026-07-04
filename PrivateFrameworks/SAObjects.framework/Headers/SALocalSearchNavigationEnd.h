/* Runtime dump - SALocalSearchNavigationEnd
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALocalSearchNavigationEnd : SADomainCommand

+ (SALocalSearchNavigationEnd *)navigationEnd;
+ (NSDictionary *)navigationEndWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
