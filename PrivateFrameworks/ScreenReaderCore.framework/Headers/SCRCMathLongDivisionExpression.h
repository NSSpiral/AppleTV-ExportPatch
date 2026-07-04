/* Runtime dump - SCRCMathLongDivisionExpression
 * Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCMathLongDivisionExpression : SCRCMathArrayExpression
{
    SCRCMathExpression * _divisor;
}

@property (retain, nonatomic) SCRCMathExpression * divisor;

- (void)dealloc;
- (SCRCMathLongDivisionExpression *)initWithDictionary:(NSDictionary *)arg0;
- (NSObject *)speakableDescriptionWithSpeakingStyle:(int)arg0 arePausesAllowed:(char)arg1;
- (void)setDivisor:(SCRCMathExpression *)arg0;
- (SCRCMathExpression *)divisor;

@end
