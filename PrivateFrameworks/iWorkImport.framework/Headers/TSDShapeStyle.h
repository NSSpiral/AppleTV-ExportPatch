/* Runtime dump - TSDShapeStyle
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDShapeStyle : TSSStyle <TSSPreset, TSDMixing>

@property (readonly, nonatomic) NSString * presetKind;

+ (TSDShapeStyle *)defaultValueForProperty:(int)arg0;
+ (float)defaultFloatValueForProperty:(int)arg0;
+ (char)validateFloatValue:(float *)arg0 forProperty:(int)arg1;
+ (void)loadShapeStylePropertiesIntoPropertyMap:(NSObject *)arg0 fromArchive:(struct ShapeStylePropertiesArchive *)arg1 unarchiver:(struct ShapeStylePropertiesArchive)arg2;
+ (void)saveShapeStylePropertyMap:(NSObject *)arg0 toArchive:(struct ShapeStylePropertiesArchive *)arg1 archiver:(NSObject *)arg2;
+ (TSDShapeStyle *)propertiesAllowingNSNull;
+ (void)initialize;
+ (NSDictionary *)properties;

- (TSDShapeStyle *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)saveToArchive:(struct ShapeStyleArchive *)arg0 archiver:(NSObject *)arg1;
- (void)loadFromArchive:(struct ShapeStyleArchive *)arg0 unarchiver:(struct ShapeStyleArchive)arg1;
- (NSString *)presetKind;
- (NSObject *)mixedObjectWithFraction:(float)arg0 ofObject:(NSObject *)arg1;
- (int)mixingTypeWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (struct ShapeStyleArchive *)shapeStyleArchiveFromUnarchiver:(id)arg0;
- (NSObject *)boxedValueForProperty:(int)arg0 oldBoxedValue:(id)arg1 transformedByTransform:(struct CGAffineTransform)arg2;
- (char)wantsHighContrastBackgroundColor;
- (char)hasLineEnds;
- (void)fixImageFillTechniqueForSwatchOfSize:(struct CGSize)arg0;

@end
