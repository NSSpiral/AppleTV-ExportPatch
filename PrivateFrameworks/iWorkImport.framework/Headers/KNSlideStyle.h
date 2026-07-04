/* Runtime dump - KNSlideStyle
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNSlideStyle : TSSStyle

+ (KNSlideStyle *)defaultStyleWithContext:(NSObject *)arg0;
+ (KNSlideStyle *)defaultValueForProperty:(int)arg0;
+ (KNSlideStyle *)propertiesAllowingNSNull;
+ (void)createStylePresetInStylesheet:(NSObject *)arg0;
+ (NSDictionary *)properties;

- (KNSlideStyle *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)saveToArchive:(struct SlideStyleArchive *)arg0 archiver:(NSObject *)arg1;
- (KNSlideStyle *)initWithContext:(NSObject *)arg0 name:(NSString *)arg1 overridePropertyMap:(TSSPropertyMap *)arg2 isVariation:(char)arg3;
- (void)loadFromArchive:(struct SlideStyleArchive *)arg0 unarchiver:(struct SlideStyleArchive)arg1;
- (void)loadSlideStylePropertiesIntoPropertyMap:(NSObject *)arg0 fromArchive:(struct SlideStylePropertiesArchive *)arg1 unarchiver:(struct SlideStylePropertiesArchive)arg2;
- (void)saveSlideStylePropertyMap:(NSObject *)arg0 toArchive:(struct SlideStylePropertiesArchive *)arg1 archiver:(NSObject *)arg2;

@end
