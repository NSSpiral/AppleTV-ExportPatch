/* Runtime dump - ACDDataclassOwnersManager
 * Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDDataclassOwnersManager : NSObject
{
    <ACDDataclassOwnersManagerProtocol> * _remoteDOM;
    NSXPCConnection * _connection;
}

- (void).cxx_destruct;
- (char)performDataclassActions:(id)arg0 forAccount:(NSObject *)arg1 withChildren:(NSArray *)arg2;
- (id)actionsForEnablingDataclass:(id)arg0 onAccount:(NSObject *)arg1;
- (id)actionsForDisablingDataclass:(id)arg0 onAccount:(NSObject *)arg1;
- (NSNumber *)actionsForDeletingAccount:(NSObject *)arg0 affectingDataclass:(id)arg1;
- (char)isPerformingDataclassActionsForAccount:(NSObject *)arg0;
- (void)_connectToRemoteDataclassOwnersManager;
- (<ACDDataclassOwnersManagerProtocol> *)_remoteDOM;
- (NSNumber *)actionsForAddingAccount:(NSObject *)arg0 affectingDataclass:(id)arg1;

@end
