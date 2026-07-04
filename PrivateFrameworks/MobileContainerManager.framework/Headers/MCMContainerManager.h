/* Runtime dump - MCMContainerManager
 * Image: /System/Library/PrivateFrameworks/MobileContainerManager.framework/MobileContainerManager
 */

@interface MCMContainerManager : NSObject
{
    NSXPCConnection * _xpcConnection;
}

@property (retain, nonatomic) NSXPCConnection * xpcConnection;
@property (retain, nonatomic) NSXPCConnection * xpcConnection;

+ (MCMContainerManager *)defaultManager;

- (MCMContainerManager *)init;
- (void).cxx_destruct;
- (NSObject *)_containersWithClass:(int)arg0 temporary:(char)arg1 error:(id *)arg2;
- (NSObject *)containerWithContentClass:(int)arg0 identifier:(NSString *)arg1 error:(id *)arg2;
- (NSObject *)containerWithContentClass:(int)arg0 identifier:(NSString *)arg1 createIfNecessary:(char)arg2 existed:(char *)arg3 error:(id *)arg4;
- (NSObject *)temporaryContainerWithContentClass:(int)arg0 identifier:(NSString *)arg1 existed:(char *)arg2 error:(id *)arg3;
- (NSObject *)containersWithClass:(int)arg0 error:(id *)arg1;
- (NSObject *)temporaryContainersWithClass:(int)arg0 error:(id *)arg1;
- (void)deleteContainers:(id)arg0 withCompletion:(id /* block */)arg1;
- (char)replaceContainer:(NSObject *)arg0 withContainer:(NSObject *)arg1 error:(id *)arg2;
- (char)restoreContainer:(NSObject *)arg0 error:(id *)arg1;
- (char)restoreContainer:(NSObject *)arg0 contentClass:(int)arg1 identifier:(NSString *)arg2 info:(NSDictionary *)arg3 error:(id *)arg4;
- (NSXPCConnection *)xpcConnection;
- (void)setXpcConnection:(NSXPCConnection *)arg0;

@end
