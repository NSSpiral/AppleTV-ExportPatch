/* Runtime dump - TSDMediaStyle
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDMediaStyle : TSSStyle <TSDMixing, TSSPreset>

@property (readonly, nonatomic) NSString * presetKind;

+ (TSDMediaStyle *)defaultValueForProperty:(int)arg0;
+ (float)defaultFloatValueForProperty:(int)arg0;
+ (char)validateFloatValue:(float *)arg0 forProperty:(int)arg1;
+ (TSDMediaStyle *)propertiesAllowingNSNull;
+ (NSObject *)imageStylePresetStyleDescriptor;
+ (NSObject *)movieStylePresetStyleDescriptor;
+ (void)loadMediaStylePropertiesIntoPropertyMap:(NSObject *)arg0 fromArchive:(struct MediaStylePropertiesArchive *)arg1 unarchiver:(struct MediaStylePropertiesArchive)arg2;
+ (void)saveMediaStylePropertyMap:(NSObject *)arg0 toArchive:(struct MediaStylePropertiesArchive *)arg1 archiver:(NSObject *)arg2;
+ (void)initialize;
+ (NSDictionary *)properties;

- (TSDMediaStyle *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)saveToArchive:(struct MediaStyleArchive *)arg0 archiver:(NSObject *)arg1;
- (void)loadFromArchive:(struct MediaStyleArchive *)arg0 unarchiver:(struct MediaStyleArchive)arg1;
- (NSString *)presetKind;
- (NSObject *)mixedObjectWithFraction:(float)arg0 ofObject:(NSObject *)arg1;
- (int)mixingTypeWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (NSObject *)boxedValueForProperty:(int)arg0 oldBoxedValue:(id)arg1 transformedByTransform:(struct CGAffineTransform)arg2;
- (SEL)mapThemePropertyMapSelector;

@end
