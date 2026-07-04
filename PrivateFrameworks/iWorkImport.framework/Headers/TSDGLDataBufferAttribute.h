/* Runtime dump - TSDGLDataBufferAttribute
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGLDataBufferAttribute : NSObject
{
    char _isNormalized;
    NSString * _name;
    unsigned int _bufferUsage;
    int _dataType;
    int _componentCount;
    int _locationInShader;
    unsigned int _bufferOffset;
    TSDGLDataArrayBuffer * _dataArrayBuffer;
    TSDGLDataBuffer * _dataBuffer;
}

@property (copy, nonatomic) NSString * name;
@property (readonly, nonatomic) unsigned int bufferUsage;
@property (readonly, nonatomic) int dataType;
@property (readonly, nonatomic) int componentCount;
@property (readonly, nonatomic) char isNormalized;
@property (nonatomic) int locationInShader;
@property (nonatomic) unsigned int bufferOffset;
@property (nonatomic) TSDGLDataArrayBuffer * dataArrayBuffer;
@property (nonatomic) TSDGLDataBuffer * dataBuffer;

+ (NSString *)attributeWithName:(NSString *)arg0 bufferUsage:(unsigned int)arg1 dataType:(int)arg2 normalized:(char)arg3 componentCount:(unsigned int)arg4;

- (TSDGLDataBufferAttribute *)initWithName:(NSString *)arg0 bufferUsage:(unsigned int)arg1 dataType:(int)arg2 normalized:(char)arg3 componentCount:(unsigned int)arg4;
- (int)componentCount;
- (unsigned int)bufferUsage;
- (char)isNormalized;
- (void)setBufferUsage:(unsigned int)arg0;
- (void)setComponentCount:(int)arg0;
- (int)locationInShader;
- (void)setLocationInShader:(int)arg0;
- (unsigned int)bufferOffset;
- (void)setBufferOffset:(unsigned int)arg0;
- (TSDGLDataArrayBuffer *)dataArrayBuffer;
- (void)setDataArrayBuffer:(TSDGLDataArrayBuffer *)arg0;
- (TSDGLDataBuffer *)dataBuffer;
- (void)setDataBuffer:(TSDGLDataBuffer *)arg0;
- (int)dataType;
- (void)dealloc;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;

@end
