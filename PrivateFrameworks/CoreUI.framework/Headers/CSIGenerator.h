/* Runtime dump - CSIGenerator
 * Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CSIGenerator : NSObject
{
    struct CGSize _size;
    NSString * _name;
    NSString * _utiType;
    NSMutableArray * _slices;
    NSMutableArray * _bitmaps;
    NSMutableArray * _metrics;
    char _isFPOHint;
    char _isExcludedFromFilter;
    char _isVectorBased;
    int _templateRenderingMode;
    char _allowsMultiPassEncoding;
    short _colorSpaceID;
    short _layout;
    unsigned int _scaleFactor;
    CUIPSDGradient * _gradient;
    NSData * _rawData;
    CUIShapeEffectPreset * _effectPreset;
    int _blendMode;
    float _opacity;
    NSDate * _modtime;
    unsigned int _pixelFormat;
    int _exifOrientation;
    unsigned long _rowbytes;
}

@property (copy, nonatomic) NSString * name;
@property (copy, nonatomic) NSString * utiType;
@property (nonatomic) char isRenditionFPO;
@property (nonatomic) char isVectorBased;
@property (nonatomic) int templateRenderingMode;
@property (nonatomic) char excludedFromContrastFilter;
@property (nonatomic) short colorSpaceID;
@property (nonatomic) unsigned int scaleFactor;
@property (nonatomic) unsigned int pixelFormat;
@property (nonatomic) char allowsMultiPassEncoding;
@property (nonatomic) int exifOrientation;
@property (retain, nonatomic) CUIPSDGradient * gradient;
@property (retain, nonatomic) CUIShapeEffectPreset * effectPreset;
@property (nonatomic) int blendMode;
@property (nonatomic) float opacity;
@property (copy, nonatomic) NSDate * modtime;

+ (void)initialize;
+ (void)setFileCompression:(int)arg0;
+ (int)fileCompression;

- (void)setScaleFactor:(unsigned int)arg0;
- (int)blendMode;
- (void)setBlendMode:(int)arg0;
- (void)dealloc;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (int)exifOrientation;
- (int)templateRenderingMode;
- (float)opacity;
- (void)setOpacity:(float)arg0;
- (unsigned int)scaleFactor;
- (void)setGradient:(CUIPSDGradient *)arg0;
- (CUIPSDGradient *)gradient;
- (void)setTemplateRenderingMode:(int)arg0;
- (void)setExifOrientation:(int)arg0;
- (unsigned int)pixelFormat;
- (void)setPixelFormat:(unsigned int)arg0;
- (void)setEffectPreset:(CUIShapeEffectPreset *)arg0;
- (NSDate *)modtime;
- (char)allowsMultiPassEncoding;
- (void)_addNodes:(id)arg0 toNodeList:(struct _csigradientdatanode *)arg1;
- (void)formatCSIHeader:(struct _csiheader *)arg0;
- (void)writeHeader:(struct _csiheader *)arg0 toData:(unsigned int)arg1;
- (unsigned long)writeResourcesToData:(NSData *)arg0;
- (unsigned long)writeGradientToData:(NSData *)arg0;
- (unsigned long)writeRawDataToData:(NSData *)arg0;
- (unsigned long)writeBitmap:(id)arg0 toData:(NSData *)arg1 compress:(char)arg2;
- (CSIGenerator *)initWithCanvasSize:(struct CGSize)arg0 sliceCount:(unsigned int)arg1 layout:(short)arg2;
- (CSIGenerator *)initWithShapeEffectPreset:(NSSet *)arg0 forScaleFactor:(unsigned int)arg1;
- (CSIGenerator *)initWithRawData:(NSData *)arg0 pixelFormat:(unsigned int)arg1 layout:(short)arg2;
- (void)addBitmap:(MFPhoneBitmap *)arg0;
- (void)addSliceRect:(struct CGRect)arg0;
- (id)CSIRepresentationWithCompression:(char)arg0;
- (NSString *)utiType;
- (void)setUtiType:(NSString *)arg0;
- (char)isRenditionFPO;
- (void)setIsRenditionFPO:(char)arg0;
- (char)isVectorBased;
- (void)setIsVectorBased:(char)arg0;
- (char)isExcludedFromContrastFilter;
- (void)setExcludedFromContrastFilter:(char)arg0;
- (short)colorSpaceID;
- (void)setColorSpaceID:(short)arg0;
- (CUIShapeEffectPreset *)effectPreset;
- (void)setModtime:(NSDate *)arg0;
- (void)setAllowsMultiPassEncoding:(char)arg0;
- (void)addMetrics:(struct ?)arg0;

@end
