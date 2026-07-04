/* Runtime dump - TSCH3DDataBuffer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DDataBuffer : NSObject

@property (readonly, nonatomic) unsigned int componentByteSize;
@property (readonly, nonatomic) unsigned int elementByteSize;
@property (readonly, nonatomic) unsigned int byteSize;
@property (readonly, nonatomic) struct tvec3<int> size;
@property (readonly, nonatomic) struct tvec2<int> size2;
@property (readonly, nonatomic) char hasLevels;

- (unsigned int)byteSize;
- (unsigned int)elementByteSize;
- (unsigned int)componentByteSize;
- (struct DataBufferLevelData)dataAtLevel:(SEL)arg0;
- (struct tvec2<int>)size2;
- (struct DataBufferInfo)bufferInfo;
- (struct DataBufferLevelData)dataWithSizeGreaterOrEqualTo:(SEL)arg0;
- (struct tvec3<int>)size;
- (NSString *)description;
- (char)hasLevels;

@end
