/* Runtime dump - TSKShuffleMapping
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKShuffleMapping : NSObject <NSCopying>
{
    unsigned short mStartIndex;
    unsigned short mEndIndex;
    unsigned short * mMapping;
    char mIsVertical;
    char mIsMoveOperation;
    unsigned short mFirstMovedIndex;
    unsigned short mDestinationIndexForMove;
    unsigned short mNumberOfIndicesMoved;
}

@property (readonly, nonatomic) unsigned short startIndex;
@property (readonly, nonatomic) unsigned short endIndex;
@property (readonly, nonatomic) unsigned short * mapping;
@property (readonly, nonatomic) unsigned short mappingSize;
@property (readonly, nonatomic) char isIdentityMapping;

- (void)saveToArchive:(struct ShuffleMappingArchive *)arg0;
- (unsigned short)mapIndex:(unsigned short)arg0;
- (unsigned short)reverseMapIndex:(unsigned short)arg0;
- (struct ?)mapCoordinate:(struct ?)arg0;
- (struct ?)reverseMapCoordinate:(struct ?)arg0;
- (TSKShuffleMapping *)initWithStartIndex:(unsigned short)arg0 endIndex:(unsigned short)arg1 mapping:(unsigned short *)arg2;
- (unsigned short)mappingSize;
- (TSKShuffleMapping *)initWithStartIndex:(unsigned short)arg0 endIndex:(unsigned short)arg1;
- (TSKShuffleMapping *)initForMovedIndicesStartingAtIndex:(unsigned short)arg0 destinationIndex:(unsigned short)arg1 numberOfIndices:(unsigned short)arg2 vertical:(char)arg3;
- (id)copyInverse;
- (char)isMove;
- (char)isIdentityMapping;
- (void)enumerateMappingRange:(struct _NSRange)arg0 usingBlock:(id /* block */)arg1;
- (void)insert:(unsigned short)arg0 indicesAtIndex:(unsigned short)arg1 insertingBefore:(char)arg2;
- (void)remove:(unsigned short)arg0 indicesAtIndex:(unsigned short)arg1;
- (void)swapIndex:(unsigned short)arg0 withIndex:(unsigned short)arg1;
- (void)dealloc;
- (TSKShuffleMapping *)copyWithZone:(struct _NSZone *)arg0;
- (char)isVertical;
- (unsigned short)startIndex;
- (unsigned short)endIndex;
- (TSKShuffleMapping *)initWithArchive:(struct ShuffleMappingArchive *)arg0;
- (unsigned short *)mapping;

@end
