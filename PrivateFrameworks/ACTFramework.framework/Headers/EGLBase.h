/* Runtime dump - EGLBase
 * Image: /System/Library/PrivateFrameworks/ACTFramework.framework/ACTFramework
 */

@interface EGLBase : NSObject <ESRenderer>
{
    EAGLContext * mGLContext;
    EAGLContext * mGLBackupContext;
    unsigned int mFramebuffer;
    id mTextureArray;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (EGLBase *)init;
- (NSString *)context;
- (char)initializeOffScreenBuffers;
- (void)releaseTextures;
- (void)deleteBuffers;
- (int)checkCompileStatusForShader:(unsigned int)arg0;
- (int)checkLinkStatusForProgram:(unsigned int)arg0;
- (void)backupContext;
- (void)restoreContext;
- (void)setCurrentContext;
- (unsigned int)createProgramWithVertexShader:(char *)arg0 fragmentShader:(char *)arg1;
- (int)create:(unsigned char)arg0 destinationBuffers:(struct __CVBuffer * *)arg1 ofWidth:(struct __CVBuffer)arg2 andHeight:(int)arg3;
- (int)renderBuffer:(struct __IOSurface *)arg0 intoBuffer:(struct __IOSurface *)arg1 planeIndex:(unsigned int)arg2 usingProgram:(unsigned int)arg3 interpolate:(unsigned int)arg4 viewportOrigX:(int)arg5 viewportOrigY:(int)arg6 viewportWidth:(int)arg7 viewportHeight:(int)arg8 numIters:(unsigned int)arg9;
- (int)loadBuffer:(struct __IOSurface *)arg0 inTextureUnit:(unsigned int)arg1 uniformName:(char *)arg2 planeIndex:(unsigned int)arg3 usingProgram:(unsigned int)arg4;
- (int)renderIntoBuffer:(struct __IOSurface *)arg0 planeIndex:(unsigned int)arg1 usingProgram:(unsigned int)arg2 viewportOrigX:(int)arg3 viewportOrigY:(int)arg4 viewportWidth:(int)arg5 viewportHeight:(int)arg6;
- (int)renderInto16bitYBuffer:(unsigned short *)arg0 width:(unsigned long)arg1 height:(unsigned long)arg2 usingProgram:(unsigned int)arg3;
- (int)checkProgramValidity:(unsigned int)arg0;

@end
