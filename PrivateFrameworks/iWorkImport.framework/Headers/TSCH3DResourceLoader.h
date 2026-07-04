/* Runtime dump - TSCH3DResourceLoader
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DResourceLoader : NSObject

+ (RUILoader *)loader;

- (void)postbindHandle:(id)arg0 config:(void *)arg1;
- (void)destroyHandle:(id)arg0 insideContext:(NSObject *)arg1;
- (char)shouldReuploadHandle:(id)arg0 config:(void *)arg1;
- (unsigned int)uploadResource:(NSObject *)arg0 handle:(_NSStdIOFileHandle *)arg1 insideSession:(NSObject *)arg2 config:(void *)arg3;
- (int)virtualScreenForContext:(NSObject *)arg0;

@end
