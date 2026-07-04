/* Runtime dump - TSCH3Dvec4DataBuffer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3Dvec4DataBuffer : TSCH3DFloatVectorDataBuffer
{
    struct vector<glm::detail::tvec4<float>, std::__1::allocator<glm::detail::tvec4<float> > > mContainer;
}

@property (readonly, nonatomic) struct vector<glm::detail::tvec4<float>, std::__1::allocator<glm::detail::tvec4<float> > > * container;

- (unsigned int)componentByteSize;
- (void)fillCapacity;
- (id)elementsAtIndices:(id)arg0;
- (unsigned int)count;
- (TSCH3Dvec4DataBuffer *)initWithCapacity:(unsigned int)arg0;
- (void *)data;
- (struct vector<glm::detail::tvec4<float>, std::__1::allocator<glm::detail::tvec4<float> > > *)container;
- (void).cxx_construct;
- (void)clear;
- (void).cxx_destruct;
- (unsigned int)components;

@end
