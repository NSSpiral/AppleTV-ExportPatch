/* Runtime dump - TSDGLShaderQualifierMat4
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGLShaderQualifierMat4 : TSDGLShaderQualifier
{
    struct CATransform3D _transform3D;
    struct CATransform3D _proposedTransform3D;
}

@property (readonly, nonatomic) struct CATransform3D transform3D;
@property (nonatomic) struct CATransform3D proposedTransform3D;

- (void)setGLUniformWithShader:(NSObject *)arg0;
- (TSDGLShaderQualifierMat4 *)initWithTransform3D:(struct CATransform3D)arg0;
- (void)setProposedTransform3D:(struct CATransform3D)arg0;
- (struct CATransform3D)proposedTransform3D;
- (NSString *)description;
- (struct CATransform3D)transform3D;

@end
