/* Runtime dump - EKUnacknowledgedEventsPredicate
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKUnacknowledgedEventsPredicate : NSPredicate <NSSecureCoding>

+ (char)supportsSecureCoding;
+ (NSPredicate *)predicate;

- (EKUnacknowledgedEventsPredicate *)copyWithZone:(struct _NSZone *)arg0;
- (char)evaluateWithObject:(NSObject *)arg0;

@end
