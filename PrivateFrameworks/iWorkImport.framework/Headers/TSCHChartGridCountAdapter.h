/* Runtime dump - TSCHChartGridCountAdapter
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartGridCountAdapter : TSCHChartGridAdapter
{
    char mCountFromOne;
    unsigned int mIndexFactor;
}

@property (nonatomic) char countFromOne;
@property (nonatomic) unsigned int indexFactor;

- (id *)valuesAtIndexes:(struct _NSRange)arg0;
- (char)countFromOne;
- (void)setCountFromOne:(char)arg0;
- (unsigned int)indexFactor;
- (void)setIndexFactor:(unsigned int)arg0;
- (TSCHChartGridCountAdapter *)initWithCount:(unsigned int)arg0;
- (unsigned int)count;
- (void)setValue:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (NSObject *)valueAtIndex:(unsigned int)arg0;

@end
