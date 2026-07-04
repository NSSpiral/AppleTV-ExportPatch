/* Runtime dump - TSCH3DChartSelectedElementHighlightSceneObjectProperties
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartSelectedElementHighlightSceneObjectProperties : NSObject
{
    TSCH3Dvec3DataBuffer * edgeVertices;
    TSCH3DPrefilteredLineRenderer * mRenderer;
    unsigned int mSelectedSeriesIndex;
    struct tvec4<float> mColor;
    TSCH3Dvec3DataBuffer * mEdgeVertices;
}

@property (retain, nonatomic) TSCH3Dvec3DataBuffer * edgeVertices;
@property (readonly, nonatomic) TSCH3DPrefilteredLineRenderer * renderer;
@property (nonatomic) unsigned int selectedSeriesIndex;
@property (nonatomic) struct tvec4<float> color;

- (void)setSelectedSeriesIndex:(unsigned int)arg0;
- (TSCH3Dvec3DataBuffer *)edgeVertices;
- (void)setEdgeVertices:(TSCH3Dvec3DataBuffer *)arg0;
- (unsigned int)selectedSeriesIndex;
- (void)dealloc;
- (TSCH3DChartSelectedElementHighlightSceneObjectProperties *)init;
- (struct tvec4<float>)color;
- (void)setColor:(struct tvec4<float>)arg0;
- (void).cxx_construct;
- (TSCH3DPrefilteredLineRenderer *)renderer;

@end
