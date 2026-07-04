/* Runtime dump - EDSharedFormula
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDSharedFormula : EDFormula
{
    BOOL _forceNonBaseFormula;
    unsigned int _baseFormulaIndex;
    int _rowBaseOrOffset;
    int _columnBaseOrOffset;
    EDReference * _baseFormulaRange;
}

@property (nonatomic) unsigned int baseFormulaIndex;
@property (nonatomic) BOOL forceNonBaseFormula;
@property (nonatomic) int rowBaseOrOffset;
@property (nonatomic) int columnBaseOrOffset;
@property (readonly, nonatomic) EDReference * baseFormulaRange;

- (void)dealloc;
- (EDSharedFormula *)init;
- (BOOL)isBaseFormula;
- (BOOL)convertTokensToShared;
- (EDReference *)baseFormulaRange;
- (void)unarchiveFromData:(struct __CFData *)arg0 offset:(unsigned int *)arg1;
- (void)archiveByAppendingToMutableData:(struct __CFData *)arg0;
- (EDSharedFormula *)initWithFormula:(EDArrayedFormula *)arg0;
- (BOOL)forceNonBaseFormula;
- (id)warningWithRowBlocks:(id)arg0;
- (void)setForceNonBaseFormula:(BOOL)arg0;
- (void)updateBaseFormulaRangeWithRow:(int)arg0 column:(int)arg1;
- (void)setRowBaseOrOffset:(int)arg0;
- (void)setColumnBaseOrOffset:(int)arg0;
- (void)setBaseFormulaIndex:(unsigned int)arg0;
- (id)baseFormulaWithRowBlocks:(id)arg0;
- (int)rowBaseOrOffset;
- (int)columnBaseOrOffset;
- (BOOL)isSharedFormula;
- (unsigned int)baseFormulaIndex;

@end
