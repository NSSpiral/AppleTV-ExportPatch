/* Runtime dump - VKPolygonDrawStyle
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPolygonDrawStyle : VKRenderStyle
{
    NSString * _name;
}

@property (retain, nonatomic) NSString * name;
@property (readonly, nonatomic) struct Matrix<float, 4, 1> casingColor;

+ (int)renderStyleID;

- (void)dealloc;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (char)hasFillTexture;
- (char)hasFillColor;
- (id)targetTextureAtZoom:(float)arg0;
- (id)sourceTextureAtZoom:(float)arg0;
- (char)hasStrokeColor;
- (int)polygonType;
- (char)casingsVisibleAtZoom:(float)arg0;
- (id)preferredSourceTextureNameAtZoom:(float)arg0;
- (struct Matrix<float, 4, 1>)fillColorAtZoom:(float)arg0;
- (char)isNotDrawn;
- (char)visibleAtZoom:(float)arg0;
- (float)strokeWidthAtZoom:(float)arg0;
- (unsigned int)zIndexAtZoom:(float)arg0;
- (struct Matrix<float, 4, 1>)strokeColorAtZoom:(float)arg0;
- (char)hasFillColorVariant;
- (struct Matrix<float, 4, 1>)targetFillColorAtZoom:(float)arg0;
- (id)preferredTargetTextureNameAtZoom:(float)arg0;
- (struct Matrix<float, 4, 1>)casingColor;
- (char)isSourceNotDrawn;
- (char)isTargetNotDrawn;
- (char)hasFillTextureVariant;
- (struct Matrix<float, 4, 1>)sourceFillColorAtZoom:(float)arg0;
- (float)textureOpacityAtZoom:(float)arg0;
- (int)textureBlendModeAtZoom:(float)arg0;
- (id)secondTextureAtZoom:(float)arg0;
- (float)secondTextureOpacityAtZoom:(float)arg0;
- (id)secondTextureVariantAtZoom:(float)arg0;
- (int)secondTextureBlendModeAtZoom:(float)arg0;
- (id)thirdTextureAtZoom:(float)arg0;
- (float)thirdTextureOpacityAtZoom:(float)arg0;
- (id)thirdTextureVariantAtZoom:(float)arg0;
- (int)thirdTextureBlendModeAtZoom:(float)arg0;
- (float)outerStrokeWidthAtZoom:(float)arg0;
- (struct Matrix<float, 4, 1>)outerStrokeColorAtZoom:(float)arg0;
- (char)fancyCasingsVisibleAtZoom:(float)arg0;

@end
