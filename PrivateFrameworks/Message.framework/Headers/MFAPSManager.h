/* Runtime dump - MFAPSManager
 * Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@interface MFAPSManager : NSObject <APSConnectionDelegate, MFDiagnosticsGenerator, MFAPSManager>
{
    NSObject<OS_dispatch_queue> * _queue;
    APSConnection * _pushService;
    NSCountedSet * _watchedTopics;
    NSMutableSet * _unwatchedTopics;
    NSConditionLock * _deviceTokenLock;
    NSData * _deviceToken;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (Class)APSConnection;
+ (MFAPSManager *)sharedManager;

- (void)dealloc;
- (MFAPSManager *)init;
- (void)connect;
- (void)connection:(NSURLConnection *)arg0 didReceivePublicToken:(NSString *)arg1;
- (void)connection:(NSURLConnection *)arg0 didReceiveIncomingMessage:(NSString *)arg1;
- (NSString *)copyDeviceToken;
- (void)stopWatchingForTopic:(id)arg0;
- (void)startWatchingForTopic:(id)arg0;
- (void)swapTopic:(id)arg0 forNewTopic:(VCSessionMessageTopic *)arg1;
- (void)_startAPS_nts;
- (void)_stopAPS_nts;
- (NSDictionary *)copyDiagnosticInformation;

@end
