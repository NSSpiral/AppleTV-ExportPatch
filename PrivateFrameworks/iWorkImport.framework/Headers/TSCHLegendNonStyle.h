/* Runtime dump - TSCHLegendNonStyle
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHLegendNonStyle : TSCHBaseStyle

+ (TSCHLegendNonStyle *)defaultStyleWithContext:(NSObject *)arg0;
+ (TSCHLegendNonStyle *)defaultValueForProperty:(int)arg0;
+ (int)defaultIntValueForProperty:(int)arg0;
+ (float)defaultFloatValueForProperty:(int)arg0;
+ (NSDictionary *)imageFillProperties;
+ (int)muxDefaultPropertyForSpecificProperty:(int)arg0;
+ (NSDictionary *)properties;

- (TSCHLegendNonStyle *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (TSCHLegendNonStyle *)initWithContext:(NSObject *)arg0 name:(NSString *)arg1 overridePropertyMap:(TSSPropertyMap *)arg2 isVariation:(char)arg3;
- (NSObject *)mixedObjectWithFraction:(float)arg0 ofObject:(NSObject *)arg1;
- (int)mixingTypeWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (TSCHLegendNonStyle *)initFromPreUFFArchiveWithUnarchiver:(NSObject *)arg0;

@end
