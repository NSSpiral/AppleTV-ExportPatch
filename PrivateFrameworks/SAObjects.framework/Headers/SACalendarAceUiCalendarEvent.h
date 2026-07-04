/* Runtime dump - SACalendarAceUiCalendarEvent
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SACalendarAceUiCalendarEvent : SACalendarEvent

@property (copy, nonatomic) NSNumber * durationInMinutes;

+ (NSObject *)aceUiCalendarEvent;
+ (NSDictionary *)aceUiCalendarEventWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (NSNumber *)durationInMinutes;
- (void)setDurationInMinutes:(NSNumber *)arg0;

@end
