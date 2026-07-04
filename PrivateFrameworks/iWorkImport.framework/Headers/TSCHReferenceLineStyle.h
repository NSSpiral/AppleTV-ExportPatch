/* Runtime dump - TSCHReferenceLineStyle
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHReferenceLineStyle : TSCHBaseStyle

+ (TSCHReferenceLineStyle *)defaultStyleWithContext:(NSObject *)arg0;
+ (TSCHReferenceLineStyle *)presetStyleDescriptorForOrdinal:(unsigned int)arg0;
+ (TSCHReferenceLineStyle *)defaultStyleForPresetFromChartStyle:(NSObject *)arg0 seriesStyle:(NSObject *)arg1 paragraphStyles:(NSArray *)arg2 valueAxisStyle:(NSObject *)arg3;
+ (NSObject *)identifierForRoleIndex:(unsigned int)arg0 ordinal:(unsigned int)arg1;
+ (TSCHReferenceLineStyle *)defaultValueForProperty:(int)arg0;
+ (int)defaultIntValueForProperty:(int)arg0;
+ (float)defaultFloatValueForProperty:(int)arg0;
+ (NSDictionary *)imageFillProperties;
+ (int)muxDefaultPropertyForSpecificProperty:(int)arg0;
+ (NSDictionary *)properties;

- (TSCHReferenceLineStyle *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;

@end
