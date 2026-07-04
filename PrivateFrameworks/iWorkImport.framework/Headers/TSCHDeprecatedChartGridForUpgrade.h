/* Runtime dump - TSCHDeprecatedChartGridForUpgrade
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHDeprecatedChartGridForUpgrade : TSPObject
{
    TSCHChartGrid * mGrid;
}

@property (readonly, retain, nonatomic) TSCHChartGrid * grid;

- (TSCHDeprecatedChartGridForUpgrade *)initFromUnarchiver:(NSObject *)arg0;
- (void)dealloc;
- (TSCHChartGrid *)grid;

@end
