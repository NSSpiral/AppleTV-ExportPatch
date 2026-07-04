/* Runtime dump - CUIThemeRendition
 * Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIThemeRendition : NSObject
{
    id _stackKey;
    struct _renditionkeytoken * _key;
    int _type;
    unsigned int _subtype;
    unsigned int _scale;
    struct ? _renditionFlags;
    int _templateRenderingMode;
    int _artworkStatus;
    unsigned int _colorSpaceID;
    NSString * _name;
    NSData * _srcData;
    int _validLookGradation;
    float _opacity;
    int _blendMode;
    NSString * _utiType;
    int _exifOrientation;
}

@property (nonatomic) float opacity;
@property (nonatomic) int blendMode;
@property (nonatomic) int exifOrientation;

+ (NSObject *)displayNameForRenditionType:(int)arg0;
+ (NSData *)filteredCSIDataFromBaseCSIData:(NSData *)arg0;
+ (Class)renditionClassForRenditionType:(int)arg0 andPixelFormat:(unsigned int)arg1;

- (int)blendMode;
- (void)setBlendMode:(int)arg0;
- (void)dealloc;
- (NSString *)description;
- (NSString *)name;
- (struct _renditionkeytoken *)key;
- (float)scale;
- (int)type;
- (unsigned int)subtype;
- (NSData *)data;
- (int)exifOrientation;
- (int)templateRenderingMode;
- (char)isOpaque;
- (float)opacity;
- (void)setOpacity:(float)arg0;
- (NSMutableArray *)metrics;
- (UIKeyboardDicationBackgroundGradientView *)gradient;
- (void)setExifOrientation:(int)arg0;
- (struct CGPDFDocument *)pdfDocument;
- (unsigned int)gradientStyle;
- (NSString *)utiType;
- (char)isVectorBased;
- (unsigned int)colorSpaceID;
- (CUIShapeEffectPreset *)effectPreset;
- (void)_initializeRenditionKey:(struct _renditionkeytoken *)arg0;
- (unsigned short)valueForTokenIdentifier:(unsigned short)arg0;
- (char)isTiled;
- (NSObject *)imageForSliceIndex:(int)arg0;
- (char)isScaled;
- (NSObject *)maskForSliceIndex:(int)arg0;
- (struct CGImage *)unslicedImage;
- (CUIRenditionSliceInformation *)sliceInformation;
- (float)gradientDrawingAngle;
- (CUIThemeRendition *)initWithCSIData:(NSData *)arg0 forKey:(struct _renditionkeytoken *)arg1 artworkStatus:(struct _renditionkeytoken)arg2;
- (char)isHeaderFlaggedFPO;
- (int)artworkStatus;
- (NSString *)_initWithCSIHeader:(struct _csiheader *)arg0;
- (NSData *)_initWithCSIData:(NSData *)arg0 forKey:(struct _renditionkeytoken *)arg1 artworkStatus:(struct _renditionkeytoken)arg2;
- (void)_initializeTypeIdentifiersWithLayout:(unsigned short)arg0;
- (void)_initializeCompositingOptionsFromCSIData:(struct _csiheader *)arg0;
- (void)_initalizeMetadataFromCSIData:(struct _csiheader *)arg0;
- (CUIThemeRendition *)initWithCSIData:(NSData *)arg0 forKey:(struct _renditionkeytoken *)arg1;
- (char)isValidForLookGradation:(int)arg0;

@end
