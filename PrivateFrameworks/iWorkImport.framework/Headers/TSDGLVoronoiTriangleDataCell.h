/* Runtime dump - TSDGLVoronoiTriangleDataCell
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGLVoronoiTriangleDataCell : NSObject
{
    unsigned int _triangleCount;
    unsigned int _vertexCount;
    struct ? * _vertexData;
    struct ? _centerPoint;
    struct CGRect _bounds;
}

@property (readonly, nonatomic) unsigned int triangleCount;
@property (readonly, nonatomic) unsigned int vertexCount;
@property (readonly, nonatomic) struct ? * vertexData;
@property (readonly, nonatomic) struct ? centerPoint;
@property (readonly, nonatomic) struct CGRect bounds;

- (unsigned int)triangleCount;
- (TSDGLVoronoiTriangleDataCell *)initWithTrianglePoints:(struct ? *)arg0;
- (void)p_setupTriangleDataWithEdges:(struct vector<boost::polygon::segment_data<double>, std::__1::allocator<boost::polygon::segment_data<double> > >)arg0;
- (id)cellsBySplittingCellIntoTriangles;
- (TSDGLVoronoiTriangleDataCell *)initWithEdges:(struct vector<boost::polygon::segment_data<double>, std::__1::allocator<boost::polygon::segment_data<double> > >)arg0;
- (struct ? *)vertexData;
- (void)dealloc;
- (struct CGRect)bounds;
- (void).cxx_construct;
- (struct ?)centerPoint;
- (unsigned int)vertexCount;

@end
