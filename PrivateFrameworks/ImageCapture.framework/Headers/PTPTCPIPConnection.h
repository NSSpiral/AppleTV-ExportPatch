/* Runtime dump - PTPTCPIPConnection
 * Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPTCPIPConnection : NSObject
{
    PTPTCPIPTransport * _transport;
    NSTimer * _inactivityTimer;
    NSTimer * _receiveTimer;
    NSTimer * _transmitTimer;
    struct __CFReadStream * _inStream;
    struct __CFWriteStream * _outStream;
    NSObject<OS_dispatch_semaphore> * _receiveBufferSemaphore;
    NSMutableData * _recieveBuffer;
    unsigned int _bytesReceived;
    NSObject<OS_dispatch_semaphore> * _transmitBufferSemaphore;
    NSMutableData * _transmitBuffer;
    unsigned int _bytesSent;
}

- (void)dealloc;
- (void)close;
- (char)open;
- (void)handleCanAcceptBytes;
- (void)handleErrorOccurred:(struct ?)arg0;
- (PTPTCPIPConnection *)initWithNativeSocket:(int)arg0 transport:(PTPTCPIPTransport *)arg1;
- (PTPTCPIPConnection *)initWithSocketToHost:(NSString *)arg0 port:(unsigned long)arg1 transport:(PTPTCPIPTransport *)arg2;
- (void)handleHasBytesAvailable;
- (void)handleEndEncountered;
- (void)inactivityTimerCallBack:(id)arg0;
- (char)writeData:(NSData *)arg0;

@end
