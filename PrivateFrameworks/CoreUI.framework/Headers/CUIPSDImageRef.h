/* Runtime dump - CUIPSDImageRef
 * Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIPSDImageRef : NSObject
{
    NSString * _path;
    char _parsedForLayers;
    int _file;
    struct CPSDFile * _psd;
    _CUIPSDSublayerInfo * _rootLayers;
}

+ (char)isValidPSDResourceAtPath:(NSString *)arg0 withLayerCount:(unsigned int *)arg1;
+ (char)isValidPSDResourceAtPath:(NSString *)arg0;
+ (char)isValidPSDResourceAtPath:(NSString *)arg0 withLayerCount:(unsigned int *)arg1 validateLayers:(char)arg2;
+ (char)isValidPSDResourceAtPath:(NSString *)arg0 withImageInfo:(struct _PSDImageInfo *)arg1;

- (void)dealloc;
- (struct CGSize)size;
- (NSString *)path;
- (CUIPSDImageRef *)initWithPath:(NSString *)arg0;
- (char)openImageFile;
- (char)loadPSDFileWithLayers:(char)arg0;
- (struct CPSDFile *)_psdFileWithLayers:(unsigned int)arg0;
- (struct CGImage *)_copyCGImageAtAbsoluteIndex:(unsigned int)arg0;
- (NSObject *)_imageAtAbsoluteIndex:(unsigned int)arg0 isZeroSizeImage:(char *)arg1;
- (id)_imageFromSlice:(unsigned int)arg0 atAbsoluteIndex:(unsigned int)arg1 isEmptyImage:(char *)arg2;
- (id)_patternFromSlice:(unsigned int)arg0 atAbsoluteIndex:(unsigned int)arg1 isZeroSizeImage:(char *)arg2;
- (id)_createMaskFromSlice:(unsigned int)arg0 atAbsoluteIndex:(unsigned int)arg1;
- (struct CPSDFile *)psdFileForComposite;
- (struct CGImage *)createCompositeCGImage;
- (id)imageFromRef:(struct CGImage *)arg0;
- (struct CPSDFile *)psdFile;
- (struct CGRect)_boundsAtAbsoluteIndex:(NSObject *)arg0;
- (int)_layerIndexFromLayerNames:(id)arg0 indexRangeBegin:(int)arg1 indexRangeEnd:(int)arg2 isTopLevel:(char)arg3;
- (NSObject *)maskFromCompositeAlphaChannel:(int)arg0;
- (struct ?)metricsInMask:(NSObject *)arg0 forRect:(struct CGRect)arg1;
- (char)_visibilityAtAbsoluteIndex:(unsigned int)arg0;
- (NSObject *)_layerRefAtAbsoluteIndex:(unsigned int)arg0;
- (NSDictionary *)_layerInfo;
- (id)_namesOfSublayers:(id)arg0;
- (struct _PSDImageInfo)imageInfo;
- (NSObject *)_fillSampleAtAbsoluteIndex:(unsigned int)arg0;
- (NSObject *)_gradientAtAbsoluteIndex:(unsigned int)arg0;
- (NSObject *)_copySublayerInfoAtAbsoluteIndex:(unsigned int)arg0 atRoot:(char)arg1;
- (char)_treatDividerAsLayer;
- (int)cgBlendModeForPSDLayerOrLayerEffectBlendMode:(unsigned int)arg0;
- (struct CGImage *)createCGImageAtLayer:(unsigned int)arg0;
- (struct CGRect)boundsAtLayer:(id)arg0;
- (struct CGColorSpace *)copyColorSpace;
- (CALayer *)fillSampleAtLayer:(unsigned int)arg0;
- (UIColor *)colorFromDocumentColor:(double *)arg0;
- (NSDictionary *)_colorOverlayFromLayerEffectsInfo:(struct CPSDObjectEffectsLayerInfo *)arg0;
- (NSObject *)_gradientOverlayFromLayerEffectsAtAbsoluteIndex:(unsigned int)arg0;
- (NSDictionary *)_dropShadowFromLayerEffectsInfo:(struct CPSDObjectEffectsLayerInfo *)arg0;
- (NSDictionary *)_innerShadowFromLayerEffectsInfo:(struct CPSDObjectEffectsLayerInfo *)arg0;
- (NSDictionary *)_innerGlowFromLayerEffectsInfo:(struct CPSDObjectEffectsLayerInfo *)arg0;
- (NSDictionary *)_outerGlowFromLayerEffectsInfo:(struct CPSDObjectEffectsLayerInfo *)arg0;
- (NSDictionary *)_bevelEmbossFromLayerEffectsInfo:(struct CPSDObjectEffectsLayerInfo *)arg0;
- (CALayer *)imageAtLayer:(unsigned int)arg0;
- (CALayer *)imageAtLayer:(unsigned int)arg0 isZeroSizeImage:(char *)arg1;
- (id)imageFromSlice:(unsigned int)arg0 atLayer:(unsigned int)arg1;
- (id)imageFromSlice:(unsigned int)arg0 atAbsoluteLayer:(unsigned int)arg1;
- (id)imageFromSlice:(unsigned int)arg0 atLayer:(unsigned int)arg1 isEmptyImage:(char *)arg2;
- (id)patternFromSlice:(unsigned int)arg0 atLayer:(unsigned int)arg1;
- (id)patternFromSlice:(unsigned int)arg0 atLayer:(unsigned int)arg1 isZeroSizeImage:(char *)arg2;
- (id)maskFromSlice:(unsigned int)arg0 atLayer:(unsigned int)arg1;
- (UIImage *)compositeImage;
- (struct CGRect)boundsForSlice:(id)arg0;
- (int)absoluteLayerIndexFromLayerNames:(id)arg0;
- (struct ?)metricsInAlphaChannel:(NSObject *)arg0 forRect:(struct CGRect)arg1;
- (char)visibilityAtLayer:(unsigned int)arg0;
- (NSObject *)layerRefAtIndex:(unsigned int)arg0;
- (unsigned int)numberOfLayers;
- (unsigned int)numberOfSlices;
- (unsigned int)numberOfChannels;
- (NSArray *)layerNames;
- (NSString *)metadataString;
- (CALayer *)gradientAtLayer:(unsigned int)arg0;
- (unsigned int)_absoluteIndexOfRootLayer:(unsigned int)arg0;
- (struct CPSDLayerRecord *)_psdLayerRecordAtAbsoluteIndex:(unsigned int)arg0;
- (void)_logInvalidAbsoluteIndex:(unsigned int)arg0 psd:(struct CPSDFile *)arg1;
- (NSObject *)_nameAtAbsoluteIndex:(unsigned int)arg0;
- (float)_opacityAtAbsoluteIndex:(unsigned int)arg0;
- (float)_fillOpacityAtAbsoluteIndex:(unsigned int)arg0;
- (int)_blendModeAtAbsluteIndex:(unsigned int)arg0;
- (NSObject *)_layerEffectsAtAbsoluteIndex:(unsigned int)arg0;
- (void)finalize;

@end
