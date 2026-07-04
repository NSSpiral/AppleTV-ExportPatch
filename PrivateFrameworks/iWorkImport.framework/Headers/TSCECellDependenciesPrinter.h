/* Runtime dump - TSCECellDependenciesPrinter
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCECellDependenciesPrinter : NSObject
{
    NSString * _ownerName;
    unsigned int _numDirtyCells;
    char _showCleanCells;
    NSMutableArray * _dirtyCellDependencyRows;
    NSMutableArray * _cleanCellDependencyRows;
}

@property (retain, nonatomic) NSString * ownerName;
@property (nonatomic) unsigned int numDirtyCells;
@property (nonatomic) char showCleanCells;

- (void)setNumDirtyCells:(unsigned int)arg0;
- (void)addDependencyRow:(id)arg0;
- (void)setShowCleanCells:(char)arg0;
- (char)showCleanCells;
- (unsigned int)numDirtyCells;
- (void)setOwnerName:(NSString *)arg0;
- (void)dealloc;
- (TSCECellDependenciesPrinter *)init;
- (NSString *)description;
- (NSString *)ownerName;

@end
