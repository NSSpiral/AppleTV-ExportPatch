/* Runtime dump - TSCH3DUShortDataBuffer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DUShortDataBuffer : TSCH3DVectorDataBuffer
{
    struct vector<TSCH3D::PODType<unsigned short>, std::__1::allocator<TSCH3D::PODType<unsigned short> > > mContainer;
}

@property (readonly, nonatomic) struct vector<TSCH3D::PODType<unsigned short>, std::__1::allocator<TSCH3D::PODType<unsigned short> > > * container;

- (unsigned int)componentByteSize;
- (void)fillCapacity;
- (id)elementsAtIndices:(id)arg0;
- (unsigned int)count;
- (TSCH3DUShortDataBuffer *)initWithCapacity:(unsigned int)arg0;
- (void *)data;
- (struct vector<TSCH3D::PODType<unsigned short>, std::__1::allocator<TSCH3D::PODType<unsigned short> > > *)container;
- (void).cxx_construct;
- (void)clear;
- (void).cxx_destruct;
- (unsigned int)components;
- (int)componentType;

@end
