/* Runtime dump - TSCH3DShaderProgramHandle
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DShaderProgramHandle : TSCH3DGLHandle
{
    TSCH3DShaderHandle * mVertexShader;
    TSCH3DShaderHandle * mFragmentShader;
    TSCH3DShaderEffectsStates * mCurrentEffectsStates;
    NSMutableDictionary * mUniformLocations;
    NSMutableDictionary * mAttributeLocations;
}

@property (readonly, nonatomic) TSCH3DShaderHandle * vertexShader;
@property (readonly, nonatomic) TSCH3DShaderHandle * fragmentShader;
@property (readonly, nonatomic) TSCH3DShaderEffectsStates * currentEffectsStates;
@property (readonly, nonatomic) NSMutableDictionary * uniformLocations;
@property (readonly, nonatomic) NSMutableDictionary * attributeLocations;

- (void)destroyResourcesInContext:(NSObject *)arg0;
- (TSCH3DShaderProgramHandle *)initWithGLHandle:(unsigned int)arg0;
- (TSCH3DShaderEffectsStates *)currentEffectsStates;
- (NSMutableDictionary *)uniformLocations;
- (NSMutableDictionary *)attributeLocations;
- (TSCH3DShaderHandle *)vertexShader;
- (TSCH3DShaderHandle *)fragmentShader;
- (void)dealloc;

@end
