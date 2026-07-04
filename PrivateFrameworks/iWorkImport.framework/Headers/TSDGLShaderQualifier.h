/* Runtime dump - TSDGLShaderQualifier
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGLShaderQualifier : NSObject
{
    int _uniformLocation;
    char _needsUpdate;
    NSString * _name;
}

@property (readonly, nonatomic) char needsUpdate;
@property (nonatomic) int uniformLocation;
@property (readonly, nonatomic) NSString * name;

- (void)setGLUniformWithShader:(NSObject *)arg0;
- (void)setGLUniformCheckWithShader:(NSObject *)arg0;
- (void)updateUniformLocationWithShaderProgramObject:(int)arg0;
- (int)uniformLocation;
- (void)setUniformLocation:(int)arg0;
- (void)dealloc;
- (NSString *)name;
- (TSDGLShaderQualifier *)initWithName:(NSString *)arg0;
- (char)needsUpdate;

@end
