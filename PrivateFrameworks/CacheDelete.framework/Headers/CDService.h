/* Runtime dump - CDService
 * Image: /System/Library/PrivateFrameworks/CacheDelete.framework/CacheDelete
 */

@interface CDService : NSObject
{
    char _doesPeriodic;
    char _doesPurge;
    NSXPCConnection * _xpcConn;
    NSXPCListenerEndpoint * _endpoint;
    NSString * _ID;
    NSSet * _desiredNotifications;
}

@property (retain, nonatomic) NSXPCConnection * xpcConn;
@property (retain, nonatomic) NSXPCListenerEndpoint * endpoint;
@property (retain, nonatomic) NSString * ID;
@property (retain, nonatomic) NSSet * desiredNotifications;
@property char doesPeriodic;
@property char doesPurge;

- (NSString *)ID;
- (void).cxx_destruct;
- (NSXPCListenerEndpoint *)endpoint;
- (NSXPCConnection *)xpcConn;
- (void)setXpcConn:(NSXPCConnection *)arg0;
- (NSSet *)desiredNotifications;
- (void)setDesiredNotifications:(NSSet *)arg0;
- (char)doesPeriodic;
- (void)setDoesPeriodic:(char)arg0;
- (char)doesPurge;
- (void)setDoesPurge:(char)arg0;
- (void)setID:(NSSet *)arg0;
- (void)setEndpoint:(NSXPCListenerEndpoint *)arg0;

@end
