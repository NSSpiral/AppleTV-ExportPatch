/* Runtime dump - MFSecureMIMECompositionManager
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFSecureMIMECompositionManager : NSObject
{
    <MFSecureMIMECompositionManagerDelegate> * _delegate;
    NSLock * _lock;
    NSObject<OS_dispatch_queue> * _queue;
    MailAccount * _sendingAccount;
    NSString * _sendingAddress;
    struct __SecIdentity * _signingIdentity;
    MFError * _signingIdentityError;
    struct __SecIdentity * _encryptionIdentity;
    MFError * _encryptionIdentityError;
    NSMutableSet * _recipients;
    NSMutableDictionary * _errorsByRecipient;
    NSMutableDictionary * _certificatesByRecipient;
    int _signingPolicy;
    int _encryptionPolicy;
    int _signingStatus;
    int _encryptionStatus;
    unsigned int _encryptionStatusSemaphore;
    unsigned int _signingStatusSemaphore;
    char _invalidated;
}

@property <MFSecureMIMECompositionManagerDelegate> * delegate;
@property (copy) NSString * sendingAddress;
@property (readonly) MailAccount * sendingAccount;
@property (readonly) int signingPolicy;
@property (readonly) int encryptionPolicy;
@property (readonly) int signingStatus;
@property (readonly) int encryptionStatus;
@property (readonly) NSSet * recipients;

+ (struct __SecIdentity *)copySigningIdentityForAccount:(NSObject *)arg0 sendingAddress:(NSString *)arg1 error:(id *)arg2;
+ (struct __SecIdentity *)copyEncryptionIdentityForAccount:(NSObject *)arg0 sendingAddress:(NSString *)arg1 error:(id *)arg2;
+ (NSNumber *)copyEncryptionCertificatesForAccount:(NSObject *)arg0 recipientAddress:(AFContactAddress *)arg1 error:(id *)arg2;

- (void)dealloc;
- (void)setDelegate:(<MFSecureMIMECompositionManagerDelegate> *)arg0;
- (MFSecureMIMECompositionManager *)init;
- (<MFSecureMIMECompositionManagerDelegate> *)delegate;
- (void)invalidate;
- (NSDictionary *)compositionSpecification;
- (MFSecureMIMECompositionManager *)initWithSendingAccount:(MailAccount *)arg0 signingPolicy:(int)arg1 encryptionPolicy:(int)arg2;
- (char)_updateSigningStatus_nts;
- (char)_updateEncryptionStatus_nts;
- (void)_notifyDelegateEncryptionStatusDidChange:(int)arg0 certsByRecipient:(id)arg1 errorsByRecipient:(NSMutableDictionary *)arg2 identity:(struct __SecIdentity *)arg3 error:(NSError *)arg4;
- (void)_determineEncryptionStatusWithNewRecipients:(char)arg0;
- (void)_notifyDelegateSigningStatusDidChange:(int)arg0 identity:(struct __SecIdentity *)arg1 error:(NSError *)arg2;
- (void)_determineSigningStatusWithSendingAddress:(NSString *)arg0;
- (void)_determineEncryptionStatusWithSendingAddress:(NSString *)arg0;
- (void)_setSigningIdentityError_nts:(id)arg0;
- (void)_setEncryptionIdentityError_nts:(id)arg0;
- (char)_shouldAllowSend_nts;
- (char)_shouldSign_nts;
- (char)_shouldEncrypt_nts;
- (MFSecureMIMECompositionManager *)initWithSigningPolicy:(int)arg0 encryptionPolicy:(int)arg1;
- (void)addRecipients:(id)arg0;
- (void)removeRecipients:(id)arg0;
- (void)setSendingAddress:(NSString *)arg0;
- (NSString *)sendingAddress;
- (MailAccount *)sendingAccount;
- (int)signingPolicy;
- (int)encryptionPolicy;
- (int)signingStatus;
- (int)encryptionStatus;
- (NSSet *)recipients;
- (char)shouldAllowSend;

@end
