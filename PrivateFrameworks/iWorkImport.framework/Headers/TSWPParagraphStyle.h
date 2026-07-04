/* Runtime dump - TSWPParagraphStyle
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPParagraphStyle : TSSStyle <TSSPreset, TSDMixing>
{
    void * _coreTextParagraphStyle;
    struct __CFDictionary * _styleCache;
    struct __CFDictionary * _scalePercentStyleCaches;
}

@property (readonly, nonatomic) NSString * presetKind;

+ (NSObject *)presetStyleDescriptor;
+ (TSWPParagraphStyle *)defaultStyleWithContext:(NSObject *)arg0;
+ (TSWPParagraphStyle *)presetStyleDescriptorForOrdinal:(unsigned int)arg0;
+ (TSWPParagraphStyle *)defaultValueForProperty:(int)arg0;
+ (int)defaultIntValueForProperty:(int)arg0;
+ (float)defaultFloatValueForProperty:(int)arg0;
+ (TSWPParagraphStyle *)defaultPropertyMap;
+ (TSWPParagraphStyle *)propertiesAllowingNSNull;
+ (TSWPParagraphStyle *)paragraphPropertiesAllowingNSNull;
+ (NSString *)p_normalDecimalSeparator;
+ (NSDictionary *)deprecatedProperties;
+ (NSObject *)styleSummaryForPropertyMap:(NSObject *)arg0;
+ (NSDictionary *)nonEmphasisParagraphProperties;
+ (void)initialize;
+ (NSDictionary *)properties;
+ (NSDictionary *)paragraphProperties;

- (TSWPParagraphStyle *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)saveToArchive:(struct ParagraphStyleArchive *)arg0 archiver:(NSObject *)arg1;
- (void)loadFromArchive:(struct ParagraphStyleArchive *)arg0 unarchiver:(struct ParagraphStyleArchive)arg1;
- (NSString *)presetKind;
- (void)setInitialListStyle:(TSWPSpecListStyle *)arg0;
- (TSWPSpecListStyle *)initialListStyle;
- (void)localizeForBidi:(char)arg0;
- (NSObject *)fullPropertyMap;
- (NSObject *)mixedObjectWithFraction:(float)arg0 ofObject:(NSObject *)arg1;
- (int)mixingTypeWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (NSObject *)boxedValueForProperty:(int)arg0 oldBoxedValue:(id)arg1 transformedByTransform:(struct CGAffineTransform)arg2;
- (SEL)mapThemePropertyMapSelector;
- (char)transformsFontSizes;
- (void)setOverridePropertyMap:(TSSPropertyMap *)arg0;
- (TSWPSpecParagraphStyle *)followingParagraphStyle;
- (struct __CTFont *)findCachedFontForCharacterStyle:(NSObject *)arg0 scalePercent:(unsigned int)arg1;
- (void)clearStyleCaches;
- (struct __CTParagraphStyle *)p_createCoreTextParagraphStyleWithCharacterStyle:(TSWPCharacterStyle *)arg0 writingDirection:(int)arg1;
- (struct __CFDictionary *)p_newCoreTextCharacterStyle:(NSObject *)arg0 allowLigatures:(char)arg1 scalePercent:(unsigned int)arg2;
- (struct __CFDictionary *)getTypesetterAttributes:(NSDictionary *)arg0 scalePercent:(unsigned int)arg1 isRightToLeft:(char)arg2;
- (char)p_coreTextWritingDirectionFromWPWritingDirection:(int)arg0;
- (struct ParagraphStyleArchive *)paragraphStyleArchiveFromUnarchiver:(id)arg0;
- (void)localizeForRightToLeft;
- (id)styleSummary;
- (void)dealloc;
- (float)ascent;

@end
