/* Runtime dump - TSCHChartAxisNonStyle
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartAxisNonStyle : TSCHBaseStyle

@property (copy, nonatomic) TSSPropertyMap * overrideMapForSameAsSource;

+ (TSCHChartAxisNonStyle *)defaultStyleWithContext:(NSObject *)arg0;
+ (TSCHChartAxisNonStyle *)defaultValueForProperty:(int)arg0;
+ (int)defaultIntValueForProperty:(int)arg0;
+ (float)defaultFloatValueForProperty:(int)arg0;
+ (NSDictionary *)imageFillProperties;
+ (int)muxDefaultPropertyForSpecificProperty:(int)arg0;
+ (NSDictionary *)properties;

- (TSCHChartAxisNonStyle *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (TSCHChartAxisNonStyle *)initWithContext:(NSObject *)arg0 name:(NSString *)arg1 overridePropertyMap:(TSSPropertyMap *)arg2 isVariation:(char)arg3;
- (void)updateAfterPasteForDocumentRoot:(NSObject *)arg0 pasteboardCustomFormatList:(NSArray *)arg1;
- (TSCHChartAxisNonStyle *)initFromPreUFFArchiveWithUnarchiver:(NSObject *)arg0;
- (TSSPropertyMap *)overrideMapForSameAsSource;
- (void)upgradePreU2_0CustomFormatsForDocumentRoot:(NSObject *)arg0;
- (void)setOverrideMapForSameAsSource:(TSSPropertyMap *)arg0;

@end
