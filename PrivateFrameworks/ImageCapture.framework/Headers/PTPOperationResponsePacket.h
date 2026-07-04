/* Runtime dump - PTPOperationResponsePacket
 * Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPOperationResponsePacket : NSObject
{
    int _numParameters;
    unsigned short _responseCode;
    unsigned long _transactionID;
    id _parameters;
}

- (unsigned short)responseCode;
- (NSString *)description;
- (unsigned long)transactionID;
- (NSData *)contentForTCP;
- (PTPOperationResponsePacket *)initWithTCPBuffer:(void *)arg0;
- (unsigned long)parameter1;
- (int)numParameters;
- (unsigned long)parameter2;
- (unsigned long)parameter3;
- (unsigned long)parameter4;
- (unsigned long)parameter5;
- (void)setTransactionID:(unsigned long)arg0;
- (PTPOperationResponsePacket *)initWithUSBBuffer:(void *)arg0;
- (id)contentForUSB;
- (NSObject *)contentForUSBUsingBuffer:(void *)arg0 capacity:(unsigned long)arg1;
- (void)setParameter1:(unsigned long)arg0;
- (void)setParameter2:(unsigned long)arg0;
- (void)setParameter3:(unsigned long)arg0;
- (unsigned long)parameterAtIndex:(unsigned long)arg0;
- (void)setPparameter:(unsigned long)arg0 atIndex:(unsigned long)arg1;
- (void)setParameter4:(unsigned long)arg0;
- (void)setParameter5:(unsigned long)arg0;
- (PTPOperationResponsePacket *)initWithResponseCode:(unsigned short)arg0 transactionID:(unsigned long)arg1 numParameters:(unsigned long)arg2 parameters:(unsigned int *)arg3;
- (PTPOperationResponsePacket *)initWithResponseCode:(unsigned short)arg0 transactionID:(unsigned long)arg1;
- (PTPOperationResponsePacket *)initWithResponseCode:(unsigned short)arg0 transactionID:(unsigned long)arg1 parameter1:(unsigned long)arg2;
- (PTPOperationResponsePacket *)initWithResponseCode:(unsigned short)arg0 transactionID:(unsigned long)arg1 parameter1:(unsigned long)arg2 parameter2:(unsigned long)arg3;
- (PTPOperationResponsePacket *)initWithResponseCode:(unsigned short)arg0 transactionID:(unsigned long)arg1 parameter1:(unsigned long)arg2 parameter2:(unsigned long)arg3 parameter3:(unsigned long)arg4;
- (PTPOperationResponsePacket *)initWithResponseCode:(unsigned short)arg0 transactionID:(unsigned long)arg1 parameter1:(unsigned long)arg2 parameter2:(unsigned long)arg3 parameter3:(unsigned long)arg4 parameter4:(unsigned long)arg5;
- (PTPOperationResponsePacket *)initWithResponseCode:(unsigned short)arg0 transactionID:(unsigned long)arg1 parameter1:(unsigned long)arg2 parameter2:(unsigned long)arg3 parameter3:(unsigned long)arg4 parameter4:(unsigned long)arg5 parameter5:(unsigned long)arg6;
- (void)setResponseCode:(unsigned short)arg0;

@end
