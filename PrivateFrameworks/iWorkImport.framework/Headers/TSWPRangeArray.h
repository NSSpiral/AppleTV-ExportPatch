/* Runtime dump - TSWPRangeArray
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPRangeArray : NSObject <NSCopying>
{
    void * _rangeVectorOpaque;
}

@property (readonly, nonatomic) unsigned int rangeCount;
@property (readonly, nonatomic) char isEmpty;
@property (readonly, nonatomic) unsigned int start;
@property (readonly, nonatomic) unsigned int finish;

- (void)removeRange:(struct _NSRange)arg0;
- (void)enumerateRangesInRange:(struct _NSRange)arg0 usingBlock:(id /* block */)arg1;
- (TSWPRangeArray *)initWithRangeVector:(void *)arg0;
- (struct _NSRange *)rangeReferenceAtIndex:(unsigned int)arg0;
- (void)dealloc;
- (TSWPRangeArray *)init;
- (NSString *)description;
- (TSWPRangeArray *)copyWithZone:(struct _NSZone *)arg0;
- (char)isEmpty;
- (unsigned int)start;
- (unsigned int)finish;
- (void)addRange:(struct _NSRange)arg0;
- (void)enumerateRangesUsingBlock:(id /* block */)arg0;
- (unsigned int)rangeCount;
- (struct _NSRange)rangeAtIndex:(unsigned int)arg0;
- (TSWPRangeArray *)initWithRange:(struct _NSRange)arg0;

@end
