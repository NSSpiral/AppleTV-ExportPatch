/* Runtime dump - VKRealisticPolygonMaker
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRealisticPolygonMaker : NSObject
{
    NSMutableArray * _polygons;
    struct /* ? */ _styleQueryForPolygon;
}

- (void)dealloc;
- (void).cxx_construct;
- (void).cxx_destruct;
- (void)addPolygonForPoints:(struct Matrix<float, 2, 1> *)arg0 pointCount:(struct Matrix<float, 2, 1>)arg1 withStyleQuery:(unsigned int)arg2;
- (void)generateIndexedTrianglesWithHandler:(id /* block */)arg0;

@end
