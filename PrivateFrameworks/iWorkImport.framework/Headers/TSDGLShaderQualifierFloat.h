/* Runtime dump - TSDGLShaderQualifierFloat
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGLShaderQualifierFloat : TSDGLShaderQualifier
{
    float _GLfloatValue;
    float _proposedGLfloatValue;
}

@property (readonly, nonatomic) float GLfloatValue;
@property (nonatomic) float proposedGLfloatValue;

- (void)setGLUniformWithShader:(NSObject *)arg0;
- (float)GLfloatValue;
- (void)setProposedGLfloatValue:(float)arg0;
- (float)proposedGLfloatValue;
- (NSString *)description;

@end
