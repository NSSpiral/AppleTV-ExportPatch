/* Runtime dump - TSWPDeletionRangeMap
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPDeletionRangeMap : NSObject
{
    unsigned int _subRangeStart;
    TSWPRangeArray * _removedRanges;
}

- (TSWPDeletionRangeMap *)initWithSubRange:(struct _NSRange)arg0 removeRanges:(NSArray *)arg1;
- (NSObject *)inverseRangesInStorageRange:(struct _NSRange)arg0;
- (struct _NSRange)mappedCharRange:(struct _NSRange)arg0;
- (unsigned int)unmappedCharIndex:(unsigned int)arg0;
- (struct _NSRange)unmappedCharRange:(struct _NSRange)arg0;
- (unsigned int)mappedCharIndex:(unsigned int)arg0;
- (void)adjustByDelta:(int)arg0;
- (char)containsCharIndex:(unsigned int)arg0;
- (void)dealloc;

@end
