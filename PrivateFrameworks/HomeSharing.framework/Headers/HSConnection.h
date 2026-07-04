/* Runtime dump - HSConnection
 * Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSConnection : NSObject
{
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSObject<OS_dispatch_source> * _activityTimerSource;
    NSURLSession * _connectionSession;
    NSURL * _baseURL;
    int _connectionType;
    int _connectionState;
    HSFairPlayInfo * _fairPlayInfo;
    NSString * _homeSharingGroupID;
    unsigned int _databaseID;
    unsigned int _databaseRevision;
    unsigned int _basePlaylistContainerID;
    unsigned int _sessionID;
    unsigned int _interfaceID;
    unsigned int _controlKey;
    unsigned int _controlPort;
    unsigned int _promptID;
}

@property (readonly, nonatomic) NSURL * baseURL;
@property (readonly, nonatomic) int connectionType;
@property (nonatomic) int connectionState;
@property (retain) HSFairPlayInfo * fairPlayInfo;
@property (copy) NSString * homeSharingGroupID;
@property unsigned int databaseID;
@property unsigned int databaseRevision;
@property unsigned int basePlaylistContainerID;
@property unsigned int sessionID;
@property unsigned int interfaceID;
@property unsigned int controlKey;
@property unsigned int controlPort;
@property (nonatomic) unsigned int promptID;

- (NSString *)homeSharingGroupID;
- (void)setHomeSharingGroupID:(NSString *)arg0;
- (unsigned int)databaseID;
- (void)sendRequest:(NSURLRequest *)arg0 withResponseHandler:(NSObject<OS_xpc_object> *)arg1;
- (NSURLRequest *)signedRequestFromURLRequest:(NSURLRequest *)arg0;
- (void)dealloc;
- (NSURL *)baseURL;
- (void).cxx_destruct;
- (void)disconnect;
- (void)setDatabaseID:(unsigned int)arg0;
- (HSConnection *)initWithBaseURL:(NSURL *)arg0;
- (void)connectWithCompletionHandler:(id /* block */)arg0;
- (int)connectionState;
- (void)setConnectionState:(int)arg0;
- (int)connectionType;
- (unsigned int)sessionID;
- (void)setSessionID:(unsigned int)arg0;
- (void)setPromptID:(unsigned int)arg0;
- (unsigned int)promptID;
- (unsigned int)interfaceID;
- (void)setDatabaseRevision:(unsigned int)arg0;
- (unsigned int)databaseRevision;
- (HSConnection *)initWithBaseURL:(NSURL *)arg0 connectionType:(int)arg1;
- (void)setFairPlayInfo:(HSFairPlayInfo *)arg0;
- (HSFairPlayInfo *)fairPlayInfo;
- (unsigned int)_sapVersionForConnectionType;
- (void)_continueFPSetupNegotiationWithData:(NSData *)arg0 internalConnectionCompletionHandler:(id /* block */)arg1;
- (void)_loadDatabaseWithInternalConnectionCompletionHandler:(id /* block */)arg0;
- (void)_sendRequest:(NSURLRequest *)arg0 withInternalResponseHandler:(id /* block */)arg1;
- (unsigned int)controlPort;
- (unsigned int)controlKey;
- (void)setBasePlaylistContainerID:(unsigned int)arg0;
- (unsigned int)basePlaylistContainerID;
- (void)checkForDatabaseUpdatesWithCompletionHandler:(id /* block */)arg0;
- (void)_setupControlConnectionWithInternalConnectionCompletionHandler:(id /* block */)arg0;
- (void)_onSerialQueue_sendRequest:(NSURLRequest *)arg0 withInternalResponseHandler:(id /* block */)arg1;
- (NSObject *)_onSerialQueue_connectionSession;
- (void)setInterfaceID:(unsigned int)arg0;
- (void)setControlPort:(unsigned int)arg0;
- (void)setControlKey:(unsigned int)arg0;
- (NSURLConnection *)newControlConnection;

@end
