/* Runtime dump - SCRDUSBDevice
 * Image: /System/Library/PrivateFrameworks/ScreenReaderBrailleDriver.framework/ScreenReaderBrailleDriver
 */

@interface SCRDUSBDevice : NSObject
{
    struct IOUSBDeviceStruct300 * * _device;
    struct IOUSBInterfaceStruct220 * * _interface;
    char _isOpen;
    char _isConfigured;
    NSString * _privateRunLoopMode;
    struct IONotificationPort * _notificationPort;
    unsigned int _notification;
}

- (void)dealloc;
- (char)reset;
- (char)setConfiguration:(unsigned char)arg0;
- (char)close;
- (char)setInterface:(unsigned char)arg0;
- (char)open;
- (char)isOpen;
- (long)product;
- (void)registerForDisconnectNotifications:(char)arg0;
- (char)openWithSeize:(char)arg0;
- (unsigned long)_transferData:(void *)arg0 withSize:(unsigned long)arg1 toPipe:(unsigned char)arg2 withTimeout:(double)arg3 withFunction:(/* block */ id *)arg4;
- (long)vendor;
- (unsigned char)numberOfConfigurations;
- (char)setAlternateInterface:(unsigned char)arg0;
- (char)sendControlRequest:(unsigned char)arg0 type:(unsigned char)arg1 value:(unsigned short)arg2 index:(unsigned short)arg3 data:(void *)arg4 size:(unsigned short)arg5 sizeTransferred:(unsigned int *)arg6 pipe:(unsigned char)arg7 timeout:(double)arg8;
- (unsigned long)writeData:(void *)arg0 withSize:(unsigned long)arg1 toPipe:(unsigned char)arg2 withTimeout:(double)arg3;
- (char)writeData:(void *)arg0 withSize:(unsigned long)arg1 toBulkPipe:(unsigned char)arg2 withNoDataTimeout:(unsigned long)arg3 andCompletionTimeOut:(unsigned long)arg4;
- (unsigned long)readData:(void *)arg0 withSize:(unsigned long)arg1 fromPipe:(unsigned char)arg2 withTimeout:(double)arg3;
- (char)readData:(void *)arg0 withSize:(unsigned int *)arg1 fromPipe:(unsigned char)arg2;
- (unsigned long)readData:(void *)arg0 withSize:(unsigned long)arg1 fromBulkPipe:(unsigned char)arg2 withNoDataTimeout:(unsigned long)arg3 andCompletionTimeOut:(unsigned long)arg4;
- (char)getInformationForPipe:(unsigned char)arg0 direction:(char *)arg1 number:(char *)arg2 transferType:(char *)arg3 maxPacketSize:(unsigned short *)arg4 interval:(char *)arg5;
- (void)abortPipe:(unsigned char)arg0;
- (char)clearPipe:(unsigned char)arg0 bothEnds:(char)arg1;
- (SCRDUSBDevice *)initWithIOObject:(unsigned int)arg0;
- (char)isConfigured;

@end
