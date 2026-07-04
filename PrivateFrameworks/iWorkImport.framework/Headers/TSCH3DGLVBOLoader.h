/* Runtime dump - TSCH3DGLVBOLoader
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGLVBOLoader : TSCH3DResourceLoader
{
    unsigned int mType;
}

+ (NSObject *)loaderWithType:(unsigned int)arg0;

- (void)deactivateHandle:(id)arg0 insideContext:(NSObject *)arg1;
- (unsigned int)uploadDataBuffer:(NSObject *)arg0 handle:(_NSStdIOFileHandle *)arg1 insideSession:(NSObject *)arg2 config:(void *)arg3;
- (NSObject *)generateHandleWithConfig:(void *)arg0;
- (void)bindHandle:(id)arg0 config:(void *)arg1;
- (unsigned int)usageOfResource:(NSObject *)arg0;
- (void)loadSingleValueInBuffer:(NSObject *)arg0;
- (char)activateResource:(NSObject *)arg0 insideSession:(NSObject *)arg1;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (TSCH3DGLVBOLoader *)initWithType:(unsigned int)arg0;
- (void)setClientState:(struct DataBufferInfo *)arg0;

@end
