/* Runtime dump - IMTranscodeController
 * Image: /System/Library/PrivateFrameworks/IMTranscoding.framework/IMTranscoding
 */

@interface IMTranscodeController : NSObject
{
    NSObject<OS_xpc_object> * _connection;
}

+ (IMTranscodeController *)sharedInstance;

- (void)dealloc;
- (IMTranscodeController *)init;
- (char)_connect;
- (void)_disconnected;
- (void)_transcodeFileTransferContents:(id)arg0 utiType:(NSString *)arg1 allowUnfilteredUTIs:(id)arg2 target:(int)arg3 highQualityMaxByteSize:(unsigned long)arg4 lowQualityMaxByteSize:(unsigned long)arg5 maxDimension:(unsigned long)arg6 transcoderUserInfo:(NSDictionary *)arg7 representations:(int)arg8 retries:(int)arg9 completionBlock:(id /* block */)arg10;
- (void)transcodeFileTransferContents:(id)arg0 utiType:(NSString *)arg1 allowUnfilteredUTIs:(id)arg2 target:(int)arg3 highQualityMaxByteSize:(unsigned long)arg4 lowQualityMaxByteSize:(unsigned long)arg5 maxDimension:(unsigned long)arg6 transcoderUserInfo:(NSDictionary *)arg7 representations:(int)arg8 completionBlock:(id /* block */)arg9;

@end
