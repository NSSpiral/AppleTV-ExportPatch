/* Runtime dump - TSPFileManager
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPFileManager : NSObject

+ (char)linkFileAtPath:(NSString *)arg0 toPath:(NSString *)arg1 error:(id *)arg2;
+ (char)linkOrCopyURL:(NSURL *)arg0 decryptionInfo:(<TSPCryptoInfo> *)arg1 toURL:(NSURL *)arg2 encryptionInfo:(NSDictionary *)arg3 error:(id *)arg4;
+ (char)copyReadChannel:(NSObject *)arg0 decryptionInfo:(<TSPCryptoInfo> *)arg1 size:(unsigned long long)arg2 toWriteChannel:(NSObject *)arg3 encryptionInfo:(NSDictionary *)arg4 error:(id *)arg5;
+ (NSString *)errorWithDomain:(NSString *)arg0 code:(int)arg1 sourcePath:(NSString *)arg2 targetPath:(NSString *)arg3;
+ (char)linkFileAtURL:(NSURL *)arg0 toURL:(NSURL *)arg1 error:(id *)arg2;
+ (void)transcodeReadChannel:(NSObject *)arg0 decryptionInfo:(<TSPCryptoInfo> *)arg1 size:(unsigned long long)arg2 toWriteChannel:(NSObject *)arg3 encryptionInfo:(NSDictionary *)arg4 synchronous:(char)arg5 completion:(id /* block */)arg6;
+ (void)copyReadChannel:(NSObject *)arg0 decryptionInfo:(<TSPCryptoInfo> *)arg1 size:(unsigned long long)arg2 toWriteChannel:(NSObject *)arg3 encryptionInfo:(NSDictionary *)arg4 synchronous:(char)arg5 completion:(id /* block */)arg6;
+ (void)copyReadChannel:(NSObject *)arg0 size:(unsigned long long)arg1 toWriteChannel:(NSObject *)arg2 synchronous:(char)arg3 completion:(id /* block */)arg4;
+ (NSObject<OS_dispatch_queue> *)ioQueue;
+ (char)linkOrCopyURL:(NSURL *)arg0 toURL:(NSURL *)arg1 error:(id *)arg2;
+ (void)copyReadChannel:(NSObject *)arg0 decryptionInfo:(<TSPCryptoInfo> *)arg1 toWriteChannel:(NSObject *)arg2 encryptionInfo:(NSDictionary *)arg3 completion:(id /* block */)arg4;

@end
