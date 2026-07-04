/* Runtime dump - CDTrendLogic
 * Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface CDTrendLogic : NSObject
{
    unsigned long long _slotCount;
    unsigned long long _cDelta;
    unsigned long long _cHighThreshold;
    unsigned long long _cLowThreshold;
    unsigned long long _cMax;
    unsigned long long _cEpsilon;
    unsigned long long _iecMinSeconds;
    unsigned long long _cMin;
    unsigned long long _timerMinSeconds;
    unsigned long long _iecMaxSeconds;
    unsigned long long _iecDecayMult;
    unsigned long long _iecMinMult;
    unsigned long long _iecAvgMult;
    unsigned long long _iecDiv;
    unsigned long long _timerLeewaySeconds;
}

@property unsigned long long slotCount;
@property unsigned long long cDelta;
@property unsigned long long cHighThreshold;
@property unsigned long long cLowThreshold;
@property unsigned long long cMax;
@property unsigned long long cEpsilon;
@property unsigned long long iecMinSeconds;
@property unsigned long long cMin;
@property unsigned long long timerMinSeconds;
@property unsigned long long iecMaxSeconds;
@property unsigned long long iecDecayMult;
@property unsigned long long iecMinMult;
@property unsigned long long iecAvgMult;
@property unsigned long long iecDiv;
@property unsigned long long timerLeewaySeconds;

- (CDTrendLogic *)initWithSlotCount:(unsigned long long)arg0 cDelta:(unsigned long long)arg1 cLowThreshold:(unsigned long long)arg2 cHighThreshold:(unsigned long long)arg3 cMin:(unsigned long long)arg4 cMax:(unsigned long long)arg5 cEpsilon:(unsigned long long)arg6 iecMinSeconds:(unsigned long long)arg7 iecMaxSeconds:(unsigned long long)arg8 iecDecayMult:(unsigned long long)arg9 iecMinMult:(unsigned long long)arg10 iecAvgMult:(unsigned long long)arg11 iecDiv:(unsigned long long)arg12 timerMinSeconds:(unsigned long long)arg13 timerLeewaySeconds:(unsigned long long)arg14 error:(id *)arg15;
- (CDTrendLogic *)initWithTrendLogicBand:(int)arg0 error:(id *)arg1;
- (unsigned long long)slotCount;
- (void)setSlotCount:(unsigned long long)arg0;
- (unsigned long long)cDelta;
- (void)setCDelta:(unsigned long long)arg0;
- (unsigned long long)cHighThreshold;
- (void)setCHighThreshold:(unsigned long long)arg0;
- (unsigned long long)cLowThreshold;
- (void)setCLowThreshold:(unsigned long long)arg0;
- (unsigned long long)cMax;
- (void)setCMax:(unsigned long long)arg0;
- (unsigned long long)cEpsilon;
- (void)setCEpsilon:(unsigned long long)arg0;
- (unsigned long long)iecMinSeconds;
- (void)setIecMinSeconds:(unsigned long long)arg0;
- (unsigned long long)cMin;
- (void)setCMin:(unsigned long long)arg0;
- (unsigned long long)timerMinSeconds;
- (void)setTimerMinSeconds:(unsigned long long)arg0;
- (unsigned long long)iecMaxSeconds;
- (void)setIecMaxSeconds:(unsigned long long)arg0;
- (unsigned long long)iecDecayMult;
- (void)setIecDecayMult:(unsigned long long)arg0;
- (unsigned long long)iecMinMult;
- (void)setIecMinMult:(unsigned long long)arg0;
- (unsigned long long)iecAvgMult;
- (void)setIecAvgMult:(unsigned long long)arg0;
- (unsigned long long)iecDiv;
- (void)setIecDiv:(unsigned long long)arg0;
- (unsigned long long)timerLeewaySeconds;
- (void)setTimerLeewaySeconds:(unsigned long long)arg0;

@end
