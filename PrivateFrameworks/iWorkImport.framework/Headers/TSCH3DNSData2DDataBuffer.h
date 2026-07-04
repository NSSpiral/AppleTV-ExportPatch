/* Runtime dump - TSCH3DNSData2DDataBuffer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DNSData2DDataBuffer : TSCH3D2DDataBuffer
{
    NSData * mConstData;
    NSMutableData * mMutableData;
}

@property (readonly, nonatomic) NSData * NSData;

+ (TSCH3DNSData2DDataBuffer *)bufferWithCapacityDimension:(struct DataBuffer2DDimension *)arg0 mutableData:(struct DataBuffer2DDimension)arg1;
+ (TSCH3DNSData2DDataBuffer *)bufferWithCapacityDimension:(struct DataBuffer2DDimension *)arg0 data:(struct DataBuffer2DDimension)arg1;

- (NSData *)NSData;
- (unsigned int)componentByteSize;
- (TSCH3DNSData2DDataBuffer *)initWithCapacityDimension:(struct DataBuffer2DDimension *)arg0;
- (TSCH3DNSData2DDataBuffer *)initWithCapacityDimension:(struct DataBuffer2DDimension *)arg0 mutableData:(struct DataBuffer2DDimension)arg1;
- (TSCH3DNSData2DDataBuffer *)initWithCapacityDimension:(struct DataBuffer2DDimension *)arg0 data:(struct DataBuffer2DDimension)arg1;
- (void)fillCapacity;
- (void)resizeFillDimension:(struct DataBuffer2DDimension *)arg0;
- (void)dealloc;
- (unsigned int)count;
- (void *)data;
- (int)componentType;
- (void *)mutableData;

@end
