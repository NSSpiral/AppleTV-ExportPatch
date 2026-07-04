/* Runtime dump - EBEscherShape
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EBEscherShape : ESDObject
{
    NSData * mChartData;
    NSMutableArray * mChartColorLocators;
    char mShowLegend;
    CHDChart * mChart;
}

- (void)dealloc;
- (void)setChart:(BOOL)arg0;
- (BOOL)chart;
- (NSString *)chartData;
- (void)setChartData:(NSString *)arg0;
- (id)chartColorLocators;
- (void)setChartColorLocators:(id)arg0;
- (char)showLegend;
- (void)setShowLegend:(char)arg0;

@end
