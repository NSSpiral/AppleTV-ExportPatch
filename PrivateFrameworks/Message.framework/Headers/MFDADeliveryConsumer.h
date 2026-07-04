/* Runtime dump - MFDADeliveryConsumer
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFDADeliveryConsumer : MFDAMailAccountConsumer <DAMessageSendConsumer>
{
    MFError * _error;
    int _status;
    unsigned int _bytesRead;
    unsigned int _bytesWritten;
}

@property (retain, nonatomic) MFError * error;
@property (readonly, nonatomic) int status;
@property (readonly, nonatomic) unsigned int bytesRead;
@property (readonly, nonatomic) unsigned int bytesWritten;

- (void)dealloc;
- (int)status;
- (MFError *)error;
- (unsigned int)bytesWritten;
- (void)actionFailed:(int)arg0 forTask:(NSObject *)arg1 error:(MFError *)arg2;
- (void)messageDidSendWithContext:(NSObject *)arg0 sentBytesCount:(unsigned int)arg1 receivedBytesCount:(unsigned int)arg2;
- (unsigned int)bytesRead;
- (void)setError:(MFError *)arg0;

@end
