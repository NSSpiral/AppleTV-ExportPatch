/* Runtime dump - TSWPRangeMap
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPRangeMap : NSObject
{
    struct _NSRange _subRange;
    struct vector<_TSWPCharIndexAndAffinity, std::__1::allocator<_TSWPCharIndexAndAffinity> > _unmappedIndexes;
    struct vector<_TSWPCharIndexAndAffinity, std::__1::allocator<_TSWPCharIndexAndAffinity> > _mappedIndexes;
}

- (struct _NSRange)mappedCharRange:(struct _NSRange)arg0;
- (unsigned int)unmappedCharIndex:(unsigned int)arg0;
- (struct _NSRange)unmappedCharRange:(struct _NSRange)arg0;
- (unsigned int)mappedCharIndex:(unsigned int)arg0;
- (TSWPRangeMap *)initWithSubRange:(struct _NSRange)arg0 unmappedIndexes:(struct vector<unsigned int, std::__1::allocator<unsigned int> > *)arg1 affinity:(struct vector<unsigned int, std::__1::allocator<unsigned int> >)arg2;
- (unsigned int)p_extendLeftMappedIndex:(unsigned int)arg0;
- (unsigned int)p_extendRightMappedIndex:(unsigned int)arg0;
- (TSWPRangeMap *)initWithSubRange:(struct _NSRange)arg0 unmappedPairIndexes:(struct vector<unsigned int, std::__1::allocator<unsigned int> > *)arg1;
- (TSWPRangeMap *)initWithSubRange:(struct _NSRange)arg0 unmappedIndexes:(struct vector<unsigned int, std::__1::allocator<unsigned int> > *)arg1 isBackwardAffinities:(struct vector<unsigned int, std::__1::allocator<unsigned int> >)arg2;
- (void)adjustByDelta:(int)arg0;
- (void).cxx_construct;
- (void).cxx_destruct;

@end
