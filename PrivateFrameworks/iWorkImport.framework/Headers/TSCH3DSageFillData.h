/* Runtime dump - TSCH3DSageFillData
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DSageFillData : NSObject <TSCH3DSageFillData>
{
    NSDictionary * mProperties;
    NSArray * mLayersProperties;
    TSCH3DFillSetIdentifier * mIdentifier;
    NSObject<TSCH3DSageFillImageDataSource> * mImageSource;
}

+ (NSString *)dataWithFillSetIdentifier:(NSString *)arg0;
+ (NSDictionary *)dataWithProperties:(NSDictionary *)arg0 layersProperties:(NSDictionary *)arg1 identifier:(NSString *)arg2 imageSource:(struct CGImageSource * *)arg3;
+ (NSData *)textureWithImageData:(NSData *)arg0;
+ (NSObject *)TSPImageDataFromTexture:(NSObject *)arg0;

- (NSString *)fillSetIdentifier;
- (struct Color)emissive;
- (char)isLayerEnabledForIndex:(unsigned int)arg0;
- (NSObject *)textureForIndex:(unsigned int)arg0;
- (int)layerTilingModeForIndex:(unsigned int)arg0;
- (char)layerIsEnvironmentMapForIndex:(unsigned int)arg0;
- (int)layerBlendModeForIndex:(unsigned int)arg0;
- (float)layerScaleForIndex:(unsigned int)arg0;
- (float)layerRotationForIndex:(unsigned int)arg0;
- (NSObject *)layerLightenPercentageForIndex:(unsigned int)arg0;
- (TSCH3DSageFillData *)initWithProperties:(NSDictionary *)arg0 layersProperties:(NSDictionary *)arg1 identifier:(NSString *)arg2 imageSource:(struct CGImageSource * *)arg3;
- (struct ColorResult)colorFromRedKey:(SEL)arg0 greenKey:(NSString *)arg1 blueKey:(NSString *)arg2;
- (struct Color)makeGray:(float)arg0;
- (struct Color)colorFromRedKey:(NSString *)arg0 greenKey:(NSString *)arg1 blueKey:(NSString *)arg2 defaultGray:(float)arg3;
- (NSString *)objectForKey:(NSString *)arg0 index:(unsigned int)arg1;
- (NSString *)p_optimizedMipmapPathFromOriginalPath:(NSString *)arg0;
- (struct Color)diffuse;
- (struct Color)specular;
- (float)shininess;
- (void)dealloc;
- (float)opacity;
- (unsigned int)layerCount;

@end
