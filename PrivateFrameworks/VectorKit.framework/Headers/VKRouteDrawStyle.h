/* Runtime dump - VKRouteDrawStyle
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRouteDrawStyle : VKRenderStyle
{
    struct VKProfileSparseRamp<float> _width;
    struct VKProfileSparseRamp<_VGLColor> _fillColor;
    struct VKProfileSparseRamp<_VGLColor> _travelledColor;
}

@property (readonly, nonatomic) char hasTexture;
@property (readonly, nonatomic) char hasObscuredTexture;
@property (readonly, nonatomic) char hasTravelledTexture;
@property (readonly, nonatomic) NSString * texture;
@property (readonly, nonatomic) NSString * obscuredTexture;
@property (readonly, nonatomic) NSString * travelledTexture;
@property (readonly, nonatomic) float enlargementStartZoom;
@property (readonly, nonatomic) float enlargementScale;
@property (readonly, nonatomic) float enlargementMaxScale;
@property (readonly, nonatomic) float brightness;
@property (readonly, nonatomic) char hasBrightness;
@property (readonly, nonatomic) float arrowMinZoom;
@property (readonly, nonatomic) float selectedArrowMinZoom;
@property (readonly, nonatomic) char hasFillColor;

+ (int)renderStyleID;

- (float)width;
- (struct Matrix<float, 4, 1>)fillColor;
- (struct Matrix<float, 4, 1>)strokeColor;
- (void).cxx_construct;
- (float)brightness;
- (void).cxx_destruct;
- (struct Matrix<float, 4, 1>)travelledColor;
- (struct Matrix<float, 4, 1>)glossColor;
- (char)hasBrightness;
- (float)arrowMinZoom;
- (char)hasFillColor;
- (float)strokeWidth;
- (NSString *)texture;
- (char)hasDashAtAnyZ;
- (unsigned long long)fillDashPatternAtZoom:(float)arg0;
- (char)hasTexture;
- (char)hasObscuredTexture;
- (NSString *)obscuredTexture;
- (char)hasTravelledTexture;
- (NSString *)travelledTexture;
- (float)enlargementStartZoom;
- (float)enlargementScale;
- (float)enlargementMaxScale;
- (float)selectedArrowMinZoom;

@end
