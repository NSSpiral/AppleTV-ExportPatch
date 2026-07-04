/* Runtime dump - CHDChartTypeWithGrouping
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDChartTypeWithGrouping : CHDChartType
{
    int mGrouping;
}

- (void)setGrouping:(int)arg0;
- (int)grouping;
- (CHDChartTypeWithGrouping *)initWithChart:(GQHChart *)arg0;
- (BOOL)isGroupingStacked;
- (NSString *)chdGroupingString;

@end
