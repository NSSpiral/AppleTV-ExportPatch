/* Runtime dump - CUINamedImage
 * Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUINamedImage : NSObject
{
    CUIRenditionKey * _key;
    unsigned int _storageRef;
    NSString * _name;
    float _scale;
    struct _cuiniproperties _imageProperties;
    NSString * _signature;
}

@property (copy, nonatomic) NSString * name;
@property (readonly, nonatomic) struct CGImage * image;
@property (readonly, nonatomic) struct CGSize size;
@property (nonatomic) float scale;
@property (readonly, nonatomic) int imageType;
@property (readonly, nonatomic) struct ? edgeInsets;
@property (readonly, nonatomic) int resizingMode;
@property (readonly, nonatomic) float opacity;
@property (readonly, nonatomic) struct ? alignmentEdgeInsets;
@property (readonly, nonatomic) int blendMode;
@property (readonly, nonatomic) char hasSliceInformation;
@property (readonly, nonatomic) char hasAlignmentInformation;
@property (readonly, nonatomic) char isVectorBased;
@property (readonly, nonatomic) char isTemplate;
@property (readonly, nonatomic) int templateRenderingMode;
@property (readonly, nonatomic) char isStructured;
@property (readonly, nonatomic) int exifOrientation;

- (UITraitCollection *)traitCollection;
- (UIImage *)UIImage;
- (char)isStructured;
- (int)blendMode;
- (void)dealloc;
- (struct CGSize)size;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (float)scale;
- (unsigned int)subtype;
- (struct ?)edgeInsets;
- (int)resizingMode;
- (struct CGImage *)image;
- (int)exifOrientation;
- (char)hasSliceInformation;
- (struct ?)alignmentEdgeInsets;
- (int)templateRenderingMode;
- (CUIRenditionKey *)baseKey;
- (float)opacity;
- (void)setScale:(float)arg0;
- (int)idiom;
- (char)isVectorBased;
- (CUIThemeSchemaRendition *)_rendition;
- (NSObject *)_themeStore;
- (NSString *)_renditionForSpecificKey:(NSString *)arg0;
- (CUINamedImage *)initWithName:(NSString *)arg0 usingRenditionKey:(NSString *)arg1 fromTheme:(unsigned int)arg2;
- (int)sizeClassHorizontal;
- (int)sizeClassVertical;
- (float)positionOfSliceBoundary:(unsigned int)arg0;
- (NSString *)renditionKey;
- (char)isTemplate;
- (void)_cacheRenditionProperties;
- (int)resizingModeWithSubtype:(int)arg0;
- (char)hasAlignmentInformation;
- (int)memoryClass;
- (int)graphicsClass;
- (struct CGRect)alignmentRect;
- (int)imageType;

@end
