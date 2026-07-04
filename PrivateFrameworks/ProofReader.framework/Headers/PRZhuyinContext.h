/* Runtime dump - PRZhuyinContext
 * Image: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

@interface PRZhuyinContext : PRAutocorrectionContext
{
    NSMutableArray * _modifications;
    NSMutableArray * _addedModifications;
    NSMutableArray * _removedModifications;
    NSMutableArray * _addedRemovedModifications;
    NSMutableArray * _prefixes;
    char * _buffer;
    unsigned int * _syllableLengthArray;
    void * _connection;
    unsigned int _length;
    unsigned int _lengthBeforeApostrophes;
    unsigned int _startingPoint;
    id _lastIndexes;
    id _nextIndexes;
    unsigned int _startIndex;
    unsigned int _endIndex;
    char _lastSyllableIsPartial;
}

- (void)dealloc;
- (PRZhuyinContext *)init;
- (NSString *)description;
- (void)reset;
- (void)_removeModificationsAndMoveStartingPoint;
- (void)_advanceIndexes;
- (void)_addTranspositions;
- (void)_addReplacements;
- (void)_addDeletions;
- (void)_filterModifications;
- (void)_addInsertions;
- (void)removeNumberOfInputCharacters:(unsigned int)arg0;
- (id)currentModifications;
- (void)addInputCharacter:(unsigned short)arg0 geometryModel:(void *)arg1 geometryData:(NSData *)arg2;
- (NSMutableArray *)removedModifications;
- (NSMutableArray *)addedModifications;

@end
