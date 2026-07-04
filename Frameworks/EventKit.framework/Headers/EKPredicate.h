/* Runtime dump - EKPredicate
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPredicate : NSPredicate <NSSecureCoding>
{
    NSArray * _calendars;
    NSSet * _restrictedCalendarRowIDs;
}

@property (readonly, nonatomic) NSArray * calendars;
@property (retain, nonatomic) NSSet * restrictedCalendarRowIDs;

+ (char)supportsSecureCoding;

- (NSArray *)calendars;
- (EKPredicate *)initWithCalendars:(NSArray *)arg0;
- (NSSet *)restrictedCalendarRowIDs;
- (void)setRestrictedCalendarRowIDs:(NSSet *)arg0;
- (void)dealloc;
- (EKPredicate *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;

@end
