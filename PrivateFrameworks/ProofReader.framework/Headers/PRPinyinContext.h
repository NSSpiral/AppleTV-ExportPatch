/* Runtime dump - PRPinyinContext
 * Image: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

@interface PRPinyinContext : PRAutocorrectionContext
{
    NSMutableArray * _modifications;
    NSMutableArray * _addedModifications;
    NSMutableArray * _removedModifications;
    NSMutableArray * _addedRemovedModifications;
    NSMutableArray * _prefixes;
    char * _buffer;
    char * _altBuffer;
    char * _altBufferScores;
    NSMutableArray * _geometryDataArray;
    unsigned int * _syllableLengthArray;
    void * _connection;
    unsigned int _length;
    unsigned int _lengthBeforeApostrophes;
    unsigned int _startingPoint;
    id _lastIndexes;
    id _nextIndexes;
    unsigned int _startIndex;
    unsigned int _endIndex;
    unsigned int _abbreviatedSyllableCount;
    unsigned int _previouslyAnalyzedLength;
    double _validSequenceCorrectionThreshold;
    char _lastSyllableIsPartial;
}

- (void)dealloc;
- (PRPinyinContext *)init;
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
- (double)validSequenceCorrectionThreshold;
- (char)_addEnglishWordForRange:(struct _NSRange)arg0 quickly:(char)arg1;
- (char)_addEnglishWordsEndingAtIndex:(unsigned int)arg0 quickly:(char)arg1;
- (void)_addSpecialEnglishWords;
- (void)_addEnglishWordsQuickly:(char)arg0;
- (void)_addValidSequenceReplacements;
- (void)_removePrefixes;
- (void)_addPrefixes;
- (void)addInputCharacter:(unsigned short)arg0 geometryModel:(void *)arg1 geometryData:(NSData *)arg2;
- (NSMutableArray *)prefixes;
- (void)setValidSequenceCorrectionThreshold:(double)arg0;
- (NSMutableArray *)removedModifications;
- (NSMutableArray *)addedModifications;

@end
