/* Runtime dump - TSWPListStyle
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPListStyle : TSSStyle <TSSPreset>

@property (readonly, nonatomic) NSString * presetKind;

+ (NSArray *)lanaguageSpecificStylesForLanguages:(id)arg0 theme:(TSSTheme *)arg1 stylesheet:(TSSStylesheet *)arg2;
+ (NSObject *)presetStyleDescriptor;
+ (TSWPListStyle *)defaultStyleWithContext:(NSObject *)arg0;
+ (TSWPListStyle *)defaultPropertyMap;
+ (TSWPListStyle *)propertiesAllowingNSNull;
+ (char)isDefaultMissingBulletImage:(UIImage *)arg0;
+ (int)pLabelTypeForLevel:(unsigned int)arg0 forPropertyMapping:(NSPropertyMapping *)arg1 includeDegenerateLevels:(char)arg2;
+ (int)firstLabelTypeForPropertyMapping:(id)arg0;
+ (void)pGetDefaultTextIndentFloats:(id)arg0;
+ (int)defaultLabelNumberType;
+ (char)defaultTieredNumber;
+ (TSWPListStyle *)defaultLabelString;
+ (TSWPListStyle *)defaultLabelIndents;
+ (NSObject *)pLabelTypeArrayForType:(int)arg0;
+ (TSWPListStyle *)defaultLabelGeometries;
+ (NSObject *)pDefaultLabelValuesForLabelTypeProperty:(int)arg0;
+ (TSWPListStyle *)defaultMissingBulletImage;
+ (TSWPListStyle *)numberedListStyleForPresets:(id)arg0;
+ (NSObject *)nameForLanguageSpecificListStyle:(int)arg0;
+ (NSObject *)listStyleWithNumberType:(int)arg0 inStyleSheet:(NSObject *)arg1 withNumberedPresetStyle:(NSObject *)arg2;
+ (NSObject *)propertyMapForListNumberType:(int)arg0;
+ (TSWPListStyle *)defaultLabelImages;
+ (TSWPListStyle *)defaultLabelNumberTypes;
+ (TSWPListStyle *)defaultLabelTieredNumbers;
+ (TSWPListStyle *)defaultLabelStrings;
+ (TSWPListStyle *)defaultLabelTypes;
+ (TSWPListStyle *)defaultTextIndents;
+ (NSDictionary *)stickyOverrideProperties;
+ (NSArray *)textInspectorBulletStrings;
+ (NSArray *)additionalBulletStrings;
+ (int)effectiveTypeForLevel:(unsigned int)arg0 forPropertyMapping:(NSPropertyMapping *)arg1;
+ (int)labelTypeForLevel:(unsigned int)arg0 forPropertyMapping:(NSPropertyMapping *)arg1;
+ (TSWPListStyle *)defaultStyleWithContext:(NSObject *)arg0 type:(int)arg1;
+ (NSString *)harvardStyleWithContext:(NSObject *)arg0;
+ (TSWPListStyle *)textBulletListStyleForPresets:(id)arg0;
+ (TSWPListStyle *)listStyleWithTextBullet:(id)arg0 inStyleSheet:(NSObject *)arg1 withTextBulletPresetStyle:(NSObject *)arg2;
+ (TSWPListStyle *)propertyMapForListTextBullet:(id)arg0;
+ (NSDictionary *)arrayValuedProperties;
+ (TSWPListStyle *)defaultArrayForProperty:(int)arg0;
+ (NSDictionary *)properties;

- (TSWPListStyle *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)saveToArchive:(struct ListStyleArchive *)arg0 archiver:(NSObject *)arg1;
- (TSWPListStyle *)initWithContext:(NSObject *)arg0 name:(NSString *)arg1 overridePropertyMap:(TSSPropertyMap *)arg2 isVariation:(char)arg3;
- (void)loadFromArchive:(struct ListStyleArchive *)arg0 unarchiver:(struct ListStyleArchive)arg1;
- (NSString *)presetKind;
- (NSString *)numberTypeName;
- (int)labelTypeForLevel:(unsigned int)arg0;
- (id)baseStyleForTopicNumbers;
- (int)firstLabelType;
- (int)effectiveTypeForLevel:(unsigned int)arg0;
- (id)pOverrideArrayWithValue:(id)arg0 forProperty:(int)arg1 atParagraphLevels:(id)arg2 withContext:(NSObject *)arg3;
- (NSObject *)objectForProperty:(int)arg0 atIndex:(unsigned int)arg1;
- (float)labelIndentForLevel:(unsigned int)arg0;
- (float)textIndentForLevel:(unsigned int)arg0 fontSize:(float)arg1;
- (id)overridePropertyMapWithValue:(id)arg0 forProperty:(int)arg1 atParagraphLevels:(id)arg2 withContext:(NSObject *)arg3;
- (NSObject *)boxedObjectForProperty:(int)arg0 atIndex:(unsigned int)arg1;
- (int)intValueForProperty:(int)arg0 atIndex:(unsigned int)arg1;
- (float)floatValueForProperty:(int)arg0 atIndex:(unsigned int)arg1;
- (double)doubleValueForProperty:(int)arg0 atIndex:(unsigned int)arg1;
- (float)CGFloatValueForProperty:(int)arg0 atIndex:(unsigned int)arg1;

@end
