/* Runtime dump - SCRCMathSubSuperscriptExpression
 * Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCMathSubSuperscriptExpression : SCRCMathExpression
{
    SCRCMathExpression * _base;
    SCRCMathExpression * _subscript;
    SCRCMathExpression * _superscript;
}

@property (retain, nonatomic) SCRCMathExpression * base;
@property (retain, nonatomic) SCRCMathExpression * subscript;
@property (retain, nonatomic) SCRCMathExpression * superscript;

- (char)isNumber;
- (void)dealloc;
- (NSString *)description;
- (SCRCMathSubSuperscriptExpression *)initWithDictionary:(NSDictionary *)arg0;
- (SCRCMathExpression *)base;
- (void)setBase:(SCRCMathExpression *)arg0;
- (NSObject *)speakableDescriptionWithSpeakingStyle:(int)arg0 arePausesAllowed:(char)arg1;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned int)arg0 treePosition:(NSObject *)arg1;
- (NSArray *)subExpressions;
- (NSObject *)speakableSegmentsWithSpeakingStyle:(int)arg0 upToDepth:(unsigned int)arg1 treePosition:(NSObject *)arg2;
- (NSString *)latexMathModeDescription;
- (unsigned int)fractionLevel;
- (char)isRangeSubSuperscript;
- (char)isBaseSubSuperscript;
- (void)setSubscript:(SCRCMathExpression *)arg0;
- (void)setSuperscript:(SCRCMathExpression *)arg0;
- (SCRCMathExpression *)subscript;
- (SCRCMathExpression *)superscript;
- (id)_stringToAddForSuperscript:(id)arg0 withPriorDescription:(NSString *)arg1 updatedDescription:(id *)arg2;
- (NSString *)mathMLString;

@end
