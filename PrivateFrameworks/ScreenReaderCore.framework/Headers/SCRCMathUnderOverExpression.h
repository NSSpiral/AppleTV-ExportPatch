/* Runtime dump - SCRCMathUnderOverExpression
 * Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCMathUnderOverExpression : SCRCMathExpression
{
    SCRCMathExpression * _under;
    SCRCMathExpression * _over;
    SCRCMathExpression * _base;
}

@property (retain, nonatomic) SCRCMathExpression * under;
@property (retain, nonatomic) SCRCMathExpression * over;
@property (retain, nonatomic) SCRCMathExpression * base;

- (void)dealloc;
- (NSString *)description;
- (SCRCMathUnderOverExpression *)initWithDictionary:(NSDictionary *)arg0;
- (SCRCMathExpression *)base;
- (void)setBase:(SCRCMathExpression *)arg0;
- (NSObject *)speakableDescriptionWithSpeakingStyle:(int)arg0 arePausesAllowed:(char)arg1;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned int)arg0 treePosition:(NSObject *)arg1;
- (NSArray *)subExpressions;
- (NSObject *)speakableSegmentsWithSpeakingStyle:(int)arg0 upToDepth:(unsigned int)arg1 treePosition:(NSObject *)arg2;
- (NSString *)latexMathModeDescription;
- (unsigned int)fractionLevel;
- (char)isRangeSubSuperscript;
- (void)setUnder:(SCRCMathExpression *)arg0;
- (void)setOver:(SCRCMathExpression *)arg0;
- (SCRCMathExpression *)under;
- (SCRCMathExpression *)over;
- (NSString *)mathMLString;

@end
