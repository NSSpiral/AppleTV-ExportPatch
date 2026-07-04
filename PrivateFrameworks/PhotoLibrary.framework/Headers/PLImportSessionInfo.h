/* Runtime dump - PLImportSessionInfo
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLImportSessionInfo : NSObject
{
    char _importComplete;
    char _importStopped;
    char _importingSelection;
    NSMutableIndexSet * _importIndexes;
    NSMutableIndexSet * _importInProgressIndexes;
    NSMutableIndexSet * _importErrorIndexes;
    NSMutableIndexSet * _importCompleteIndexes;
}

@property (nonatomic) char importComplete;
@property (nonatomic) char importStopped;
@property (readonly, nonatomic) NSIndexSet * importIndexes;
@property (readonly, nonatomic) NSIndexSet * inProgressIndexes;
@property (readonly, nonatomic) NSIndexSet * errorIndexes;
@property (readonly, nonatomic) NSIndexSet * completedIndexes;
@property (nonatomic) char importingSelection;

- (void)dealloc;
- (void)removeIndex:(unsigned int)arg0;
- (NSIndexSet *)importIndexes;
- (NSIndexSet *)completedIndexes;
- (NSIndexSet *)errorIndexes;
- (NSIndexSet *)inProgressIndexes;
- (char)_isImportCompleteForIndex:(unsigned int)arg0;
- (PLImportSessionInfo *)initWithImportIndexes:(NSIndexSet *)arg0;
- (void)addIndexToImport:(unsigned int)arg0;
- (void)beginImportForIndex:(unsigned int)arg0;
- (void)completeImportForIndex:(unsigned int)arg0 error:(char)arg1;
- (char)importComplete;
- (void)setImportComplete:(char)arg0;
- (char)importStopped;
- (void)setImportStopped:(char)arg0;
- (char)importingSelection;
- (void)setImportingSelection:(char)arg0;
- (void)shiftIndexesStartingAtIndex:(unsigned int)arg0 by:(unsigned int)arg1;

@end
