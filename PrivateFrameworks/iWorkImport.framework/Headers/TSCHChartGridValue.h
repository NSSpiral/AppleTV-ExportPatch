/* Runtime dump - TSCHChartGridValue
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartGridValue : NSObject

+ (TSCHChartGridValue *)durationValueWithDouble:(double)arg0;
+ (TSCHChartGridValue *)dateValueWithDouble:(double)arg0;
+ (TSCHChartGridValue *)numberValueWithDouble:(double)arg0;
+ (NSDate *)dateValueWithNSDate:(NSDate *)arg0;
+ (TSCHChartGridValue *)NSDateFromGridValue:(id)arg0;
+ (TSCHChartGridValue *)NSDateConvertedFromGridValue:(id)arg0;
+ (TSCHChartGridValue *)instanceWithArchive:(struct GridValue *)arg0;
+ (void)saveGridValue:(id)arg0 toArchive:(struct GridValue *)arg1;

- (TSCHChartGridValue *)init;
- (TSCHChartGridValue *)initWithArchive:(struct GridValue *)arg0;

@end
