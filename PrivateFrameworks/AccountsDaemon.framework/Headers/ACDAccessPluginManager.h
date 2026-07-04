/* Runtime dump - ACDAccessPluginManager
 * Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDAccessPluginManager : NSObject
{
    NSSet * _accessPlugins;
    NSObject<OS_dispatch_queue> * _accessPluginQueue;
}

- (ACDAccessPluginManager *)init;
- (void).cxx_destruct;
- (void)handleAccessRequestToAccountsOfType:(NSObject *)arg0 forClient:(struct _GEOTileKey)arg1 withOptions:(unsigned long long)arg2 store:(EKEventStore *)arg3 allowUserInteraction:(char)arg4 completion:(id /* block */)arg5;
- (void)revokeAccessToAccountsOfType:(NSObject *)arg0 forClient:(struct _GEOTileKey)arg1 store:(EKEventStore *)arg2 completion:(id /* block */)arg3;
- (void)authorizeAccessToAccountsOfType:(NSObject *)arg0 forClient:(struct _GEOTileKey)arg1 store:(EKEventStore *)arg2 completion:(id /* block */)arg3;
- (void)revokeAllAccessToAccountsOfType:(NSObject *)arg0 store:(EKEventStore *)arg1 withCompletion:(id /* block */)arg2;
- (NSObject *)_authorizationPluginForAccountType:(NSObject *)arg0;

@end
