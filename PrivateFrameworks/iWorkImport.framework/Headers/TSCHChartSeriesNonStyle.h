/* Runtime dump - TSCHChartSeriesNonStyle
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartSeriesNonStyle : TSCHBaseStyle

@property (copy, nonatomic) TSSPropertyMap * overrideMapForSameAsSource;

+ (TSCHChartSeriesNonStyle *)defaultStyleWithContext:(NSObject *)arg0;
+ (TSCHChartSeriesNonStyle *)defaultValueForProperty:(int)arg0;
+ (int)defaultIntValueForProperty:(int)arg0;
+ (float)defaultFloatValueForProperty:(int)arg0;
+ (NSDictionary *)imageFillProperties;
+ (int)muxDefaultPropertyForSpecificProperty:(int)arg0;
+ (NSDictionary *)properties;

- (TSCHChartSeriesNonStyle *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (TSCHChartSeriesNonStyle *)initWithContext:(NSObject *)arg0 name:(NSString *)arg1 overridePropertyMap:(TSSPropertyMap *)arg2 isVariation:(char)arg3;
- (NSObject *)mixedObjectWithFraction:(float)arg0 ofObject:(NSObject *)arg1;
- (int)mixingTypeWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (void)updateAfterPasteForDocumentRoot:(NSObject *)arg0 pasteboardCustomFormatList:(NSArray *)arg1;
- (TSCHChartSeriesNonStyle *)initFromPreUFFArchiveWithUnarchiver:(NSObject *)arg0;
- (void)p_upgradeMixedChartProperties:(NSDictionary *)arg0;
- (TSSPropertyMap *)overrideMapForSameAsSource;
- (void)p_upgradeSeparateVisibilityProperties:(NSDictionary *)arg0;
- (void)upgradePreU2_0CustomFormatsForDocumentRoot:(NSObject *)arg0;
- (void)setOverrideMapForSameAsSource:(TSSPropertyMap *)arg0;

@end
