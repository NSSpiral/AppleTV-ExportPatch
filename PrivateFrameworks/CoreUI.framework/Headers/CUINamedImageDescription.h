/* Runtime dump - CUINamedImageDescription
 * Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUINamedImageDescription : NSObject
{
    float _scale;
    int _idiom;
    int _subtype;
    int _sizeClassHorizontal;
    int _sizeClassVertical;
    int _blendMode;
    int _templateRenderingMode;
    int _imageType;
    struct ? _edgeInsets;
    struct ? _alignmentEdgeInsets;
    int _resizingMode;
    int _exifOrientation;
}

@property (nonatomic) float scale;
@property (nonatomic) int idiom;
@property (nonatomic) int subtype;
@property (nonatomic) int sizeClassHorizontal;
@property (nonatomic) int sizeClassVertical;
@property (nonatomic) int blendMode;
@property (nonatomic) char isTemplate;
@property (nonatomic) int templateRenderingMode;
@property (nonatomic) int imageType;
@property (nonatomic) struct ? edgeInsets;
@property (nonatomic) struct ? alignmentEdgeInsets;
@property (nonatomic) int resizingMode;
@property (nonatomic) int exifOrientation;

- (int)blendMode;
- (void)setBlendMode:(int)arg0;
- (NSString *)description;
- (float)scale;
- (int)subtype;
- (struct ?)edgeInsets;
- (int)resizingMode;
- (int)exifOrientation;
- (struct ?)alignmentEdgeInsets;
- (int)templateRenderingMode;
- (void)setSubtype:(int)arg0;
- (void)setScale:(float)arg0;
- (int)idiom;
- (void)setIdiom:(int)arg0;
- (void)setEdgeInsets:(struct ?)arg0;
- (void)setSizeClassHorizontal:(int)arg0;
- (void)setSizeClassVertical:(int)arg0;
- (void)setTemplateRenderingMode:(int)arg0;
- (void)setAlignmentEdgeInsets:(struct ?)arg0;
- (void)setResizingMode:(int)arg0;
- (void)setImageType:(int)arg0;
- (void)setExifOrientation:(int)arg0;
- (int)sizeClassHorizontal;
- (int)sizeClassVertical;
- (void)setIsTemplate:(char)arg0;
- (char)isTemplate;
- (int)imageType;

@end
