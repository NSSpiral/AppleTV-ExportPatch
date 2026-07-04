/* Runtime dump - SANPSkipToNextItem
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SANPSkipToNextItem : SADomainCommand

+ (NSObject *)skipToNextItem;
+ (NSDictionary *)skipToNextItemWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
