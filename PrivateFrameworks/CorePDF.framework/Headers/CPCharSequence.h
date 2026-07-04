/* Runtime dump - CPCharSequence
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPCharSequence : NSObject <NSCopying, CPCopying, CPDisposable>
{
    unsigned int length;
    struct CPPDFChar * * charArray;
    unsigned int previousSize;
    unsigned int size;
    CPMemoryOwner * sharedMemory;
    char wasMerged;
}

- (void)dealloc;
- (struct CGRect)bounds;
- (unsigned int)length;
- (CPCharSequence *)copyWithZone:(struct _NSZone *)arg0;
- (struct CPPDFChar *)charAtIndex:(unsigned int)arg0;
- (void)dispose;
- (CPCharSequence *)initSuper;
- (char)map:(/* block */ id *)arg0 passing:(void *)arg1;
- (NSObject *)newSubsequenceFrom:(unsigned int)arg0 length:(unsigned int)arg1;
- (void)removeFrom:(unsigned int)arg0;
- (CPCharSequence *)initWithSizeFor:(unsigned int)arg0;
- (void)addChar:(struct CPPDFChar *)arg0;
- (char)wasMerged;
- (char)removeSubsequences:(id)arg0 whereTrue:(/* block */ id *)arg1 passing:(void *)arg2;
- (void)sortByAnchorYDecreasingXIncreasing;
- (void)splitToSubsequences:(id)arg0 whereTrue:(/* block */ id *)arg1 passing:(void *)arg2;
- (void)mergeByAnchorXIncreasingYDecreasing:(id)arg0;
- (char)map:(/* block */ id *)arg0 whereNeighborsWith:(id)arg1 passing:(void *)arg2;
- (void)removeAllChars;
- (void)sortBy:(/* block */ id *)arg0;
- (void)merge:(char)arg0 by:(/* block */ id *)arg1;
- (struct CGRect)boundsFrom:(NSObject *)arg0 length:(SEL)arg1;
- (CPCharSequence *)initWithChars:(struct CPPDFChar *)arg0 length:(struct CGSize)arg1;
- (struct CPPDFChar * *)charArray;
- (void)addChars:(struct CPPDFChar *)arg0 length:(struct CGSize)arg1;
- (void)addChars:(struct CPPDFChar *)arg0 length:(struct CGSize)arg1 ifTrue:(/* block */ id *)arg2 passing:(unsigned int)arg3;
- (void)addCharsFromSequence:(id)arg0;
- (void)removeChar;
- (void)replaceCharAtIndex:(unsigned int)arg0 withChar:(struct CPPDFChar *)arg1;
- (void)removeCharAtIndex:(unsigned int)arg0;
- (void)sortByAnchorXIncreasingYDecreasing;
- (void)mergeByAnchorYDecreasingXIncreasing:(id)arg0;
- (void)copyToSubsequence:(id)arg0 from:(unsigned int)arg1 length:(unsigned int)arg2;
- (void)copyToSubsequence:(id)arg0 ifTrue:(/* block */ id *)arg1 passing:(void *)arg2;
- (char)removeToSubsequence:(id)arg0 ifTrue:(/* block */ id *)arg1 passing:(void *)arg2;
- (char)mapWithIndex:(/* block */ id *)arg0 passing:(void *)arg1;
- (char)mapWithIndex:(/* block */ id *)arg0 from:(unsigned int)arg1 length:(unsigned int)arg2 passing:(void *)arg3;
- (char)mapToPairs:(/* block */ id *)arg0 passing:(void *)arg1;
- (char)mapToPairsWithIndex:(/* block */ id *)arg0 passing:(void *)arg1;
- (void)resize:(unsigned int)arg0;
- (void)finalize;

@end
