/* Runtime dump - VCSecureDataChannel
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface VCSecureDataChannel : NSObject
{
    struct tagCONNRESULT connectionResult;
    struct _tls_record_s * tlsRecord;
    <VCSecureDataChannelDelegate> * _delegate;
}

@property <VCSecureDataChannelDelegate> * delegate;
@property (readonly) int maxEncryptedDataSize;
@property (readonly) int maxUnencryptedDataSize;

- (void)dealloc;
- (void)setDelegate:(<VCSecureDataChannelDelegate> *)arg0;
- (<VCSecureDataChannelDelegate> *)delegate;
- (long)sendData:(NSData *)arg0 encrypted:(char)arg1;
- (VCSecureDataChannel *)initWithConnectionResult:(struct tagCONNRESULT *)arg0 sharedSecret:(struct tagIPPORT)arg1 error:(struct tagIPPORT)arg2;
- (long)setupWithSharedSecret:(NSString *)arg0 error:(id *)arg1;
- (long)verifyAndDecryptData:(NSData *)arg0 decryptedData:(id *)arg1;
- (int)maxEncryptedDataSize;
- (int)maxUnencryptedDataSize;

@end
