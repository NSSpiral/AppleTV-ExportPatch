/* Runtime dump - TSURangeList
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSURangeList : NSObject
{
    struct vector<_NSRange, std::__1::allocator<_NSRange> > mRangeList;
}

@property (readonly, nonatomic) unsigned int count;

- (TSURangeList *)initWithRangeList:(TSURangeList *)arg0;
- (void)replaceWithRange:(struct _NSRange)arg0 atIndex:(unsigned int)arg1;
- (void)consolidate;
- (unsigned int)count;
- (TSURangeList *)initWithString:(NSString *)arg0;
- (NSString *)stringValue;
- (void).cxx_construct;
- (void).cxx_destruct;
- (void)addRange:(struct _NSRange)arg0;
- (void)reverse;
- (struct _NSRange)rangeAtIndex:(unsigned int)arg0;
- (TSURangeList *)initWithRange:(struct _NSRange)arg0;
- (void)insertRange:(struct _NSRange)arg0 atIndex:(unsigned int)arg1;
- (void)removeRangeAtIndex:(unsigned int)arg0;

@end
