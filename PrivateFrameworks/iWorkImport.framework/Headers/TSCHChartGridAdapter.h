/* Runtime dump - TSCHChartGridAdapter
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartGridAdapter : NSObject <NSFastEnumeration>
{
    TSCHChartGrid * mGrid;
    unsigned int mIndex;
}

@property (readonly, nonatomic) TSCHChartGrid * grid;
@property (retain, nonatomic) NSString * name;

- (TSCHChartGridAdapter *)initWithChartGrid:(TSCHChartGrid *)arg0 index:(unsigned int)arg1;
- (id *)valuesAtIndexes:(struct _NSRange)arg0;
- (unsigned int)countByEnumeratingWithState:(struct ? *)arg0 objects:(id *)arg1 count:(unsigned int)arg2;
- (void)dealloc;
- (unsigned int)count;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (TSCHChartGrid *)grid;
- (void)setValue:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (NSObject *)valueAtIndex:(unsigned int)arg0;

@end
