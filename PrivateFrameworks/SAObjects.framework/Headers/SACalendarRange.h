/* Runtime dump - SACalendarRange
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SACalendarRange : AceObject <SAAceSerializable>

@property (retain, nonatomic) SACalendar * end;
@property (retain, nonatomic) SACalendar * start;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)calendarRange;
+ (NSDictionary *)calendarRangeWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (SACalendar *)start;
- (SACalendar *)end;
- (void)setStart:(SACalendar *)arg0;
- (void)setEnd:(SACalendar *)arg0;
- (NSString *)encodedClassName;

@end
