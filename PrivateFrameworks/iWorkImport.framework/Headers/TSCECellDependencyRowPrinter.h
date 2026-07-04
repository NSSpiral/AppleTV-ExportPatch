/* Runtime dump - TSCECellDependencyRowPrinter
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCECellDependencyRowPrinter : NSObject
{
    NSString * _cellID;
    unsigned int _dirtyPrecedentCount;
    char _isFormula;
    char _isInCycle;
    TSCEEdgeListPrinter * _precedentsList;
    TSCEEdgeListPrinter * _dependentsList;
}

@property (retain, nonatomic) NSString * cellID;
@property (nonatomic) unsigned int dirtyPrecedentCount;
@property (nonatomic) char isFormula;
@property (nonatomic) char isInCycle;

- (TSCECellDependencyRowPrinter *)initWithCellID:(NSString *)arg0 dirtyPrecedentCount:(unsigned int)arg1;
- (void)setIsFormula:(char)arg0;
- (void)setIsInCycle:(char)arg0;
- (void)addPrecedentWithCellID:(NSString *)arg0 forOwner:(NSObject *)arg1;
- (void)addDependentWithCellID:(NSString *)arg0 forOwner:(NSObject *)arg1;
- (int)tsce_numericCompare:(NSObject *)arg0;
- (void)setDirtyPrecedentCount:(unsigned int)arg0;
- (unsigned int)dirtyPrecedentCount;
- (char)isInCycle;
- (char)isFormula;
- (NSString *)stringForDependencyRow;
- (void)dealloc;
- (NSString *)cellID;
- (void)setCellID:(NSString *)arg0;

@end
