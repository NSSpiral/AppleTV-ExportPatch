/* Runtime dump - TSCHChartSeriesAxisStorage
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartSeriesAxisStorage : NSObject
{
    TSCHChartGridAdapter * adapter;
    TSCHChartAxisID * axisID;
}

@property (retain, nonatomic) TSCHChartGridAdapter * adapter;
@property (retain, nonatomic) TSCHChartAxisID * axisID;

- (TSCHChartAxisID *)axisID;
- (NSObject *)valueAtIndex:(unsigned int)arg0 multiDataSetIndex:(unsigned int)arg1;
- (id *)valuesAtIndexes:(struct _NSRange)arg0 multiDataSetIndex:(unsigned int)arg1;
- (void)setValue:(NSObject *)arg0 atIndex:(unsigned int)arg1 multiDataSetIndex:(unsigned int)arg2;
- (void)setAdapter:(TSCHChartGridAdapter *)arg0;
- (void)setAxisID:(TSCHChartAxisID *)arg0;
- (TSCHChartGridAdapter *)adapter;
- (void)dealloc;
- (unsigned int)numberOfValues;

@end
