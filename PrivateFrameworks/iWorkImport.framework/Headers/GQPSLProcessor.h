/* Runtime dump - GQPSLProcessor
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQPSLProcessor : GQPProcessor
{
    Class mGenerator;
}

- (char)go;
- (GQPSLProcessor *)initWithURL:(struct __CFURL *)arg0 indexFileName:(NSString *)arg1 outputType:(int)arg2 outputPath:(struct __CFString *)arg3 previewRequest:(struct __QLPreviewRequest *)arg4 progressiveHelper:(NSObject *)arg5 generator:(Class)arg6 zipArchive:(TSUZipFileArchive *)arg7 cryptoKey:(SFUCryptoKey *)arg8;
- (GQPSLProcessor *)initWithURL:(struct __CFURL *)arg0 zipArchive:(TSUZipFileArchive *)arg1 indexFileName:(NSString *)arg2 outputType:(int)arg3 outputPath:(struct __CFString *)arg4 previewRequest:(struct __QLPreviewRequest *)arg5 progressiveHelper:(NSObject *)arg6 generator:(Class)arg7 cryptoKey:(SFUCryptoKey *)arg8;
- (void)pushInitialState;
- (Class)generator;

@end
