/* Runtime dump - EKNotificationCenterVisibleEventsPredicate
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKNotificationCenterVisibleEventsPredicate : NSPredicate <NSSecureCoding>

+ (char)supportsSecureCoding;
+ (NSPredicate *)predicate;

- (EKNotificationCenterVisibleEventsPredicate *)copyWithZone:(struct _NSZone *)arg0;
- (char)evaluateWithObject:(NSObject *)arg0;

@end
