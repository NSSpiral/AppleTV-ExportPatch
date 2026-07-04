/* Runtime dump - PLDaemonJob
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLDaemonJob : NSObject
{
    NSObject<OS_xpc_object> * _xpcReply;
    PLXPCTransaction * _transaction;
    NSObject<OS_xpc_object> * _connection;
}

@property (readonly, nonatomic) char clientWantsReply;
@property (nonatomic) NSObject<OS_xpc_object> * xpcReply;
@property (readonly, retain, nonatomic) NSObject<OS_xpc_object> * connection;
@property (readonly, nonatomic) char replyIsError;
@property (readonly, retain, nonatomic) NSError * replyError;
@property (nonatomic) NSObject<OS_xpc_object> * xpcReply;
@property (readonly, retain, nonatomic) NSObject<OS_xpc_object> * connection;

+ (void)runDaemonSideWithXPCEvent:(NSObject *)arg0 connection:(NSObject<OS_xpc_object> *)arg1;

- (void)dealloc;
- (void)run;
- (NSObject<OS_xpc_object> *)connection;
- (void)encodeToXPCObject:(NSObject *)arg0;
- (PLDaemonJob *)initFromXPCObject:(NSObject *)arg0 connection:(NSObject<OS_xpc_object> *)arg1;
- (void)runDaemonSide;
- (void)sendToAssetsd;
- (long long)daemonOperation;
- (char)shouldArchiveXPCToDisk;
- (NSObject<OS_xpc_object> *)xpcReply;
- (void)setXpcReply:(NSObject<OS_xpc_object> *)arg0;
- (void)handleReply;
- (void)sendToAssetsdWithReply;
- (char)clientWantsReply;
- (char)replyIsError;
- (NSError *)replyError;
- (void)archiveXPCToDisk:(id)arg0;

@end
