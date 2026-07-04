/* Runtime dump - iAUPServer
 * Image: /System/Library/PrivateFrameworks/EAFirmwareUpdater.framework/EAFirmwareUpdater
 */

@interface iAUPServer : NSObject
{
    <iAUPServerDelegate> * _delegate;
    int _parserState;
    char _escapeInProgress;
    unsigned int _telegramLength;
    unsigned char _telegramChecksum;
    NSMutableData * _telegramDataIn;
    id objectBlockTransferSizes;
    unsigned int _firmwareImageBaseTransferAddress;
    FirmwareBundle * firmwareBundle;
}

@property <iAUPServerDelegate> * delegate;
@property (retain) FirmwareBundle * firmwareBundle;

+ (iAUPServer *)sharedServer;

- (void)dealloc;
- (void)setDelegate:(<iAUPServerDelegate> *)arg0;
- (iAUPServer *)init;
- (<iAUPServerDelegate> *)delegate;
- (void)appendToLog:(id)arg0;
- (void)setFirmwareBundle:(FirmwareBundle *)arg0;
- (void)processInByte:(unsigned char)arg0;
- (void)resetParser;
- (void)processInTelegram;
- (void)logCommand:(unsigned char)arg0 payload:(char *)arg1 length:(unsigned int)arg2;
- (void)sendCommand:(unsigned char)arg0 payload:(char *)arg1 payload_length:(unsigned short)arg2;
- (unsigned char)appendByteWithEscaping:(unsigned char)arg0 toObject:(id *)arg1;
- (unsigned int)supportedTargetProductIDCode;
- (void)processDataFromAccessory:(id)arg0;
- (void)setBootloaderEntry;
- (FirmwareBundle *)firmwareBundle;

@end
