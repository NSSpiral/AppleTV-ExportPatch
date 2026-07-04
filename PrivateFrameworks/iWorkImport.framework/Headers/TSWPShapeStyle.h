/* Runtime dump - TSWPShapeStyle
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPShapeStyle : TSDShapeStyle <TSSPreset>

@property (readonly, nonatomic) NSString * presetKind;

+ (NSObject *)presetStyleDescriptor;
+ (TSWPShapeStyle *)defaultValueForProperty:(int)arg0;
+ (int)defaultIntValueForProperty:(int)arg0;
+ (TSWPShapeStyle *)propertiesAllowingNSNull;
+ (NSDictionary *)layoutProperties;
+ (void)loadShapeStyleLayoutPropertiesIntoPropertyMap:(NSObject *)arg0 fromArchive:(struct ShapeStylePropertiesArchive *)arg1 unarchiver:(struct ShapeStylePropertiesArchive)arg2;
+ (void)saveShapeStyleLayoutPropertyMap:(NSObject *)arg0 toArchive:(struct ShapeStylePropertiesArchive *)arg1 archiver:(NSObject *)arg2;
+ (NSDictionary *)properties;

- (TSWPShapeStyle *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)saveToArchive:(struct ShapeStyleArchive *)arg0 archiver:(NSObject *)arg1;
- (NSString *)presetKind;
- (struct ShapeStyleArchive *)shapeStyleArchiveFromUnarchiver:(id)arg0;
- (NSObject *)boxedValueForProperty:(int)arg0 oldBoxedValue:(id)arg1 transformedByTransform:(struct CGAffineTransform)arg2;
- (SEL)mapThemePropertyMapSelector;
- (TSWPSpecParagraphStyle *)defaultParagraphStyle;
- (void)setDefaultParagraphStyle:(TSWPSpecParagraphStyle *)arg0;

@end
