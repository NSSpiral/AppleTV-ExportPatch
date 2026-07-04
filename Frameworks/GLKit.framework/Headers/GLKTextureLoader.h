/* Runtime dump - GLKTextureLoader
 * Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

@interface GLKTextureLoader : NSObject
{
    EAGLContext * _glContext;
    NSLock * _nsLock;
}

@property (retain) EAGLContext * glContext;
@property (retain) NSLock * nsLock;

+ (NSString *)lockAndSwitchContext:(NSObject *)arg0 glContext:(EAGLContext *)arg1;
+ (NSObject *)_textureWithTexture:(NSObject *)arg0 error:(id *)arg1;
+ (void)unlockAndRestoreContext:(NSObject *)arg0 glContext:(EAGLContext *)arg1;
+ (NSURL *)textureWithContentsOfURL:(NSURL *)arg0 options:(NSDictionary *)arg1 error:(id *)arg2;
+ (NSURL *)commonTextureWithContentsOfURL:(NSURL *)arg0 options:(NSDictionary *)arg1 error:(id *)arg2 lock:(id)arg3 glContext:(EAGLContext *)arg4;
+ (NSData *)commonTextureWithContentsOfData:(NSData *)arg0 options:(NSDictionary *)arg1 error:(id *)arg2 lock:(id)arg3 glContext:(EAGLContext *)arg4;
+ (UIImage *)commonTextureWithCGImage:(struct CGImage *)arg0 options:(NSDictionary *)arg1 error:(id *)arg2 lock:(id)arg3 glContext:(EAGLContext *)arg4;
+ (GLKTextureLoader *)commonCubeMapWithContentsOfFiles:(id)arg0 options:(NSDictionary *)arg1 error:(id *)arg2 lock:(id)arg3 glContext:(EAGLContext *)arg4;
+ (NSURL *)cubeMapWithContentsOfURL:(NSURL *)arg0 options:(NSDictionary *)arg1 error:(id *)arg2;
+ (NSURL *)commonCubeMapWithContentsOfURL:(NSURL *)arg0 options:(NSDictionary *)arg1 error:(id *)arg2 lock:(id)arg3 glContext:(EAGLContext *)arg4;
+ (NSString *)textureWithContentsOfFile:(NSString *)arg0 options:(NSDictionary *)arg1 error:(id *)arg2;
+ (NSData *)textureWithContentsOfData:(NSData *)arg0 options:(NSDictionary *)arg1 error:(id *)arg2;
+ (UIImage *)textureWithCGImage:(struct CGImage *)arg0 options:(NSDictionary *)arg1 error:(id *)arg2;
+ (GLKTextureLoader *)cubeMapWithContentsOfFiles:(id)arg0 options:(NSDictionary *)arg1 error:(id *)arg2;
+ (NSString *)cubeMapWithContentsOfFile:(NSString *)arg0 options:(NSDictionary *)arg1 error:(id *)arg2;

- (void)setGlContext:(EAGLContext *)arg0;
- (void)setNsLock:(NSLock *)arg0;
- (NSLock *)nsLock;
- (void)textureWithContentsOfURL:(NSURL *)arg0 options:(NSDictionary *)arg1 queue:(NSObject *)arg2 completionHandler:(id /* block */)arg3;
- (void)cubeMapWithContentsOfURL:(NSURL *)arg0 options:(NSDictionary *)arg1 queue:(NSObject *)arg2 completionHandler:(id /* block */)arg3;
- (GLKTextureLoader *)initWithSharegroup:(EAGLSharegroup *)arg0;
- (void)textureWithContentsOfFile:(NSString *)arg0 options:(NSDictionary *)arg1 queue:(NSObject *)arg2 completionHandler:(id /* block */)arg3;
- (void)textureWithContentsOfData:(NSData *)arg0 options:(NSDictionary *)arg1 queue:(NSObject *)arg2 completionHandler:(id /* block */)arg3;
- (void)textureWithCGImage:(struct CGImage *)arg0 options:(NSDictionary *)arg1 queue:(NSObject *)arg2 completionHandler:(id /* block */)arg3;
- (void)cubeMapWithContentsOfFiles:(id)arg0 options:(NSDictionary *)arg1 queue:(NSObject *)arg2 completionHandler:(id /* block */)arg3;
- (void)cubeMapWithContentsOfFile:(NSString *)arg0 options:(NSDictionary *)arg1 queue:(NSObject *)arg2 completionHandler:(id /* block */)arg3;
- (void)dealloc;
- (EAGLContext *)glContext;

@end
