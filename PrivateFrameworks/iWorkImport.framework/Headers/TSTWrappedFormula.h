/* Runtime dump - TSTWrappedFormula
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTWrappedFormula : TSTFormula
{
    int mFunctionIndex;
}

@property (nonatomic) int functionIndex;

- (int)functionIndex;
- (void)insertFormulaText:(NSString *)arg0 includeWhitespace:(char)arg1;
- (id)nodesToCheckForBareArgumentPlaceholders;
- (void)reparseWithStorage:(id)arg0 adjustExpressionTree:(id)arg1;
- (void)setFunctionIndex:(int)arg0;
- (TSTWrappedFormula *)copyWithZone:(struct _NSZone *)arg0;

@end
