/* Runtime dump - VKTriangulator
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKTriangulator : NSObject
{
    void * _opaque_triangulator;
    unsigned int _segments_capacity;
    void * _opaque_segments;
    unsigned int _mesh_capacity;
    unsigned int * _mesh;
    NSMutableData * _scratch;
}

- (void)dealloc;
- (VKTriangulator *)init;
- (char)_triangulateIndicesInto:(id)arg0;
- (id)triangulateIndicesForPoints:(struct Matrix<int, 2, 1> *)arg0 pointCount:(unsigned int)arg1;

@end
