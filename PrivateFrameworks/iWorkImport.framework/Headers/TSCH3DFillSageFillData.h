/* Runtime dump - TSCH3DFillSageFillData
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DFillSageFillData : NSObject <TSCH3DSageFillData>
{
    TSCH3DFill * mFill;
    NSMutableArray * mTextures;
    NSMutableArray * mTextureBlendModes;
}

+ (TSCH3DFillSageFillData *)dataWithFill:(id)arg0;

- (NSString *)fillSetIdentifier;
- (TSCH3DLightingModel *)lightingModel;
- (struct Color)emissive;
- (char)isLayerEnabledForIndex:(unsigned int)arg0;
- (NSObject *)textureForIndex:(unsigned int)arg0;
- (int)layerTilingModeForIndex:(unsigned int)arg0;
- (char)layerIsEnvironmentMapForIndex:(unsigned int)arg0;
- (int)layerBlendModeForIndex:(unsigned int)arg0;
- (TSCH3DFillSageFillData *)initWithFill:(id)arg0;
- (unsigned int)diffuseCount;
- (id)diffuseMaterial;
- (void)p_addMaterial:(id)arg0 blendMode:(int)arg1;
- (unsigned int)modulateCount;
- (id)modulateMaterial;
- (id)phongMaterials;
- (NSObject *)materialAtIndex:(unsigned int)arg0;
- (float)layerScaleForIndex:(unsigned int)arg0;
- (float)layerRotationForIndex:(unsigned int)arg0;
- (NSObject *)layerLightenPercentageForIndex:(unsigned int)arg0;
- (struct Color)diffuse;
- (struct Color)specular;
- (float)shininess;
- (void)dealloc;
- (NSDictionary *)environment;
- (float)opacity;
- (unsigned int)layerCount;

@end
