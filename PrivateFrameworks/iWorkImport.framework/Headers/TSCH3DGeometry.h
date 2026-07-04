/* Runtime dump - TSCH3DGeometry
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGeometry : NSObject
{
    TSCH3Dvec3DataBuffer * mVertexBuffer;
    TSCH3Dvec3DataBuffer * mNormalBuffer;
    int mNumVertices;
    struct box<glm::detail::tvec3<float> > mGeometryBounds;
}

@property (readonly, nonatomic) struct box<glm::detail::tvec3<float> > geometryBounds;

+ (SCNGeometry *)geometry;

- (int)numVertices;
- (unsigned int)capOffset;
- (struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > *)vertexArray;
- (void)transformArrays:(struct tmat4x4<float> *)arg0;
- (unsigned int)geometryOffset;
- (int)capCount;
- (NSArray *)selectionKnobPositions;
- (NSArray *)elementsBoundsPositions;
- (NSObject *)vertexBuffer;
- (NSObject *)normalBuffer;
- (void)allocateArrays:(int)arg0;
- (struct tvec3<float> *)vertexArrayPointer;
- (struct tvec3<float> *)normalArrayPointer;
- (struct box<glm::detail::tvec3<float> >)geometryBounds;
- (struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > *)normalArray;
- (void)dealloc;
- (TSCH3DGeometry *)init;
- (void)reset;
- (void).cxx_construct;
- (int)geometryCount;

@end
