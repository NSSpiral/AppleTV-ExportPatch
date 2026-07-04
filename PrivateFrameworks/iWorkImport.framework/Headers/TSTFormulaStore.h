/* Runtime dump - TSTFormulaStore
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTFormulaStore : NSObject
{
    struct __CFUUID * _ownerID;
    TSCECalculationEngine * _calcEngine;
    TSUSparseArray * _formulas;
    unsigned int _nextIndex;
    TSCEOwnerFormulaMap * _formulasForUndo;
}

@property (nonatomic) struct __CFUUID * formulaOwnerID;
@property (retain, nonatomic) TSCECalculationEngine * calcEngine;
@property (retain, nonatomic) TSCEOwnerFormulaMap * formulasForUndo;

+ (struct ?)coordFromIndex:(unsigned int)arg0;
+ (unsigned int)indexFromCoord:(struct ? *)arg0;

- (void)saveToArchive:(struct FormulaStoreArchive *)arg0 archiver:(NSObject *)arg1;
- (struct __CFUUID *)formulaOwnerID;
- (void)setFormulaOwnerID:(struct __CFUUID *)arg0;
- (TSCECalculationEngine *)calcEngine;
- (void)setCalcEngine:(TSCECalculationEngine *)arg0;
- (TSCEOwnerFormulaMap *)formulasForUndo;
- (void)setFormulasForUndo:(TSCEOwnerFormulaMap *)arg0;
- (unsigned int)reserveNextIndex;
- (void)clearFormulaAtIndex:(unsigned int)arg0;
- (void)setFormula:(struct TSCEFormula)arg0 atIndex:(struct TSCEFormulaTranslationFlags)arg1;
- (TSTFormulaStore *)initWithOwnerID:(struct __CFUUID *)arg0;
- (struct ?)reserveNextCoordinate;
- (unsigned int)maxIndex;
- (unsigned int)markForRollback;
- (void)rollbackToMark:(unsigned int)arg0;
- (unsigned int)appendIndexedFormula:(struct TSCEFormula)arg0;
- (void)registerAllFormulaToCalculationEngine;
- (TSTFormulaStore *)initWithOwnerID:(struct __CFUUID *)arg0 archive:(struct FormulaStoreArchive *)arg1 unarchiver:(struct FormulaStoreArchive)arg2;
- (void)foreach:(ODXForEach *)arg0;
- (void)dealloc;
- (NSString *)description;
- (unsigned int)formulaCount;
- (struct TSCEFormula *)formulaAtIndex:(struct UUIDData<TSP::UUIDData>)arg0;

@end
