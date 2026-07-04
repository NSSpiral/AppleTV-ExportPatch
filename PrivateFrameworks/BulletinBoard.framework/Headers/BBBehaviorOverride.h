/* Runtime dump - BBBehaviorOverride
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBBehaviorOverride : NSObject <NSCopying, NSSecureCoding>
{
    unsigned int _overrideType;
    unsigned int _mode;
    NSArray * _effectiveIntervals;
}

@property (nonatomic) unsigned int overrideType;
@property (nonatomic) unsigned int mode;
@property (copy, nonatomic) NSArray * effectiveIntervals;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (BBBehaviorOverride *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (BBBehaviorOverride *)copyWithZone:(struct _NSZone *)arg0;
- (void)setMode:(unsigned int)arg0;
- (unsigned int)mode;
- (NSDate *)nextOverrideTransitionDateAfterDate:(NSDate *)arg0;
- (char)isActiveForDate:(NSDate *)arg0;
- (void)setEffectiveIntervals:(NSArray *)arg0;
- (BBBehaviorOverride *)initWithEffectiveIntervals:(NSArray *)arg0 overrideType:(unsigned int)arg1;
- (BBBehaviorOverride *)initWithOverrideType:(unsigned int)arg0 mode:(unsigned int)arg1 effectiveIntervals:(NSArray *)arg2;
- (unsigned int)overrideType;
- (void)setOverrideType:(unsigned int)arg0;
- (NSArray *)effectiveIntervals;

@end
