/* Runtime dump - HSHomeSharingLibrary
 * Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSHomeSharingLibrary : NSObject
{
    NSObject<OS_dispatch_queue> * _connectionAccessQueue;
    char _requiresPassword;
    char _available;
    char __hasPendingUpdateRequest;
    NSString * _name;
    NSString * _uniqueIdentifier;
    unsigned int _version;
    NSString * _homeSharingGroupID;
    NSURL * _baseURL;
    <NSObject> * _context;
    int _connectionType;
    HSConnection * _connection;
}

@property (readonly, copy, nonatomic) NSString * name;
@property (readonly, copy, nonatomic) NSString * uniqueIdentifier;
@property (readonly, nonatomic) unsigned int version;
@property (readonly, nonatomic) char requiresPassword;
@property (readonly, copy, nonatomic) NSString * homeSharingGroupID;
@property (readonly, retain, nonatomic) NSURL * baseURL;
@property (readonly, nonatomic) char available;
@property (retain, nonatomic) <NSObject> * context;
@property (readonly, nonatomic) unsigned int databaseID;
@property (readonly, nonatomic) unsigned int basePlaylistContainerID;
@property (readonly, nonatomic) int connectionType;
@property (readonly, nonatomic) int connectionState;
@property (readonly, nonatomic) NSString * deviceGUID;
@property (retain, nonatomic) HSConnection * connection;
@property (nonatomic) char _hasPendingUpdateRequest;

- (char)requiresPassword;
- (NSString *)homeSharingGroupID;
- (unsigned int)databaseID;
- (NSURLRequest *)urlForRequest:(NSURLRequest *)arg0;
- (void)sendRequest:(NSURLRequest *)arg0 withResponseHandler:(NSObject<OS_xpc_object> *)arg1;
- (NSString *)deviceGUID;
- (NSURL *)securityInfoForURL:(NSURL *)arg0;
- (NSURLRequest *)signedRequestFromURLRequest:(NSURLRequest *)arg0;
- (NSString *)name;
- (<NSObject> *)context;
- (void)setContext:(<NSObject> *)arg0;
- (NSString *)uniqueIdentifier;
- (NSURL *)baseURL;
- (unsigned int)version;
- (void).cxx_destruct;
- (void)disconnect;
- (HSConnection *)connection;
- (void)setConnection:(HSConnection *)arg0;
- (void)connectWithCompletionHandler:(id /* block */)arg0;
- (int)connectionState;
- (int)connectionType;
- (HSHomeSharingLibrary *)initWithName:(NSString *)arg0 uniqueIdentifier:(NSString *)arg1 version:(unsigned int)arg2 baseURL:(NSURL *)arg3 homeSharingGroupID:(NSString *)arg4 connectionType:(int)arg5;
- (unsigned int)basePlaylistContainerID;
- (void)_sendUpdateRequest;
- (void)_onQueue_ensureConnection;
- (void)set_hasPendingUpdateRequest:(char)arg0;
- (char)_hasPendingUpdateRequest;
- (char)isAvailable;

@end
