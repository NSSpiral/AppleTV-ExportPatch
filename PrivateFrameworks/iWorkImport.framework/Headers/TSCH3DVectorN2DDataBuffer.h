/* Runtime dump - TSCH3DVectorN2DDataBuffer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DVectorN2DDataBuffer : TSCH3D2DDataBuffer
{
    struct vector<unsigned char, std::__1::allocator<unsigned char> > mContainer;
}

@property (readonly, nonatomic) struct vector<unsigned char, std::__1::allocator<unsigned char> > * container;

- (unsigned int)componentByteSize;
- (TSCH3DVectorN2DDataBuffer *)initWithCapacityDimension:(struct DataBuffer2DDimension *)arg0;
- (void)fillCapacity;
- (void)resizeFillDimension:(struct DataBuffer2DDimension *)arg0;
- (unsigned int)count;
- (void *)data;
- (struct vector<unsigned char, std::__1::allocator<unsigned char> > *)container;
- (void).cxx_construct;
- (void).cxx_destruct;
- (int)componentType;
- (void *)mutableData;

@end
