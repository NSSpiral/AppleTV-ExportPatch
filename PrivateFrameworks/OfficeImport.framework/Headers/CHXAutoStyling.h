/* Runtime dump - CHXAutoStyling
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHXAutoStyling : CHAutoStyling <CHAutoStyling>
{
    char __autoChartFillIsHollow;
    char __autoChartStrokeIsHollow;
}

@property char _autoChartFillIsHollow;
@property char _autoChartStrokeIsHollow;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)colorWithSchemeColorId:(int)arg0 transformType:(int)arg1 transformValue:(float)arg2;
+ (int)styleRowWithStyleId:(int)arg0;
+ (int)styleColumnWithStyleId:(int)arg0;
+ (NSObject *)colorWithSchemeColorId:(int)arg0 tint:(float)arg1;
+ (NSObject *)colorWithSchemeColorId:(int)arg0 shade:(float)arg1;
+ (int)styleIdWithStyleRow:(int)arg0 styleColumn:(int)arg1;

- (OADStroke *)autoStrokeForSeriesIndex:(unsigned int)arg0;
- (void)resolveAxisGraphicProperties:(OADGraphicProperties *)arg0;
- (void)resolveMinorGridLinesGraphicProperties:(OADGraphicProperties *)arg0;
- (void)resolveMajorGridLinesGraphicProperties:(OADGraphicProperties *)arg0;
- (void)resolveWallGraphicProperties:(OADGraphicProperties *)arg0;
- (void)resolveFloorGraphicProperties:(OADGraphicProperties *)arg0;
- (void)resolveGraphicPropertiesOfErrorBar:(OADGraphicProperties *)arg0 forSeriesIndex:(unsigned int)arg1;
- (void)resolveLegendGraphicProperties:(OADGraphicProperties *)arg0;
- (void)resolvePlotAreaGraphicProperties:(OADGraphicProperties *)arg0;
- (void)resolveGraphicPropertiesOfSeries:(OADGraphicProperties *)arg0 forSeriesIndex:(unsigned int)arg1;
- (int)styleId;
- (int)styleColumn;
- (NSObject *)autoColorOfFirstColumnSeriesWithIndex:(unsigned int)arg0 seriesCount:(unsigned int)arg1;
- (char)_autoChartFillIsHollow;
- (UIColor *)autoChartAreaFillColor;
- (unsigned long)autoFloorAndChartAreaStrokeIndex;
- (UIColor *)autoChartAreaAndDataTableAndFloorStrokeColor;
- (unsigned long)autoFloorAndWallsFillIndex;
- (UIColor *)autoFloorAndWallsAndPlotArea2DFillColor;
- (UIColor *)autoAxisAndMajorGridColor;
- (UIColor *)autoMinorGridColor;
- (NSObject *)autoColorOfSeriesWithIndex:(unsigned int)arg0;
- (int)styleRow;
- (void)setDefaultErrorBarPropertiesInGraphicProperties:(NSDictionary *)arg0;
- (void)set_autoChartFillIsHollow:(char)arg0;
- (void)set_autoChartStrokeIsHollow:(char)arg0;
- (UIColor *)autoOtherStrokeColor;
- (char)_autoChartStrokeIsHollow;
- (void)setAutoChartFillIsHollow:(char)arg0;
- (void)setAutoChartStrokeIsHollow:(char)arg0;
- (void)resolveChartAreaGraphicProperties:(OADGraphicProperties *)arg0;
- (OADFill *)autoTextFill;
- (void)resolveMarker:(CHDMarker *)arg0 withSeriesGraphicProperties:(OADGraphicProperties *)arg1 forSeriesIndex:(unsigned int)arg2;
- (void)resolveGraphicPropertiesOfSeries:(OADGraphicProperties *)arg0 forSeriesIndex:(unsigned int)arg1 isLine:(BOOL)arg2;
- (void)resolveGraphicPropertiesOfTrendline:(OADGraphicProperties *)arg0 forSeriesIndex:(unsigned int)arg1;

@end
