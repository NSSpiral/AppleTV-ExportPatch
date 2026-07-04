/* Runtime dump - TSDGLDataBuffer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGLDataBuffer : NSObject <TSDGLDataBufferAccessor>
{
    unsigned int mCurrentBufferIndex;
    NSMutableArray * mArrayBuffers;
    NSMutableDictionary * mAttributeToArrayBuffersDictionary;
    unsigned int mElementArrayCount;
    unsigned short * mGLElementData;
    char mGLElementDataBufferWasSetup;
    unsigned int mGLElementDataBuffer;
    struct CGSize mGLElementMeshSize;
    unsigned int mGLElementQuadParticleCount;
    id mGLVertexArrayObjects;
    char _isUpdatingRawDataBuffer;
    char _didTeardown;
    char _isEnabled;
    TSDGLShader * _enabledShader;
    char _isDoubleBuffered;
    unsigned int _vertexCount;
    NSArray * _vertexAttributes;
    unsigned int _drawMode;
}

@property (readonly) unsigned int vertexCount;
@property (readonly) NSArray * vertexAttributes;
@property (nonatomic) unsigned int drawMode;
@property (readonly) char isDoubleBuffered;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setGLfloat:(float)arg0 forAttribute:(NSObject *)arg1 atIndex:(unsigned int)arg2;
- (float)GLfloatForAttribute:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (void)setCGFloat:(float)arg0 forAttribute:(NSObject *)arg1 atIndex:(unsigned int)arg2;
- (struct ?)GLPoint2DForAttribute:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (void)setGLPoint2D:(struct ?)arg0 forAttribute:(NSObject *)arg1 atIndex:(unsigned int)arg2;
- (struct ?)GLPoint3DForAttribute:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (void)setGLPoint3D:(struct ?)arg0 forAttribute:(NSObject *)arg1 atIndex:(unsigned int)arg2;
- (struct ?)GLPoint4DForAttribute:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (void)setGLPoint4D:(struct ?)arg0 forAttribute:(NSObject *)arg1 atIndex:(unsigned int)arg2;
- (void)setGLushort:(unsigned short)arg0 forIndexElement:(unsigned int)arg1;
- (TSDGLDataBuffer *)initWithVertexAttributes:(NSArray *)arg0 vertexCount:(unsigned int)arg1 indexElementCount:(unsigned int)arg2 doubleBuffered:(char)arg3;
- (TSDGLDataBuffer *)initWithVertexAttributes:(NSArray *)arg0 meshSize:(struct CGSize)arg1;
- (TSDGLDataBuffer *)initWithVertexRect:(struct CGRect)arg0 textureRect:(struct CGSize)arg1 meshSize:(NSObject *)arg2 textureFlipped:(struct CGRect)arg3 includeCenterAttribute:(struct CGSize)arg4;
- (TSDGLDataBuffer *)initWithVertexRect:(struct CGRect)arg0 textureRect:(struct CGSize)arg1 meshSize:(NSObject *)arg2 textureFlipped:(struct CGRect)arg3;
- (TSDGLDataBuffer *)initWithVertexRect:(struct CGRect)arg0 textureRect:(struct CGSize)arg1 meshSize:(NSObject *)arg2;
- (void)p_setupGLElementArrayBufferIfNecessary;
- (void)enableElementArrayBuffer;
- (void)drawWithShader:(NSObject *)arg0 deactivateShaderWhenDone:(char)arg1;
- (void)drawWithShader:(NSObject *)arg0 range:(struct _NSRange)arg1 deactivateShaderWhenDone:(char)arg2;
- (void)enableDataBufferWithShader:(NSObject *)arg0;
- (void)disableDataBufferWithShader:(NSObject *)arg0;
- (char)p_setAttributeUpdateData:(struct ? *)arg0 fromAttribute:(unsigned int)arg1;
- (TSDGLDataBuffer *)initWithVertexAttributes:(NSArray *)arg0 quadParticleCount:(unsigned int)arg1;
- (TSDGLDataBuffer *)initWithVertexRect:(struct CGRect)arg0 textureRect:(struct CGSize)arg1;
- (TSDGLDataBuffer *)initWithVertexRect:(struct CGRect)arg0 textureRect:(struct CGSize)arg1 textureFlipped:(struct CGRect)arg2;
- (unsigned short)GLushortForIndexElement:(unsigned int)arg0;
- (void)disableElementArrayBuffer;
- (void)drawWithShader:(NSObject *)arg0;
- (void)setDataForAttribute:(NSObject *)arg0 atIndex:(unsigned int)arg1 fromAttribute:(NSObject *)arg2 dataBuffer:(TSDGLDataBuffer *)arg3 index:(unsigned int)arg4;
- (id)vertexAttributeNamed:(id)arg0;
- (void)updateDataBufferAttributes:(NSDictionary *)arg0 withBlock:(id /* block */)arg1;
- (void)dealloc;
- (NSString *)description;
- (unsigned int)drawMode;
- (void)setDrawMode:(unsigned int)arg0;
- (NSArray *)vertexAttributes;
- (char)isDoubleBuffered;
- (void)teardown;
- (unsigned int)vertexCount;

@end
