/* Runtime dump - SACalendarDefaultSourceGet
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SACalendarDefaultSourceGet : SADomainCommand

+ (SACalendarDefaultSourceGet *)defaultSourceGet;
+ (SACalendarDefaultSourceGet *)defaultSourceGetWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
