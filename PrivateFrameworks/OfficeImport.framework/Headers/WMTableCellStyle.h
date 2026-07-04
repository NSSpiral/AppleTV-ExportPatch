/* Runtime dump - WMTableCellStyle
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WMTableCellStyle : WMStyle
{
    double mLeftPadding;
    double mRightPadding;
}

+ (WMTableCellStyle *)dominantColorOf:(id)arg0;
+ (WMTableCellStyle *)resolveStyleColorWithPercentage:(float)arg0 shading:(WDShading *)arg1;
+ (WMTableCellStyle *)resolveStyleColorWithPercentage:(float)arg0 foregroundColor:(UIColor *)arg1 backgroundColor:(UIColor *)arg2;
+ (float)resolveColorValueWithPercentage:(float)arg0 foregroundComponent:(float)arg1 backgroundComponent:(float)arg2;

- (double)rightPadding;
- (void)addTableCellStyleProperties:(NSDictionary *)arg0;
- (void)addTableCellProperties:(NSDictionary *)arg0;
- (WMTableCellStyle *)initWithTableCellProperties:(NSDictionary *)arg0;
- (double)leftPadding;

@end
