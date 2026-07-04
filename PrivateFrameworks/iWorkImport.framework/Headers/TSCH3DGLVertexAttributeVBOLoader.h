/* Runtime dump - TSCH3DGLVertexAttributeVBOLoader
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGLVertexAttributeVBOLoader : TSCH3DGLVBOLoader
{
    int mLocation;
    struct AttributeSpecs mAttributeSpecs;
}

+ (int)attributeLocation:(NSObject *)arg0 shaderHandle:(TSCH3DShaderHandle *)arg1;
+ (RUILoader *)loader;

- (void)loadSingleValueInBuffer:(NSObject *)arg0;
- (void)loadSingleValue:(float *)arg0 components:(float)arg1;
- (char)activateResource:(NSObject *)arg0 location:(int)arg1 specs:(struct AttributeSpecs *)arg2 insideSession:(struct AttributeSpecs)arg3;
- (TSCH3DGLVertexAttributeVBOLoader *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (void).cxx_construct;
- (void)setClientState:(struct DataBufferInfo *)arg0;

@end
