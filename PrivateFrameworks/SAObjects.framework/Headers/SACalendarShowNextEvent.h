/* Runtime dump - SACalendarShowNextEvent
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SACalendarShowNextEvent : SABaseClientBoundCommand

+ (NSObject *)showNextEvent;
+ (NSDictionary *)showNextEventWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
