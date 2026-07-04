/* Runtime dump - CHDFormula
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDFormula : EDFormula
{
    EDReferenceCollection * mReferences;
    EDWorkbook * mWorkbook;
}

+ (CHDFormula *)formulaWithReferences:(NSArray *)arg0;
+ (NSObject *)formulaWithReference:(NSObject *)arg0;

- (void)dealloc;
- (NSArray *)references;
- (void)setWorkbook:(EDWorkbook *)arg0;
- (unsigned int)countOfCellsBeingReferenced;
- (CHDFormula *)initWithReference:(NSObject *)arg0;
- (CHDFormula *)initWithReferences:(NSArray *)arg0;
- (id)referencesFromFormula;
- (BOOL)isConstantStringFormula;
- (void)prepareTokens;
- (void)setReferences:(NSArray *)arg0;
- (CHDFormula *)initWithWorkbook:(EDWorkbook *)arg0;

@end
