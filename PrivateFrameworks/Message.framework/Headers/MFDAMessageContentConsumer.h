/* Runtime dump - MFDAMessageContentConsumer
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFDAMessageContentConsumer : NSObject <MFDAStreamingContentConsumer>
{
    int _requestedFormat;
    <MFCollectingDataConsumer> * _dataConsumer;
    <MFCollectingDataConsumer> * _alternatePartConsumer;
    <MFMessageDataConsumerFactory> * _consumerFactory;
    char _triedCreatingAlternatePartConsumer;
    char _didBeginStreaming;
    char _succeeded;
    NSMutableData * _bodyData;
    double _timeOfLastActivity;
    DAMailMessage * _message;
}

@property (nonatomic) int requestedFormat;
@property (retain, nonatomic) <MFCollectingDataConsumer> * dataConsumer;
@property (retain, nonatomic) <MFCollectingDataConsumer> * alternatePartConsumer;
@property (retain, nonatomic) <MFMessageDataConsumerFactory> * consumerFactory;
@property (readonly, retain, nonatomic) DAMailMessage * message;
@property (readonly, retain, nonatomic) NSMutableData * bodyData;
@property (readonly, nonatomic) double timeOfLastActivity;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)succeeded;
- (NSMutableData *)bodyData;
- (void)dealloc;
- (NSData *)data;
- (DAMailMessage *)message;
- (char)didBeginStreaming;
- (double)timeOfLastActivity;
- (void)setRequestedFormat:(int)arg0;
- (void)setDataConsumer:(<MFCollectingDataConsumer> *)arg0;
- (void)setConsumerFactory:(<MFMessageDataConsumerFactory> *)arg0;
- (id)dataConsumerForPart:(id)arg0;
- (char)shouldBeginStreamingForMailMessage:(NSString *)arg0 format:(int)arg1;
- (void)consumeData:(char *)arg0 length:(int)arg1 format:(int)arg2 mailMessage:(NSString *)arg3;
- (void)didEndStreamingForMailMessage:(NSString *)arg0;
- (<MFMessageDataConsumerFactory> *)consumerFactory;
- (void)setAlternatePartConsumer:(<MFCollectingDataConsumer> *)arg0;
- (<MFCollectingDataConsumer> *)alternatePartConsumer;
- (<MFCollectingDataConsumer> *)dataConsumer;
- (int)requestedFormat;

@end
