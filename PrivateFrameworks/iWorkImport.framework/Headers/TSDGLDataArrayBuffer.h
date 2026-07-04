/* Runtime dump - TSDGLDataArrayBuffer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGLDataArrayBuffer : NSObject <TSDGLDataBufferAccessor>
{
    NSMutableArray * _vertexAttributes;
    unsigned int mVertexCount;
    unsigned long _dataTypeSizeInBytes;
    unsigned int _bufferUsage;
    int * mNeedsUpdateFirstIndex;
    int * mNeedsUpdateLastIndex;
    char * mGLData;
    char mGLDataBufferHasBeenSetup;
    unsigned int * mGLDataBuffers;
    NSMutableDictionary * mAttributeOffsetsDictionary;
    unsigned int _GLDataBufferEntrySize;
    unsigned int _bufferCount;
    unsigned int _currentBufferIndex;
}

@property (readonly, nonatomic) char hasUpdatedData;
@property (readonly, nonatomic) unsigned int GLDataBufferEntrySize;
@property (readonly, nonatomic) unsigned int bufferCount;
@property (nonatomic) unsigned int currentBufferIndex;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (unsigned int)bufferCount;
- (unsigned int)GLDataBufferEntrySize;
- (void)p_setupGLDataBufferIfNecessary;
- (char)hasUpdatedData;
- (unsigned int)currentBufferIndex;
- (void)addIndexRangeNeedsUpdate:(struct _NSRange)arg0;
- (void)addIndexNeedsUpdate:(int)arg0;
- (void)updateDataBufferIfNecessary;
- (void)setCurrentBufferIndex:(unsigned int)arg0;
- (unsigned int)p_bufferOffsetOfAttribute:(NSObject *)arg0 atIndex:(unsigned int)arg1 component:(unsigned int)arg2;
- (void)setGLfloat:(float)arg0 forAttribute:(NSObject *)arg1 atIndex:(unsigned int)arg2;
- (float)GLfloatForAttribute:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (void)setCGFloat:(float)arg0 forAttribute:(NSObject *)arg1 atIndex:(unsigned int)arg2;
- (struct ?)GLPoint2DForAttribute:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (void)setGLPoint2D:(struct ?)arg0 forAttribute:(NSObject *)arg1 atIndex:(unsigned int)arg2;
- (struct ?)GLPoint3DForAttribute:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (void)setGLPoint3D:(struct ?)arg0 forAttribute:(NSObject *)arg1 atIndex:(unsigned int)arg2;
- (struct ?)GLPoint4DForAttribute:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (void)setGLPoint4D:(struct ?)arg0 forAttribute:(NSObject *)arg1 atIndex:(unsigned int)arg2;
- (TSDGLDataArrayBuffer *)initWithVertexAttributes:(NSMutableArray *)arg0 vertexCount:(unsigned int)arg1 bufferCount:(unsigned int)arg2;
- (void)addAllIndexesNeedUpdate;
- (void)enableVertexAttributeArrayBuffersWithShader:(NSObject *)arg0;
- (void)disableVertexAttributeArrayBuffersWithShader:(NSObject *)arg0;
- (void)swapGLDataBuffers;
- (char *)GLDataPointer;
- (void)dealloc;
- (NSString *)description;
- (unsigned int)vertexCount;

@end
