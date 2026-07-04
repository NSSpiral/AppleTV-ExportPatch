/* Runtime dump - ATVDirectionalRemoteConnectionHandler
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVTCPControlReceiver;
@interface ATVDirectionalRemoteConnectionHandler : NSObject
{
    ATVTCPControlReceiver * _controlReceiver;
    unsigned long _receiverDecryptionKey;
    NSMutableData * _remainderData;
    id _delegate;
}

- (void)_promptReceived:(id)arg0;
- (id)_checkDataIntegrity:(id)arg0;
- (unsigned long)_decryptReceivedWord:(unsigned long)arg0;
- (void)allConnectionsClosed:(id)arg0;
- (void)newBytesReceived:(id)arg0 data:(NSData *)arg1;
- (void)_setupControlReceiver:(NSObject *)arg0 encryptionKey:(unsigned long)arg1;
- (void)_processTouchCommand:(NSObject *)arg0;
- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (ATVDirectionalRemoteConnectionHandler *)init;
- (NSObject *)delegate;

@end
