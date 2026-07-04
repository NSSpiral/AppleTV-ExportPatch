/* Runtime dump - TSDGLShaderQualifierPoint4D
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGLShaderQualifierPoint4D : TSDGLShaderQualifier
{
    struct ? _GLPoint4DValue;
    struct ? _proposedGLPoint4DValue;
}

@property (readonly, nonatomic) struct ? GLPoint4DValue;
@property (nonatomic) struct ? proposedGLPoint4DValue;

- (void)setGLUniformWithShader:(NSObject *)arg0;
- (struct ?)GLPoint4DValue;
- (void)setProposedGLPoint4DValue:(struct ?)arg0;
- (struct ?)proposedGLPoint4DValue;
- (NSString *)description;

@end
