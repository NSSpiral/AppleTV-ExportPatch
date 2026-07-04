/* Runtime dump - BRCSyncBudgetThrottle
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCSyncBudgetThrottle : NSObject <NSSecureCoding>
{
    double _t0;
    id _values;
}

@property (readonly, nonatomic) float lastMinute;
@property (readonly, nonatomic) float lastHour;
@property (readonly, nonatomic) float lastDay;

+ (char)supportsSecureCoding;

- (BRCSyncBudgetThrottle *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (BRCSyncBudgetThrottle *)init;
- (NSString *)description;
- (void)clear;
- (void)updateForTime:(double)arg0;
- (float)availableBudgetWithDefaults:(id)arg0;
- (double)nextDateWithBudgetWithDefaults:(id)arg0;
- (id)debugDescriptionWithDefaults:(id)arg0;
- (float)lastDay;
- (double)_timeToLoseAmount:(float)arg0 count:(int)arg1;
- (float)lastHour;
- (float)lastMinute;
- (void)consume:(float)arg0;

@end
