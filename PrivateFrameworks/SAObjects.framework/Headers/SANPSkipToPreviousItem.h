/* Runtime dump - SANPSkipToPreviousItem
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SANPSkipToPreviousItem : SADomainCommand

+ (NSObject *)skipToPreviousItem;
+ (NSDictionary *)skipToPreviousItemWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
