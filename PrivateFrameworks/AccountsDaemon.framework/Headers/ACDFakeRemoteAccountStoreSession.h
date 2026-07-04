/* Runtime dump - ACDFakeRemoteAccountStoreSession
 * Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDFakeRemoteAccountStoreSession : ACRemoteAccountStoreSession
{
    NSObject * _proxy;
}

- (id)remoteObjectProxyWithErrorHandler:(SSErrorHandler *)arg0;
- (NSObject *)remoteObjectProxy;
- (void).cxx_destruct;
- (ACDFakeRemoteAccountStoreSession *)initWithFakeProxy:(NSObject *)arg0;

@end
