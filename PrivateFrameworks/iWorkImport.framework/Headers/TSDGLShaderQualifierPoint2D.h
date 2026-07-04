/* Runtime dump - TSDGLShaderQualifierPoint2D
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGLShaderQualifierPoint2D : TSDGLShaderQualifier
{
    struct ? _GLPoint2DValue;
    struct ? _proposedGLPoint2DValue;
}

@property (readonly, nonatomic) struct ? GLPoint2DValue;
@property (nonatomic) struct ? proposedGLPoint2DValue;

- (void)setGLUniformWithShader:(NSObject *)arg0;
- (struct ?)GLPoint2DValue;
- (void)setProposedGLPoint2DValue:(struct ?)arg0;
- (struct ?)proposedGLPoint2DValue;
- (NSString *)description;

@end
