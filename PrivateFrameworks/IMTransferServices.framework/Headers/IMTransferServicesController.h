/* Runtime dump - IMTransferServicesController
 * Image: /System/Library/PrivateFrameworks/IMTransferServices.framework/IMTransferServices
 */

@interface IMTransferServicesController : NSObject

+ (IMTransferServicesController *)sharedInstance;

- (void)_sendFilePath:(NSString *)arg0 topic:(NSString *)arg1 transferID:(NSNumber *)arg2 encryptFile:(char)arg3 retries:(int)arg4 progressBlock:(id /* block */)arg5 completionBlock:(/* block */ id)arg6;
- (void)_receiveFileTransfer:(id)arg0 topic:(NSString *)arg1 path:(NSString *)arg2 requestURLString:(NSString *)arg3 ownerID:(NSObject *)arg4 signature:(NSObject *)arg5 decryptionKey:(SFUCryptoKey *)arg6 retries:(int)arg7 fileSize:(unsigned long long)arg8 progressBlock:(id /* block */)arg9 completionBlock:(/* block */ id)arg10;
- (void)sendFilePath:(NSString *)arg0 topic:(NSString *)arg1 transferID:(NSNumber *)arg2 encryptFile:(char)arg3 progressBlock:(id /* block */)arg4 completionBlock:(/* block */ id)arg5;
- (void)receiveFileTransfer:(id)arg0 topic:(NSString *)arg1 path:(NSString *)arg2 requestURLString:(NSString *)arg3 ownerID:(NSObject *)arg4 signature:(NSObject *)arg5 decryptionKey:(SFUCryptoKey *)arg6 fileSize:(unsigned long long)arg7 progressBlock:(id /* block */)arg8 completionBlock:(/* block */ id)arg9;

@end
