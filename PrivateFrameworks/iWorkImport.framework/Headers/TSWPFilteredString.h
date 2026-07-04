/* Runtime dump - TSWPFilteredString
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPFilteredString : NSString
{
    unsigned int _length;
    NSString * _sourceString;
    TSWPDeletionRangeMap * _rangeMap;
    TSWPRangeArray * _sourceRanges;
}

@property (nonatomic) NSString * sourceString;
@property (retain, nonatomic) TSWPDeletionRangeMap * rangeMap;
@property (readonly, retain, nonatomic) TSWPRangeArray * sourceRanges;

- (NSString *)sourceString;
- (TSWPDeletionRangeMap *)rangeMap;
- (TSWPRangeArray *)sourceRanges;
- (TSWPFilteredString *)initWithString:(NSString *)arg0 subrange:(struct _NSRange)arg1 removeRanges:(NSArray *)arg2;
- (unsigned int)charIndexMappedToStorage:(unsigned int)arg0;
- (unsigned int)charIndexMappedFromStorage:(unsigned int)arg0;
- (struct _NSRange)charRangeMappedToStorage:(struct _NSRange)arg0;
- (struct _NSRange)charRangeMappedFromStorage:(struct _NSRange)arg0;
- (void)setSourceString:(NSString *)arg0;
- (void)setRangeMap:(TSWPDeletionRangeMap *)arg0;
- (void)dealloc;
- (unsigned int)length;
- (unsigned short)characterAtIndex:(unsigned int)arg0;
- (void)getCharacters:(unsigned short *)arg0 range:(struct _NSRange)arg1;

@end
