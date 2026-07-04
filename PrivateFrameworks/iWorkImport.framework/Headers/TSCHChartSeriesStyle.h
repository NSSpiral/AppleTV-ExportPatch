/* Runtime dump - TSCHChartSeriesStyle
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartSeriesStyle : TSCHBaseStyle

+ (TSCHChartSeriesStyle *)defaultStyleWithContext:(NSObject *)arg0;
+ (TSCHChartSeriesStyle *)presetStyleDescriptorForOrdinal:(unsigned int)arg0;
+ (NSObject *)identifierForRoleIndex:(unsigned int)arg0 ordinal:(unsigned int)arg1;
+ (TSCHChartSeriesStyle *)defaultValueForProperty:(int)arg0;
+ (int)defaultIntValueForProperty:(int)arg0;
+ (float)defaultFloatValueForProperty:(int)arg0;
+ (NSString *)bootstrappedSeriesStyleWithContext:(NSObject *)arg0 seriesIndex:(unsigned int)arg1;
+ (UIImage *)getURLForImage:(UIImage *)arg0;
+ (NSDictionary *)imageFillProperties;
+ (int)muxDefaultPropertyForSpecificProperty:(int)arg0;
+ (NSDictionary *)properties;

- (TSCHChartSeriesStyle *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (TSCHChartSeriesStyle *)initWithContext:(NSObject *)arg0 name:(NSString *)arg1 overridePropertyMap:(TSSPropertyMap *)arg2 isVariation:(char)arg3;
- (NSObject *)mixedObjectWithFraction:(float)arg0 ofObject:(NSObject *)arg1;
- (int)mixingTypeWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (TSCHChartSeriesStyle *)initFromPreUFFArchiveWithUnarchiver:(NSObject *)arg0;
- (void)p_upgradeMixedChartProperties:(NSDictionary *)arg0;
- (void)p_upgradeSeparateVisibilityProperties:(NSDictionary *)arg0;
- (void)p_upgrade3DChartProperties:(NSDictionary *)arg0;
- (void)p_upgradeRemoveShadowEnabledPropertyUsage:(id)arg0;
- (void)p_upgrade3DFillSubclassTSDFill:(id)arg0;
- (void)p_upgradeBubbleChartProperties:(NSDictionary *)arg0;

@end
