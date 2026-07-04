/* Runtime dump - XPCConnection
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface XPCConnection : NSObject
{
    NSObject<OS_xpc_object> * connection;
    int pid;
    id context;
    NSData * tokenData;
}

@property NSObject<OS_xpc_object> * connection;
@property int pid;
@property (retain, nonatomic) id context;
@property (retain, nonatomic) NSData * tokenData;

- (void)dealloc;
- (XPCConnection *)init;
- (NSString *)description;
- (NSString *)context;
- (void)setContext:(NSObject *)arg0;
- (NSObject<OS_xpc_object> *)connection;
- (void)setConnection:(NSObject<OS_xpc_object> *)arg0;
- (int)pid;
- (void)setTokenData:(NSData *)arg0;
- (void)setPid:(int)arg0;
- (NSData *)tokenData;

@end
