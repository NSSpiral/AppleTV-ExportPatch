/* Runtime dump - VKRoadDrawStyle
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRoadDrawStyle : VKRenderStyle
{
    struct VKProfileSparseRamp<float> width;
    struct VKProfileSparseRamp<float> strokeWidth;
    struct VKProfileSparseRamp<float> labelHeight;
    struct VKProfileSparseRamp<float> widthDropoff;
    struct VKProfileSparseRamp<_VGLColor> fillColor;
    struct VKProfileSparseRamp<_VGLColor> strokeColor;
    struct VKProfileSparseRamp<signed char> simpleLine;
    struct VKProfileSparseRamp<int> zIndices;
    struct VKProfileSparseRamp<int> fillZIndices;
    struct VKProfileSparseRamp<signed char> strokeColorInterpolate;
    struct VKProfileSparseRamp<signed char> fillColorInterpolate;
    unsigned char railroadPattern;
    struct VKProfileSparseRamp<_VGLColor> alternateFillColor;
    struct VKProfileSparseRamp<float> patternScaler;
    struct VKProfileSparseRamp<float> patternScalerQuantizationFactor;
    struct VKProfileSparseRamp<signed char> renderEndCaps;
}

+ (int)renderStyleID;

- (void).cxx_construct;
- (void).cxx_destruct;
- (unsigned char)railroadPattern;
- (char)visibleAtZoom:(float)arg0;

@end
