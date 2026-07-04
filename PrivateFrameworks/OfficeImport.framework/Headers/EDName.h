/* Runtime dump - EDName
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDName : NSObject
{
    NSString * _formulaString;
    OITSUPointerKeyDictionary * _maxWorksheetReferences;
    EDString * _nameString;
    EDFormula * _formula;
    unsigned int _sheetIndex;
}

@property (retain, nonatomic) EDString * nameString;
@property (readonly, nonatomic) char isInternalFunction;
@property (readonly, nonatomic) NSString * internalFunctionName;
@property (readonly, nonatomic) EDFormula * formula;
@property (nonatomic) unsigned int sheetIndex;
@property (readonly, nonatomic) OITSUPointerKeyDictionary * maxWorksheetReferences;

+ (NSString *)name;

- (char)isEqualToString:(NSString *)arg0;
- (void)dealloc;
- (EDName *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (EDFormula *)formula;
- (unsigned int)sheetIndex;
- (void)setSheetIndex:(unsigned int)arg0;
- (void)setNameString:(EDString *)arg0;
- (char)isInternalFunction;
- (void)setFormula:(EDFormula *)arg0 workbook:(EDWorkbook *)arg1;
- (EDString *)nameString;
- (char)isEqualToEDName:(NSString *)arg0;
- (NSString *)internalFunctionName;
- (OITSUPointerKeyDictionary *)maxWorksheetReferences;
- (NSString *)formulaString;
- (void)setFormulaString:(NSString *)arg0 workbook:(EDWorkbook *)arg1;

@end
