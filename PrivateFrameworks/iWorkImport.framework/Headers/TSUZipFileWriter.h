/* Runtime dump - TSUZipFileWriter
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUZipFileWriter : TSUZipWriter
{
    <TSURandomWriteChannel> * _writeChannel;
}

+ (void)zipDirectoryAtURL:(NSURL *)arg0 customDirectoryFilename:(NSString *)arg1 toURL:(NSURL *)arg2 queue:(NSObject *)arg3 progressHandler:(id /* block */)arg4;
+ (void)zipDirectoryAtURL:(NSURL *)arg0 toURL:(NSURL *)arg1 queue:(NSObject *)arg2 completion:(id /* block */)arg3;

- (<TSURandomWriteChannel> *)writeChannel;
- (void).cxx_destruct;
- (TSUZipFileWriter *)initWithURL:(NSString *)arg0 options:(unsigned int)arg1 error:(id *)arg2;
- (TSUZipFileWriter *)initWithURL:(NSString *)arg0 error:(id *)arg1;

@end
