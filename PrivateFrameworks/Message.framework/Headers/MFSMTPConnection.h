/* Runtime dump - MFSMTPConnection
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFSMTPConnection : MFConnection
{
    MFSMTPResponse * _lastResponse;
    NSMutableArray * _serviceExtensions;
    NSMutableData * _mdata;
    NSString * _domainName;
    NSString * _saveSentMbox;
    int _originalSocketTimeout;
    long _lastCommandTimestamp;
    id _delegate;
    char _hideLoggedData;
    char _useSaveSent;
    char _dislikesSaveSentMbox;
}

- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (MFSMTPConnection *)init;
- (int)state;
- (char)authenticateUsingAccount:(NSObject *)arg0;
- (unsigned long long)maximumMessageBytes;
- (char)supportsOutboxCopy;
- (char)supportsBinaryMime;
- (void)setUseSaveSent:(char)arg0 toFolder:(NSString *)arg1;
- (int)mailFrom:(NSObject *)arg0 recipients:(id)arg1 withData:(NSData *)arg2 host:(NSString *)arg3 errorTitle:(id *)arg4 errorMessage:(id *)arg5 serverResponse:(id *)arg6 displayError:(char *)arg7 errorCode:(int *)arg8;
- (char)_hasParameter:(ICSRoleParameter *)arg0 forKeyword:(PLManagedKeyword *)arg1;
- (char)_supportsSaveSentExtension;
- (char)_supportsExtension:(id)arg0;
- (int)_sendCommand:(char *)arg0 length:(unsigned int)arg1 argument:(void *)arg2 trailer:(char *)arg3;
- (int)_getReply;
- (id)lastResponseLine;
- (char)_connectUsingAccount:(NSObject *)arg0;
- (int)_doHandshakeUsingAccount:(NSObject *)arg0;
- (char)supports8BitMime;
- (int)_sendData:(NSData *)arg0 progressHandler:(id /* block */)arg1;
- (NSObject *)_dataForCommand:(char *)arg0 length:(unsigned int)arg1 argument:(void *)arg2 trailer:(char *)arg3;
- (char)supportsChunking;
- (char)supportsPipelining;
- (NSObject *)dataForMailFrom:(NSObject *)arg0;
- (NSData *)dataForRcptTo:(id)arg0;
- (NSData *)dataForDataCmd;
- (int)_sendData:(NSData *)arg0;
- (int)sendBData:(NSData *)arg0;
- (int)sendData:(NSData *)arg0;
- (int)mailFrom:(NSObject *)arg0;
- (int)rcptTo:(id)arg0;
- (void)_setLastResponse:(NSURLResponse *)arg0;
- (int)_sendBytes:(char *)arg0 length:(unsigned int)arg1 progressHandler:(id /* block */)arg2;
- (int)_readResponseRange:(struct _NSRange *)arg0 isContinuation:(char *)arg1;
- (char)connectUsingAccount:(NSObject *)arg0;
- (MFSMTPResponse *)lastResponse;
- (NSString *)domainName;
- (void)setDomainName:(NSString *)arg0;
- (char)supportsEnhancedStatusCodes;
- (NSArray *)authenticationMechanisms;
- (char)authenticateUsingAccount:(NSObject *)arg0 authenticator:(_MFXYMPKIAuthenticator *)arg1;
- (int)noop;
- (long)timeLastCommandWasSent;
- (int)quit;
- (void)abort;

@end
