/* Runtime dump - VCSessionMessageTopic
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface VCSessionMessageTopic : NSObject
{
    NSArray * associatedStrings;
    NSString * topicKey;
    int latestReceivedTopicMessageNumber;
    NSString * lastMessage;
    char allowConcurrent;
    NSObject<OS_dispatch_queue> * outMessageQueue;
    struct tagHANDLE * handle;
    unsigned long p2pID;
    NSObject<OS_dispatch_queue> * inMessageQueue;
    id receiveBlock;
    int latestOutgoingMessageIndex;
    char isSendingEnabled;
    char shouldEncodeTopicKeyInMessage;
    NSString * topicPrefix;
}

@property (nonatomic) char isSendingEnabled;
@property (readonly) NSString * topicKey;

- (void)dealloc;
- (NSString *)topicKey;
- (char)isStringAssociated:(id)arg0;
- (void)passMessage:(NSString *)arg0 sequence:(int)arg1;
- (void)setIsSendingEnabled:(char)arg0;
- (VCSessionMessageTopic *)initWithTopicKey:(NSString *)arg0 strings:(NSArray *)arg1 allowConcurrent:(char)arg2 receiveHandler:(id /* block */)arg3;
- (void)setP2PID:(unsigned long)arg0;
- (void)sendMessage:(NSString *)arg0;
- (void)sendMessage:(NSString *)arg0 withSequence:(int)arg1 numRetries:(int)arg2;
- (char)isSendingEnabled;

@end
