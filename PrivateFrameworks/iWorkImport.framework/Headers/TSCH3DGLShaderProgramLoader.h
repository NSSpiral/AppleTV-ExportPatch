/* Runtime dump - TSCH3DGLShaderProgramLoader
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGLShaderProgramLoader : TSCH3DResourceLoader

+ (RUILoader *)loader;

- (void)deactivateHandle:(id)arg0 insideContext:(NSObject *)arg1;
- (unsigned int)uploadDataBuffer:(NSObject *)arg0 handle:(_NSStdIOFileHandle *)arg1 insideSession:(NSObject *)arg2 config:(void *)arg3;
- (void)postbindHandle:(id)arg0 config:(void *)arg1;
- (NSObject *)generateHandleWithConfig:(void *)arg0;
- (void)bindHandle:(id)arg0 config:(void *)arg1;
- (void)compileShaderSource:(struct IteratorRange<const char *>)arg0 forHandle:(_NSStdIOFileHandle *)arg1;
- (NSObject *)activateShader:(NSObject *)arg0 insideSession:(NSObject *)arg1;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;

@end
