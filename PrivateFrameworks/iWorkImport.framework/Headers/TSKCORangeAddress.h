/* Runtime dump - TSKCORangeAddress
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKCORangeAddress : TSKCOAddress
{
    TSURangeList * mRangeList;
}

@property (readonly, nonatomic) TSURangeList * rangeList;

- (void)saveToArchiver:(NSObject *)arg0 message:(struct Address *)arg1;
- (NSString *)pathElement;
- (TSKCORangeAddress *)initWithUnarchiver:(NSUnarchiver *)arg0 message:(struct Address *)arg1;
- (TSURangeList *)rangeList;
- (NSArray *)addressWithNewRangeList:(NSArray *)arg0;
- (TSKCORangeAddress *)initWithParent:(NSObject *)arg0 rangeList:(TSURangeList *)arg1;
- (TSKCORangeAddress *)initWithParent:(NSObject *)arg0 range:(struct _NSRange)arg1;
- (TSKCORangeAddress *)initWithParent:(NSObject *)arg0 location:(unsigned int)arg1 length:(unsigned int)arg2;
- (NSObject *)addressWithNewRange:(struct _NSRange)arg0;
- (struct _NSRange)onlyRange;
- (unsigned int)totalLengthOfRanges;
- (void)dealloc;

@end
