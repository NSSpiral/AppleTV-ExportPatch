/* Runtime dump - TSCH3DVectorN3DDataBuffer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DVectorN3DDataBuffer : TSCH3DDataBuffer
{
    struct DataBuffer3DDimension mDimension;
    struct vector<unsigned char, std::__1::allocator<unsigned char> > mContainer;
}

@property (readonly, nonatomic) struct vector<unsigned char, std::__1::allocator<unsigned char> > * container;

+ (TSCH3DVectorN3DDataBuffer *)bufferWithCapacity3DDimension:(struct DataBuffer3DDimension *)arg0;

- (unsigned int)componentByteSize;
- (void)fillCapacity;
- (TSCH3DVectorN3DDataBuffer *)initWithCapacity3DDimension:(struct DataBuffer3DDimension *)arg0;
- (struct tvec3<int>)size;
- (unsigned int)count;
- (void *)data;
- (struct vector<unsigned char, std::__1::allocator<unsigned char> > *)container;
- (void).cxx_construct;
- (void).cxx_destruct;
- (unsigned int)components;
- (int)componentType;

@end
