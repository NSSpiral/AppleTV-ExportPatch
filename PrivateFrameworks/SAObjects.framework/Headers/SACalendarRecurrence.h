/* Runtime dump - SACalendarRecurrence
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SACalendarRecurrence : AceObject <SAAceSerializable>

@property (nonatomic) int endCount;
@property (copy, nonatomic) NSDate * endDate;
@property (nonatomic) int frequency;
@property (nonatomic) int interval;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSDateComponents *)recurrence;
+ (NSDictionary *)recurrenceWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (int)frequency;
- (void)setFrequency:(int)arg0;
- (void)setInterval:(int)arg0;
- (int)interval;
- (void)setEndDate:(NSDate *)arg0;
- (NSString *)encodedClassName;
- (int)endCount;
- (void)setEndCount:(int)arg0;
- (NSDate *)endDate;

@end
