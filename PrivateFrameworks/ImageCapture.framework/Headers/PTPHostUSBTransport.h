/* Runtime dump - PTPHostUSBTransport
 * Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPHostUSBTransport : PTPTransport
{
    unsigned long _locationID;
    unsigned short _vendorID;
    unsigned short _productID;
    NSString * _usbSerialNumberString;
    struct IOUSBInterfaceStruct300 * * _interfaceInterfaceRef;
    unsigned char _bulkPipeIn;
    unsigned char _bulkPipeOut;
    unsigned char _interruptPipeIn;
    unsigned long _readBufferSize;
    unsigned long _writeBufferSize;
    unsigned long _eventDataBufferSize;
    char * _readBuffer;
    char * _writeBuffer;
    char * _eventDataBuffer;
    NSMutableData * _eventData;
    int _maxPacketSizeBulkIn;
    int _maxPacketSizeBulkOut;
    int _maxPacketSizeInterruptIn;
    struct __CFRunLoopSource * _CFRunLoopSource;
    char _connected;
}

- (void)dealloc;
- (NSString *)description;
- (char)sendEvent:(NSObject *)arg0;
- (void)stop;
- (void)setConnected:(char)arg0;
- (unsigned short)cancelRequest:(_UIAsyncInvocation *)arg0;
- (char)startInitiator;
- (int)waitForCallbackThreadConditionSignalWithTimeout:(long)arg0;
- (void)sendDataPackets:(id)arg0;
- (char)sendCancel:(id)arg0;
- (NSURLRequest *)sendRequest:(NSURLRequest *)arg0 receiveData:(NSData *)arg1 timeout:(unsigned long)arg2;
- (NSURLRequest *)sendRequest:(NSURLRequest *)arg0 sendData:(NSData *)arg1 timeout:(unsigned long)arg2;
- (void)cancelTransaction:(NSObject *)arg0;
- (PTPHostUSBTransport *)initWithLocationID:(unsigned long)arg0 delegate:(NSObject *)arg1;
- (void)abortPendingIO;
- (unsigned short)vendorID;
- (unsigned short)productID;
- (NSString *)usbSerialNumberString;
- (unsigned short)deviceStatus;
- (void)deviceReset;
- (int)readInterruptData;
- (char)writeBulkData:(NSData *)arg0;
- (int)readBulkDataWithTimeout:(unsigned long)arg0;
- (unsigned long)locationID;
- (void)dumpData:(void *)arg0 length:(int)arg1 comment:(MSASComment *)arg2;
- (char)handleBulkData:(unsigned long)arg0 result:(int)arg1;
- (void)handleInterruptData:(unsigned long)arg0;
- (void)clearPipeStall:(unsigned char)arg0;
- (void)clearBulkInPipeStall;
- (void)sendData:(NSData *)arg0;
- (char)connected;

@end
