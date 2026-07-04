/* Runtime dump - PTPOperationRequestPacket
 * Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPOperationRequestPacket : NSObject
{
    int _numParameters;
    unsigned long _dataPhaseInfo;
    unsigned short _operationCode;
    unsigned long _transactionID;
    id _parameters;
}

- (NSString *)description;
- (unsigned long)transactionID;
- (NSData *)contentForTCP;
- (PTPOperationRequestPacket *)initWithTCPBuffer:(void *)arg0;
- (PTPOperationRequestPacket *)initWithOperationCode:(unsigned short)arg0 transactionID:(unsigned long)arg1 dataPhaseInfo:(unsigned long)arg2;
- (unsigned long)parameter1;
- (unsigned short)operationCode;
- (PTPOperationRequestPacket *)initWithOperationCode:(unsigned short)arg0 transactionID:(unsigned long)arg1 dataPhaseInfo:(unsigned long)arg2 parameter1:(unsigned long)arg3;
- (PTPOperationRequestPacket *)initWithOperationCode:(unsigned short)arg0 transactionID:(unsigned long)arg1 dataPhaseInfo:(unsigned long)arg2 parameter1:(unsigned long)arg3 parameter2:(unsigned long)arg4 parameter3:(unsigned long)arg5;
- (PTPOperationRequestPacket *)initWithOperationCode:(unsigned short)arg0 transactionID:(unsigned long)arg1 dataPhaseInfo:(unsigned long)arg2 parameter1:(unsigned long)arg3 parameter2:(unsigned long)arg4 parameter3:(unsigned long)arg5 parameter4:(unsigned long)arg6 parameter5:(unsigned long)arg7;
- (PTPOperationRequestPacket *)initWithOperationCode:(unsigned short)arg0 transactionID:(unsigned long)arg1 dataPhaseInfo:(unsigned long)arg2 parameter1:(unsigned long)arg3 parameter2:(unsigned long)arg4;
- (int)numParameters;
- (unsigned long)parameter2;
- (unsigned long)parameter3;
- (unsigned long)parameter4;
- (unsigned long)parameter5;
- (void)setTransactionID:(unsigned long)arg0;
- (PTPOperationRequestPacket *)initWithUSBBuffer:(void *)arg0;
- (id)contentForUSB;
- (NSObject *)contentForUSBUsingBuffer:(void *)arg0 capacity:(unsigned long)arg1;
- (void)setOperationCode:(unsigned short)arg0;
- (void)setParameter1:(unsigned long)arg0;
- (void)setParameter2:(unsigned long)arg0;
- (void)setParameter3:(unsigned long)arg0;
- (PTPOperationRequestPacket *)initWithOperationCode:(unsigned short)arg0 transactionID:(unsigned long)arg1 dataPhaseInfo:(unsigned long)arg2 numParameters:(unsigned long)arg3 parameters:(unsigned int *)arg4;
- (PTPOperationRequestPacket *)initWithOperationCode:(unsigned short)arg0 transactionID:(unsigned long)arg1 dataPhaseInfo:(unsigned long)arg2 parameter1:(unsigned long)arg3 parameter2:(unsigned long)arg4 parameter3:(unsigned long)arg5 parameter4:(unsigned long)arg6;
- (unsigned long)dataPhaseInfo;
- (void)setDataPhaseInfo:(unsigned long)arg0;
- (unsigned long)parameterAtIndex:(unsigned long)arg0;
- (void)setPparameter:(unsigned long)arg0 atIndex:(unsigned long)arg1;
- (void)setParameter4:(unsigned long)arg0;
- (void)setParameter5:(unsigned long)arg0;

@end
