/* Runtime dump - MFDAMailAccountSyncConsumer
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFDAMailAccountSyncConsumer : MFDAMailAccountConsumer <DAMailboxRequestConsumer, DAMailboxStreamingContentConsumer>
{
    NSArray * _requests;
    NSArray * _consumers;
    NSString * _tag;
    NSString * _accountID;
    MFActivityMonitor * _monitor;
    id _streamConsumer;
    NSMutableData * _bodyData;
    char _moreAvailable;
    char _receivedFirstItem;
    char _firstSyncBatch;
    int _syncKeyResets;
    int _serverErrors;
}

@property (readonly, nonatomic) NSString * tag;
@property (retain, nonatomic) id streamConsumer;
@property (readonly, nonatomic) char moreAvailable;

- (void)dealloc;
- (void)reset;
- (NSString *)tag;
- (char)moreAvailable;
- (MFDAMailAccountSyncConsumer *)initWithCurrentTag:(NSString *)arg0 accountID:(NSString *)arg1 requests:(NSArray *)arg2 consumers:(NSArray *)arg3;
- (void)taskFailed:(id)arg0 statusCode:(int)arg1 error:(NSError *)arg2;
- (void)setStreamConsumer:(NSObject *)arg0;
- (NSObject *)streamConsumer;
- (char)shouldBeginStreamingForMailMessage:(NSString *)arg0 format:(int)arg1;
- (void)consumeData:(char *)arg0 length:(int)arg1 format:(int)arg2 mailMessage:(NSString *)arg3;
- (void)didEndStreamingForMailMessage:(NSString *)arg0;
- (void)_setTag:(NSString *)arg0;
- (NSObject *)actionsConsumer;
- (id)originalThreadMonitor;
- (void)handleSyncResponses:(id)arg0;
- (void)resultsForMailbox:(id)arg0 newTag:(NSString *)arg1 actions:(TSTLayoutProcessChangesActions *)arg2 responses:(NSSet *)arg3 percentComplete:(double)arg4 moreAvailable:(char)arg5 sentBytesCount:(unsigned int)arg6 receivedBytesCount:(unsigned int)arg7;
- (void)partialResultsForMailbox:(id)arg0 actions:(TSTLayoutProcessChangesActions *)arg1 responses:(NSSet *)arg2 percentComplete:(double)arg3 moreAvailable:(char)arg4;

@end
