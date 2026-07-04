/* Runtime dump - TSTTSCEFormulaWrapper
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTTSCEFormulaWrapper : NSObject <TSTCellDiffing, TSSPropertyCommandSerializing>
{
    struct TSCEFormula * _formula;
}

@property (readonly, nonatomic) struct TSCEFormula * formula;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSDictionary *)cellDiffProperties;

- (void)didInitFromSOS;
- (TSTTSCEFormulaWrapper *)initFromPropertyCommandMessage:(struct Message *)arg0 unarchiver:(struct Message)arg1;
- (void)saveToPropertyCommandMessage:(struct Message *)arg0 archiver:(NSObject *)arg1;
- (NSObject *)objectByRemovingPropertiesInMap:(NSObject *)arg0 addingPropertiesInMap:(NSObject *)arg1 updateInverseResetPropertyMap:(NSObject *)arg2 updateInverseSetPropertyMap:(NSObject *)arg3;
- (void)applyToCell:(NSObject *)arg0;
- (NSObject *)propertiesMatchingThoseInMap:(NSObject *)arg0;
- (void)dealloc;
- (NSString *)description;
- (struct TSCEFormula *)formula;
- (TSTTSCEFormulaWrapper *)initWithFormula:(struct TSCEFormula *)arg0;

@end
