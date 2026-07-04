/* Runtime dump - TSDGLShaderQualifierMat3
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGLShaderQualifierMat3 : TSDGLShaderQualifier
{
    struct CGAffineTransform _affineTransform;
    struct CGAffineTransform _proposedAffineTransform;
}

@property (readonly, nonatomic) struct CGAffineTransform affineTransform;
@property (nonatomic) struct CGAffineTransform proposedAffineTransform;

- (void)setGLUniformWithShader:(NSObject *)arg0;
- (TSDGLShaderQualifierMat3 *)initWithAffineTransform:(struct CGAffineTransform)arg0;
- (void)setProposedAffineTransform:(struct CGAffineTransform)arg0;
- (struct CGAffineTransform)proposedAffineTransform;
- (NSString *)description;
- (struct CGAffineTransform)affineTransform;

@end
