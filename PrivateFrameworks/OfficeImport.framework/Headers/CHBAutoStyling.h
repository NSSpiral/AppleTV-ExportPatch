/* Runtime dump - CHBAutoStyling
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHBAutoStyling : CHAutoStyling <CHAutoStyling>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSObject *)fillWithColorIndex:(unsigned int)arg0;
- (NSObject *)strokeWithColorIndex:(int)arg0;
- (id)autoFill;
- (id)autoStroke;
- (void)resolvedGraphicProperties:(NSDictionary *)arg0 autoFill:(id)arg1 autoStroke:(id)arg2 autoShadow:(char)arg3 nullFill:(OADNullFill *)arg4 nullStroke:(id)arg5 nullShadow:(char)arg6;
- (id)autoSeriesFill:(unsigned int)arg0;
- (OADStroke *)autoStrokeForSeriesIndex:(unsigned int)arg0;
- (id)autoSeriesBorderStroke;
- (void)resolveAxisGraphicProperties:(OADGraphicProperties *)arg0;
- (void)resolveMinorGridLinesGraphicProperties:(OADGraphicProperties *)arg0;
- (void)resolveMajorGridLinesGraphicProperties:(OADGraphicProperties *)arg0;
- (void)resolveWallGraphicProperties:(OADGraphicProperties *)arg0;
- (void)resolveFloorGraphicProperties:(OADGraphicProperties *)arg0;
- (void)resolveGraphicPropertiesOfErrorBar:(OADGraphicProperties *)arg0 forSeriesIndex:(unsigned int)arg1;
- (void)resolveLegendGraphicProperties:(OADGraphicProperties *)arg0;
- (void)resolvePlotAreaGraphicProperties:(OADGraphicProperties *)arg0;
- (void)resolveGraphicPropertiesOfSeries:(OADGraphicProperties *)arg0 forSeriesIndex:(unsigned int)arg1;
- (void)resolveChartAreaGraphicProperties:(OADGraphicProperties *)arg0;
- (OADFill *)autoTextFill;
- (void)resolveMarker:(CHDMarker *)arg0 withSeriesGraphicProperties:(OADGraphicProperties *)arg1 forSeriesIndex:(unsigned int)arg2;
- (void)resolveGraphicPropertiesOfSeries:(OADGraphicProperties *)arg0 forSeriesIndex:(unsigned int)arg1 isLine:(BOOL)arg2;
- (void)resolveGraphicPropertiesOfTrendline:(OADGraphicProperties *)arg0 forSeriesIndex:(unsigned int)arg1;

@end
