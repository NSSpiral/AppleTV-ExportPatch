/* Runtime dump - TSDGLShaderQualifierInt
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGLShaderQualifierInt : TSDGLShaderQualifier
{
    int _GLintValue;
    int _proposedGLintValue;
}

@property (readonly, nonatomic) int GLintValue;
@property (nonatomic) int proposedGLintValue;

- (void)setGLUniformWithShader:(NSObject *)arg0;
- (int)GLintValue;
- (void)setProposedGLintValue:(int)arg0;
- (int)proposedGLintValue;
- (NSString *)description;

@end
