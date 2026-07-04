/* Runtime dump - TSTFormula
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTFormula : NSObject <NSCopying>
{
    TSTExpressionNode * mExpressionTree;
    TSCECalculationEngine * mCalculationEngine;
    TSTTableInfo * mHostInfo;
    NSString * mInitialWhitespace;
    struct ? mHostCell;
    char mSyntaxError;
    char mFixupFormulas;
    char mFormulaWasFixable;
    char mFormulaFixupsShouldStick;
    char mEmpty;
}

@property (readonly, nonatomic) struct TSCEFormula formula;
@property (copy, nonatomic) NSString * initialWhitespace;
@property (nonatomic) char syntaxError;
@property (nonatomic) char fixupFormulas;
@property (readonly, nonatomic) char formulaWasFixable;
@property (readonly, nonatomic) char formulaFixupsShouldStick;
@property (retain, nonatomic) TSTExpressionNode * expressionTree;
@property (nonatomic) char empty;
@property (retain, nonatomic) TSCECalculationEngine * calculationEngine;

+ (NSObject *)formulaForCell:(NSObject *)arg0 atCellID:(struct ?)arg1 inTable:(struct __CFUUID *)arg2;
+ (TSTFormula *)equalsCharacters;
+ (TSTFormula *)singleQuoteCharacters;
+ (TSTFormula *)doubleQuoteCharacters;
+ (int)quoteContextAtCharIndex:(unsigned int)arg0 previousContext:(int)arg1 inStorage:(NSStorage *)arg2;
+ (unsigned int)parenCountAtCharIndex:(unsigned int)arg0 unmatchedParenCount:(unsigned int)arg1 quoteContext:(int)arg2 inStorage:(NSStorage *)arg3;
+ (TSTFormula *)leftParenCharacters;
+ (TSTFormula *)rightParenCharacters;
+ (NSError *)p_charactersToTemporarilyChopOffEndToFixSyntaxError;
+ (TSTFormula *)leadingSingleQuoteEscapeCharacters;
+ (int)formulaQuoteContextAtCharIndex:(unsigned int)arg0 inStorage:(NSStorage *)arg1;
+ (unsigned int)parenCountAtCharIndex:(unsigned int)arg0 inStorage:(NSStorage *)arg1;

- (void)setCalculationEngine:(TSCECalculationEngine *)arg0;
- (char)isSyntaxError;
- (TSCECalculationEngine *)calculationEngine;
- (NSString *)formulaPlainText;
- (TSTFormula *)initWithContext:(NSObject *)arg0 calculationEngine:(TSCECalculationEngine *)arg1 hostCell:(struct ?)arg2 TSCEFormula:(struct TSCEFormula *)arg3 ownerID:(struct TSCEFormula)arg4;
- (void)insertFormulaText:(NSString *)arg0 includeWhitespace:(char)arg1;
- (TSTFormula *)initWithCalculationEngine:(TSCECalculationEngine *)arg0 expressionTree:(TSTExpressionNode *)arg1 hostCell:(struct ?)arg2 hostTable:(id)arg3;
- (void)setExpressionTree:(TSTExpressionNode *)arg0;
- (void)setInitialWhitespace:(NSString *)arg0;
- (void)setSyntaxError:(char)arg0;
- (id)nodesToCheckForBareArgumentPlaceholders;
- (void)reparseWithStorage:(id)arg0 adjustExpressionTree:(id)arg1;
- (id)p_fixFormula:(id)arg0;
- (TSTExpressionNode *)expressionTree;
- (NSArray *)p_formulaAsTextReturningTokenValues:(char)arg0;
- (TSTFormula *)initWithCalculationEngine:(TSCECalculationEngine *)arg0 hostCell:(struct ?)arg1 hostTable:(id)arg2;
- (char)hasBareArgumentPlaceholders;
- (void)reparseWithStorage:(id)arg0;
- (NSString *)formulaDetokenizedText;
- (char)canSimplify;
- (char)fixupFormulas;
- (void)setFixupFormulas:(char)arg0;
- (char)formulaWasFixable;
- (char)formulaFixupsShouldStick;
- (NSString *)initialWhitespace;
- (void)setEmpty:(char)arg0;
- (id)simplify;
- (void)dealloc;
- (void)reset;
- (TSTFormula *)copyWithZone:(struct _NSZone *)arg0;
- (char)isEmpty;
- (void).cxx_construct;
- (struct TSCEFormula)formula;

@end
