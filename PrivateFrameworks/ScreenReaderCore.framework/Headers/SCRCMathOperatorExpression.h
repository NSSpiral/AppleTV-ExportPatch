/* Runtime dump - SCRCMathOperatorExpression
 * Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCMathOperatorExpression : SCRCMathSimpleExpression
{
    unsigned short _operatorChar;
}

@property (readonly, nonatomic) unsigned short operatorChar;

- (NSString *)description;
- (SCRCMathOperatorExpression *)initWithDictionary:(NSDictionary *)arg0;
- (NSObject *)speakableDescriptionWithSpeakingStyle:(int)arg0 arePausesAllowed:(char)arg1;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned int)arg0 treePosition:(NSObject *)arg1;
- (char)canBeUsedWithRange;
- (char)isNaturalSuperscript;
- (char)isEllipsis;
- (char)isTermSeparator;
- (char)isOperationSymbol;
- (char)isFenceDelimiter;
- (NSString *)latexFormatStringAsOver;
- (char)_isIntegral;
- (char)_isUnionOrIntersection;
- (char)_isSummation;
- (char)_isRingOperator;
- (char)_isInvisibleCharacter;
- (char)_isMinusSign;
- (unsigned short)operatorChar;
- (NSString *)mathMLString;

@end
