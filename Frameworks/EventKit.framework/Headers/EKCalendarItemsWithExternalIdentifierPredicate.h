/* Runtime dump - EKCalendarItemsWithExternalIdentifierPredicate
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKCalendarItemsWithExternalIdentifierPredicate : EKEventPredicate <NSSecureCoding>
{
    NSString * _externalIdentifier;
}

+ (char)supportsSecureCoding;

- (EKCalendarItemsWithExternalIdentifierPredicate *)initWithExternalIdentifier:(NSString *)arg0;
- (void)dealloc;
- (EKCalendarItemsWithExternalIdentifierPredicate *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (EKCalendarItemsWithExternalIdentifierPredicate *)copyWithZone:(struct _NSZone *)arg0;
- (char)evaluateWithObject:(NSObject *)arg0;

@end
