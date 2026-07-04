/* Runtime dump - TSCHChartStyle
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartStyle : TSCHBaseStyle

+ (NSObject *)presetStyleDescriptor;
+ (TSCHChartStyle *)defaultStyleWithContext:(NSObject *)arg0;
+ (NSObject *)identifierForRoleIndex:(unsigned int)arg0;
+ (TSCHChartStyle *)defaultValueForProperty:(int)arg0;
+ (int)defaultIntValueForProperty:(int)arg0;
+ (float)defaultFloatValueForProperty:(int)arg0;
+ (TSCHChartStyle *)defaultParagraphStyleWithContext:(NSObject *)arg0;
+ (NSDictionary *)imageFillProperties;
+ (int)muxDefaultPropertyForSpecificProperty:(int)arg0;
+ (NSDictionary *)properties;

- (TSCHChartStyle *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (TSCHChartStyle *)initWithContext:(NSObject *)arg0 name:(NSString *)arg1 overridePropertyMap:(TSSPropertyMap *)arg2 isVariation:(char)arg3;
- (NSObject *)mixedObjectWithFraction:(float)arg0 ofObject:(NSObject *)arg1;
- (int)mixingTypeWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (TSCHChartStyle *)initFromPreUFFArchiveWithUnarchiver:(NSObject *)arg0;
- (void)p_upgradeRemoveShadowEnabledPropertyUsage:(id)arg0;

@end
