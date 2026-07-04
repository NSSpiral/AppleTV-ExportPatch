/* Runtime dump - TSCH3DUByteDataBuffer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DUByteDataBuffer : TSCH3DVectorDataBuffer
{
    struct vector<TSCH3D::PODType<unsigned char>, std::__1::allocator<TSCH3D::PODType<unsigned char> > > mContainer;
}

@property (readonly, nonatomic) struct vector<TSCH3D::PODType<unsigned char>, std::__1::allocator<TSCH3D::PODType<unsigned char> > > * container;

- (unsigned int)componentByteSize;
- (void)fillCapacity;
- (id)elementsAtIndices:(id)arg0;
- (unsigned int)count;
- (TSCH3DUByteDataBuffer *)initWithCapacity:(unsigned int)arg0;
- (void *)data;
- (struct vector<TSCH3D::PODType<unsigned char>, std::__1::allocator<TSCH3D::PODType<unsigned char> > > *)container;
- (void).cxx_construct;
- (void)clear;
- (void).cxx_destruct;
- (unsigned int)components;
- (int)componentType;

@end
