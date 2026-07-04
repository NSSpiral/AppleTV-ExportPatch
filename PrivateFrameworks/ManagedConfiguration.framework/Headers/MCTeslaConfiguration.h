/* Runtime dump - MCTeslaConfiguration
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCTeslaConfiguration : NSObject
{
    char _fetching;
    id _callback;
    NSXPCConnection * _connection;
}

@property (copy, nonatomic) id callback;
@property (retain, nonatomic) NSXPCConnection * connection;
@property (nonatomic) char fetching;

- (void)dealloc;
- (MCTeslaConfiguration *)init;
- (void).cxx_destruct;
- (NSXPCConnection *)connection;
- (void)setConnection:(NSXPCConnection *)arg0;
- (NSError *)connectionError;
- (id /* block */)callback;
- (void)fetchConfigurationWithCompletionBlock:(id /* block */)arg0;
- (void)fetchDidFailWithError:(NSError *)arg0;
- (void)setFetching:(char)arg0;
- (char)isFetching;
- (void)setCallback:(id /* block */)arg0;

@end
