/* Runtime dump - PTPEventPacket
 * Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPEventPacket : NSObject
{
    int _numParameters;
    unsigned short _eventCode;
    unsigned long _transactionID;
    id _parameters;
}

- (NSString *)description;
- (unsigned long)transactionID;
- (NSData *)contentForTCP;
- (PTPEventPacket *)initWithTCPBuffer:(void *)arg0;
- (unsigned long)parameter1;
- (PTPEventPacket *)initWithEventCode:(unsigned short)arg0 transactionID:(unsigned long)arg1 parameter1:(unsigned long)arg2;
- (unsigned long)parameter2;
- (unsigned long)parameter3;
- (void)setTransactionID:(unsigned long)arg0;
- (PTPEventPacket *)initWithUSBBuffer:(void *)arg0;
- (id)contentForUSB;
- (NSObject *)contentForUSBUsingBuffer:(void *)arg0 capacity:(unsigned long)arg1;
- (PTPEventPacket *)initWithEventCode:(unsigned short)arg0 transactionID:(unsigned long)arg1;
- (PTPEventPacket *)initWithEventCode:(unsigned short)arg0 transactionID:(unsigned long)arg1 parameter1:(unsigned long)arg2 parameter2:(unsigned long)arg3;
- (PTPEventPacket *)initWithEventCode:(unsigned short)arg0 transactionID:(unsigned long)arg1 parameter1:(unsigned long)arg2 parameter2:(unsigned long)arg3 parameter3:(unsigned long)arg4;
- (void)setParameter1:(unsigned long)arg0;
- (void)setParameter2:(unsigned long)arg0;
- (void)setParameter3:(unsigned long)arg0;
- (void)setEventCode:(unsigned short)arg0;
- (unsigned short)eventCode;

@end
