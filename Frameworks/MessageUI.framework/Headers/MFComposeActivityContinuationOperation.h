/* Runtime dump - MFComposeActivityContinuationOperation
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFComposeActivityContinuationOperation : NSOperation <NSStreamDelegate>
{
    char _finished;
    char _executing;
    NSObject<OS_dispatch_queue> * _streamHandlerQueue;
    NSInputStream * _inputStream;
    NSOutputStream * _outputStream;
    NSData * _draftData;
    unsigned int _draftDataByteIndex;
    unsigned int _draftBytesReceived;
    unsigned int _draftExpectedSize;
    unsigned int _transmissionType;
    char _doneWithInputStream;
    char _doneWithOutputStream;
    <MFComposeActivityContinuationOperationDelegate> * _delegate;
}

@property (retain, nonatomic) NSData * draftData;
@property (readonly, nonatomic) unsigned int bytesReceived;
@property (readonly, nonatomic) unsigned int bytesExpected;
@property (nonatomic) unsigned int transmissionType;
@property (nonatomic) <MFComposeActivityContinuationOperationDelegate> * delegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSInputStream *)receivingOperationWithInputStream:(NSInputStream *)arg0 outputStream:(NSOutputStream *)arg1;
+ (NSData *)sendingOperationWithDraftData:(NSData *)arg0 inputStream:(NSInputStream *)arg1 outputStream:(NSOutputStream *)arg2;

- (void)setTransmissionType:(unsigned int)arg0;
- (void)setDraftData:(NSData *)arg0;
- (void)_setExecuting:(char)arg0;
- (void)_startContinuationStreams;
- (void)_setFinished:(char)arg0;
- (void)_commonContinuationStreamInitializationWithStream:(NSObject *)arg0;
- (void)_receivingDataStream:(NSObject *)arg0 handleEvent:(unsigned int)arg1;
- (void)_receivingMessageStream:(NSObject *)arg0 handleEvent:(unsigned int)arg1;
- (void)_sendingDataStream:(NSObject *)arg0 handleEvent:(unsigned int)arg1;
- (void)_sendingMessageStream:(NSObject *)arg0 handleEvent:(unsigned int)arg1;
- (void)_handleErrorCode:(unsigned int)arg0 logString:(NSString *)arg1;
- (void)_didFinishTransferringContinuationPayload;
- (void)_failedToTransferContinuationPayload;
- (void)_checkInContinuationStream:(NSObject *)arg0;
- (void)_finishReceivingContinuationDataAndCloseStream;
- (void)_commonContinuationStreamTeardownWithStream:(id *)arg0;
- (unsigned int)bytesExpected;
- (unsigned int)transmissionType;
- (NSData *)draftData;
- (void)dealloc;
- (void)setDelegate:(<MFComposeActivityContinuationOperationDelegate> *)arg0;
- (<MFComposeActivityContinuationOperationDelegate> *)delegate;
- (void)start;
- (char)isFinished;
- (char)isExecuting;
- (char)isConcurrent;
- (MFComposeActivityContinuationOperation *)initWithInputStream:(NSInputStream *)arg0 outputStream:(NSOutputStream *)arg1;
- (void)stream:(NSObject *)arg0 handleEvent:(unsigned int)arg1;
- (void)_complete;
- (unsigned int)bytesReceived;

@end
