/* Runtime dump - TSCH3D2DDataBuffer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3D2DDataBuffer : TSCH3DDataBuffer
{
    struct DataBuffer2DDimension mDimension;
}

@property (readonly, nonatomic) struct DataBuffer2DDimension dimension;
@property (readonly, nonatomic) struct tvec3<int> size;

+ (TSCH3D2DDataBuffer *)bufferWithCapacityDimension:(struct DataBuffer2DDimension *)arg0;
+ (NSObject *)bufferWithCapacitySize:(struct tvec2<int> *)arg0 components:(struct tvec2<int>)arg1;

- (struct DataBufferLevelData)dataAtLevel:(SEL)arg0;
- (TSCH3D2DDataBuffer *)initWithCapacityDimension:(struct DataBuffer2DDimension *)arg0;
- (struct tvec3<int>)size;
- (void).cxx_construct;
- (struct DataBuffer2DDimension)dimension;
- (unsigned int)components;
- (char)hasLevels;

@end
