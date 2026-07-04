/* Runtime dump - SCRCMathRadicalExpression
 * Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCMathRadicalExpression : SCRCMathExpression
{
    SCRCMathExpression * _radicand;
    SCRCMathExpression * _rootIndex;
}

@property (retain, nonatomic) SCRCMathExpression * radicand;
@property (retain, nonatomic) SCRCMathExpression * rootIndex;

- (void)dealloc;
- (NSString *)description;
- (SCRCMathRadicalExpression *)initWithDictionary:(NSDictionary *)arg0;
- (NSObject *)speakableDescriptionWithSpeakingStyle:(int)arg0 arePausesAllowed:(char)arg1;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned int)arg0 treePosition:(NSObject *)arg1;
- (NSArray *)subExpressions;
- (NSObject *)speakableSegmentsWithSpeakingStyle:(int)arg0 upToDepth:(unsigned int)arg1 treePosition:(NSObject *)arg2;
- (NSString *)latexMathModeDescription;
- (unsigned int)fractionLevel;
- (void)setRadicand:(SCRCMathExpression *)arg0;
- (void)setRootIndex:(SCRCMathExpression *)arg0;
- (SCRCMathExpression *)radicand;
- (SCRCMathExpression *)rootIndex;
- (char)_isSquareRoot;
- (char)_isCubeRoot;
- (NSString *)mathMLString;

@end
