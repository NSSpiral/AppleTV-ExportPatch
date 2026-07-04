/* Runtime dump - NEFilterSource
 * Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEFilterSource : NSObject
{
    char _registered;
    int _status;
    NSURL * _url;
    int _direction;
    NSMutableData * _pendingData;
    NSUUID * _flowUUID;
    unsigned long long _socketIdentifier;
    unsigned long long _pendingDataStartIndex;
    unsigned long long _peekIndex;
    unsigned long long _passLength;
}

@property (readonly) int status;
@property (readonly) NSURL * url;
@property (readonly) int direction;
@property (readonly) unsigned long long socketIdentifier;
@property char registered;
@property (retain) NSMutableData * pendingData;
@property (retain) NSUUID * flowUUID;
@property unsigned long long pendingDataStartIndex;
@property unsigned long long peekIndex;
@property unsigned long long passLength;

+ (void)initializeGlobals;
+ (unsigned int)checkPolicyFilterUnit;
+ (unsigned int)filterUnit;
+ (void)connectToAgentWithCompletionHandler:(id /* block */)arg0;
+ (char)filterRequired;

- (char)registered;
- (NSUUID *)flowUUID;
- (unsigned long long)socketIdentifier;
- (void)setRegistered:(char)arg0;
- (unsigned long long)passLength;
- (NSMutableData *)pendingData;
- (unsigned long long)pendingDataStartIndex;
- (void)setPendingDataStartIndex:(unsigned long long)arg0;
- (unsigned long long)peekIndex;
- (void)setPeekIndex:(unsigned long long)arg0;
- (void)setPassLength:(unsigned long long)arg0;
- (char)sendDataToPluginWithConnection:(NSURLConnection *)arg0 completionHandler:(id /* block */)arg1;
- (void)prepareAgentWithHandler:(id /* block */)arg0;
- (void)setPendingData:(NSMutableData *)arg0;
- (void)setFlowUUID:(NSUUID *)arg0;
- (NSURL *)url;
- (int)direction;
- (void).cxx_destruct;
- (int)status;
- (NEFilterSource *)initWithURL:(NSString *)arg0 direction:(int)arg1 socketIdentifier:(unsigned long long)arg2;
- (void)addData:(NSData *)arg0 withCompletionQueue:(NSObject<OS_dispatch_queue> *)arg1 completionHandler:(id /* block */)arg2;
- (void)dataCompleteWithCompletionQueue:(NSObject<OS_dispatch_queue> *)arg0 completionHandler:(id /* block */)arg1;

@end
