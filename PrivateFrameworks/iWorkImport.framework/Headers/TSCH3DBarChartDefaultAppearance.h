/* Runtime dump - TSCH3DBarChartDefaultAppearance
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DBarChartDefaultAppearance : NSObject <TSCHUnretainedParent, TSCH3DBarChartAppearance>
{
    TSCH3DChartBarElementProperties * mProperties;
}

+ (struct BarExtrusionDetails)defaultDetails;
+ (int)shapeType;

- (void)clearParent;
- (float)maxValueForSeries:(int)arg0;
- (float)chartMinZForScene:(NSObject *)arg0;
- (float)depthForScene:(NSObject *)arg0;
- (float)signedValueForSeries:(id)arg0 index:(struct tvec2<int> *)arg1;
- (void)dealloc;
- (TSCH3DBarChartDefaultAppearance *)initWithProperties:(NSDictionary *)arg0;
- (char)isCircular;

@end
