/* Runtime dump - BBBehaviorOverrideFixedEffectivePeriod
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBBehaviorOverrideFixedEffectivePeriod : NSObject <BBBehaviorOverrideEffectivePeriod>
{
    NSDate * _startDate;
    NSUUID * _identifier;
    double _effectiveInterval;
}

@property (copy, nonatomic) NSDate * startDate;
@property (nonatomic) double effectiveInterval;
@property (copy, nonatomic) NSUUID * identifier;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (BBBehaviorOverrideFixedEffectivePeriod *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSUUID *)identifier;
- (BBBehaviorOverrideFixedEffectivePeriod *)copyWithZone:(struct _NSZone *)arg0;
- (void)setIdentifier:(NSUUID *)arg0;
- (char)containsDate:(NSDate *)arg0;
- (NSDate *)nextTransitionDateAfterDate:(NSDate *)arg0;
- (void)setEffectiveInterval:(double)arg0;
- (double)effectiveInterval;
- (BBBehaviorOverrideFixedEffectivePeriod *)initWithStartDate:(NSDate *)arg0 effectiveInterval:(double)arg1 identifier:(NSUUID *)arg2;
- (void)setStartDate:(NSDate *)arg0;
- (NSDate *)startDate;

@end
