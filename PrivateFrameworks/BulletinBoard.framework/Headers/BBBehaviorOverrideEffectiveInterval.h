/* Runtime dump - BBBehaviorOverrideEffectiveInterval
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBBehaviorOverrideEffectiveInterval : NSObject <BBBehaviorOverrideEffectivePeriod>
{
    NSDateComponents * _startComponents;
    NSDateComponents * _endComponents;
    NSString * _calendarIdentifier;
    NSCalendar * _calendar;
    unsigned int _repeatInterval;
    NSUUID * _identifier;
}

@property (copy, nonatomic) NSDateComponents * startComponents;
@property (copy, nonatomic) NSDateComponents * endComponents;
@property (copy, nonatomic) NSString * calendarIdentifier;
@property (nonatomic) unsigned int repeatInterval;
@property (copy, nonatomic) NSCalendar * calendar;
@property (copy, nonatomic) NSUUID * identifier;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)supportsSecureCoding;
+ (unsigned int)relevantUnitsForRepeatInterval:(unsigned int)arg0;
+ (BBBehaviorOverrideEffectiveInterval *)adjustComponentsForRepeatInterval:(unsigned int)arg0 earlier:(char)arg1;
+ (NSArray *)dateWithComponents:(NSArray *)arg0 closestToDate:(NSDate *)arg1 earlierThanDate:(char)arg2 calendar:(NSCalendar *)arg3 repeatInterval:(unsigned int)arg4;
+ (NSArray *)dateWithComponents:(NSArray *)arg0 immediatelyPriorToDate:(NSDate *)arg1 calendar:(NSCalendar *)arg2 repeatInterval:(unsigned int)arg3;
+ (NSArray *)dateWithComponents:(NSArray *)arg0 immediatelyFollowingDate:(NSDate *)arg1 calendar:(NSCalendar *)arg2 repeatInterval:(unsigned int)arg3;
+ (int)_dateComponentWithProvidedComponent:(int)arg0 andBaseComponent:(int)arg1;

- (void)dealloc;
- (BBBehaviorOverrideEffectiveInterval *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (NSUUID *)identifier;
- (void)setRepeatInterval:(unsigned int)arg0;
- (BBBehaviorOverrideEffectiveInterval *)copyWithZone:(struct _NSZone *)arg0;
- (void)setIdentifier:(NSUUID *)arg0;
- (NSString *)calendarIdentifier;
- (unsigned int)repeatInterval;
- (void)setCalendar:(NSCalendar *)arg0;
- (NSCalendar *)calendar;
- (char)containsDate:(NSDate *)arg0;
- (BBBehaviorOverrideEffectiveInterval *)initWithStartComponents:(NSDateComponents *)arg0 endComponents:(NSDateComponents *)arg1 calendarIdentifier:(NSString *)arg2 repeatInterval:(unsigned int)arg3 identifier:(NSUUID *)arg4;
- (void)setStartComponents:(NSDateComponents *)arg0;
- (void)setEndComponents:(NSDateComponents *)arg0;
- (void)setCalendarIdentifier:(NSString *)arg0;
- (NSString *)_configuredCalendarWithIdentifier:(NSUUID *)arg0;
- (void)_synchronizeTimeZone;
- (NSDate *)nextTransitionDateAfterDate:(NSDate *)arg0;
- (BBBehaviorOverrideEffectiveInterval *)initWithStartComponents:(NSDateComponents *)arg0 endComponents:(NSDateComponents *)arg1 calendarIdentifier:(NSString *)arg2 repeatInterval:(unsigned int)arg3;
- (NSDateComponents *)startComponents;
- (NSDateComponents *)endComponents;

@end
