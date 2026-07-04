/* Runtime dump - EKUnalertedEventsPredicate
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKUnalertedEventsPredicate : NSPredicate <NSSecureCoding>

+ (char)supportsSecureCoding;
+ (NSPredicate *)predicate;

- (EKUnalertedEventsPredicate *)copyWithZone:(struct _NSZone *)arg0;
- (char)evaluateWithObject:(NSObject *)arg0;

@end
