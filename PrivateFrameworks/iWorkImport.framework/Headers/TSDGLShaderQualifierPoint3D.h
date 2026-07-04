/* Runtime dump - TSDGLShaderQualifierPoint3D
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGLShaderQualifierPoint3D : TSDGLShaderQualifier
{
    struct ? _GLPoint3DValue;
    struct ? _proposedGLPoint3DValue;
}

@property (readonly, nonatomic) struct ? GLPoint3DValue;
@property (nonatomic) struct ? proposedGLPoint3DValue;

- (void)setGLUniformWithShader:(NSObject *)arg0;
- (struct ?)GLPoint3DValue;
- (void)setProposedGLPoint3DValue:(struct ?)arg0;
- (struct ?)proposedGLPoint3DValue;
- (NSString *)description;

@end
