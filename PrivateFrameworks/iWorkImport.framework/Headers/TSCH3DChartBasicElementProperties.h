/* Runtime dump - TSCH3DChartBasicElementProperties
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartBasicElementProperties : TSCH3DChartMutableElementProperties
{
    TSCH3DChartModelEnumerator * mEnumerator;
    struct tvec2<int> mSize;
}

@property (readonly, nonatomic) struct tvec2<int> size;

- (void)createResources;
- (struct GeometryResource)geometryForSeries:(id)arg0 index:(NSObject *)arg1;
- (struct GeometryResource)boundsGeometryForSeries:(id)arg0 index:(NSObject *)arg1;
- (id)normalsForSeries:(id)arg0 index:(struct tvec2<int> *)arg1;
- (id)texcoordsForSeries:(id)arg0 index:(struct tvec2<int> *)arg1;
- (void)resetWithEnumerator:(NSEnumerator *)arg0 layoutSettings:(struct ?)arg1;
- (void)dealloc;
- (struct tvec2<int>)size;
- (TSCH3DChartBasicElementProperties *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_construct;

@end
