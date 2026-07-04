/* Runtime dump - ATVMessageService
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol ATVPushNotificationListener;

@class ATVMessagesDB, ATVURLDocument, BRStateMachine;
@interface ATVMessageService : NSObject <ATVPushNotificationListener>
{
    BRStateMachine * _stateMachine;
    ATVURLDocument * _outstandingFetch;
    NSArray * _messagesToDispatch;
    ATVMessagesDB * _seenMessagesDB;
    NSObject<OS_dispatch_queue> * _workQueue;
    <ATVMessageServiceDelegate> * _delegate;
}

@property (retain, nonatomic) <ATVMessageServiceDelegate> * delegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (ATVMessageService *)sharedInstance;

- (void)pauseMessageDelivery;
- (void)startMessageDelivery;
- (NSObject *)_newStateMachine;
- (void)_cancelOutstandingFetch;
- (void)_checkForNewMessages;
- (void)_processMessages:(id)arg0;
- (void)_receivedMessageCheckTrigger;
- (void)_dispatchNextMessage;
- (void)_loadMessage:(NSString *)arg0 withCompletionHandler:(id /* block */)arg1;
- (void)setDelegate:(<ATVMessageServiceDelegate> *)arg0;
- (ATVMessageService *)init;
- (<ATVMessageServiceDelegate> *)delegate;
- (ATVMessageService *)_init;
- (void).cxx_destruct;
- (void)pushNotificationServer:(ATVPushNotificationServer *)arg0 didReceiveMessageForTopic:(NSString *)arg1 userInfo:(NSDictionary *)arg2;
- (void)pushNotificationServerTokenDidChange:(ATVPushNotificationServer *)arg0;
- (void)_urlBagLoaded:(id)arg0;

@end
