/* Runtime dump - GQDChartLegend
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDChartLegend : GQDGraphic
{
    GQDChart * mChart;
    char mIsChartRetained;
}

+ (struct StateSpec *)stateForReading;

- (NSObject *)graphicStyle;
- (void)dealloc;
- (BOOL)chart;

@end
