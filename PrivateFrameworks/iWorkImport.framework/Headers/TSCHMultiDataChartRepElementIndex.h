/* Runtime dump - TSCHMultiDataChartRepElementIndex
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHMultiDataChartRepElementIndex : NSObject <NSCopying>
{
    unsigned int mSeriesIndex;
    unsigned int mValueIndex;
}

@property (readonly, nonatomic) unsigned int seriesIndex;
@property (readonly, nonatomic) unsigned int valueIndex;

+ (NSObject *)repElementIndexWithSeriesIndex:(unsigned int)arg0 valueIndex:(unsigned int)arg1;

- (TSCHMultiDataChartRepElementIndex *)initWithSeriesIndex:(unsigned int)arg0 valueIndex:(unsigned int)arg1;
- (NSIndexSet *)seriesIndexSet;
- (NSIndexSet *)valueIndexSet;
- (unsigned int)valueIndex;
- (TSCHMultiDataChartRepElementIndex *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (TSCHMultiDataChartRepElementIndex *)copyWithZone:(struct _NSZone *)arg0;
- (unsigned int)seriesIndex;

@end
