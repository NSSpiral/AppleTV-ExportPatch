/* Runtime dump - TSCHChartAxisStyle
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartAxisStyle : TSCHBaseStyle

+ (TSCHChartAxisStyle *)defaultStyleWithContext:(NSObject *)arg0;
+ (NSObject *)identifierForValueStyleWithRoleIndex:(unsigned int)arg0 ordinal:(unsigned int)arg1;
+ (TSCHChartAxisStyle *)presetStyleDescriptorForValueStyleOrdinal:(unsigned int)arg0;
+ (NSObject *)identifierForCategoryStyleWithRoleIndex:(unsigned int)arg0 ordinal:(unsigned int)arg1;
+ (TSCHChartAxisStyle *)presetStyleDescriptorForCategoryStyleOrdinal:(unsigned int)arg0;
+ (TSCHChartAxisStyle *)defaultValueForProperty:(int)arg0;
+ (int)defaultIntValueForProperty:(int)arg0;
+ (float)defaultFloatValueForProperty:(int)arg0;
+ (NSDictionary *)imageFillProperties;
+ (int)muxDefaultPropertyForSpecificProperty:(int)arg0;
+ (NSDictionary *)properties;

- (TSCHChartAxisStyle *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (TSCHChartAxisStyle *)initWithContext:(NSObject *)arg0 name:(NSString *)arg1 overridePropertyMap:(TSSPropertyMap *)arg2 isVariation:(char)arg3;
- (NSObject *)mixedObjectWithFraction:(float)arg0 ofObject:(NSObject *)arg1;
- (int)mixingTypeWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (TSCHChartAxisStyle *)initFromPreUFFArchiveWithUnarchiver:(NSObject *)arg0;
- (void)p_upgradeRemoveShadowEnabledPropertyUsage:(id)arg0;
- (void)p_upgrade3DChartPropertiesFrom2DProperties:(NSDictionary *)arg0;

@end
