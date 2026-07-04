/* Runtime dump - EKUpcomingEventsPredicate
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKUpcomingEventsPredicate : NSPredicate <NSSecureCoding>
{
    int _limit;
}

@property (readonly, nonatomic) int limit;

+ (EKUpcomingEventsPredicate *)predicateWithLimit:(int)arg0;
+ (char)supportsSecureCoding;

- (EKUpcomingEventsPredicate *)initWithLimit:(int)arg0;
- (EKUpcomingEventsPredicate *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (EKUpcomingEventsPredicate *)copyWithZone:(struct _NSZone *)arg0;
- (char)evaluateWithObject:(NSObject *)arg0;
- (int)limit;

@end
