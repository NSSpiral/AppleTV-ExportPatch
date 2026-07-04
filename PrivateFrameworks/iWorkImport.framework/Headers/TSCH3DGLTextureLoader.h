/* Runtime dump - TSCH3DGLTextureLoader
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGLTextureLoader : TSCH3DResourceLoader

+ (TSCH3DGLTextureLoader *)allocWithZone:(struct _NSZone *)arg0;
+ (TSCH3DGLTextureLoader *)_singletonAlloc;
+ (RUILoader *)loader;

- (void)deactivateHandle:(id)arg0 insideContext:(NSObject *)arg1;
- (unsigned int)uploadDataBuffer:(NSObject *)arg0 handle:(_NSStdIOFileHandle *)arg1 insideSession:(NSObject *)arg2 config:(void *)arg3;
- (void)postbindHandle:(id)arg0 config:(void *)arg1;
- (char)shouldReuploadHandle:(id)arg0 config:(void *)arg1;
- (unsigned int)uploadResource:(NSObject *)arg0 handle:(_NSStdIOFileHandle *)arg1 insideSession:(NSObject *)arg2 config:(void *)arg3;
- (NSObject *)generateHandleWithConfig:(void *)arg0;
- (void)bindHandle:(id)arg0 config:(void *)arg1;
- (char)activateResource:(NSObject *)arg0 insideSession:(NSObject *)arg1 unit:(int)arg2 type:(int)arg3 attributes:(struct TextureAttributes *)arg4;
- (NSObject *)p_convertDataBuffer:(NSObject *)arg0 format:(struct TSCH3DGLTextureFormat)arg1 returningConvertedFormat:(struct TSCH3DGLTextureFormat *)arg2;
- (TSCH3DGLTextureLoader *)retain;
- (void)release;
- (TSCH3DGLTextureLoader *)autorelease;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)retainCount;
- (unsigned int)hash;
- (TSCH3DGLTextureLoader *)copyWithZone:(struct _NSZone *)arg0;

@end
