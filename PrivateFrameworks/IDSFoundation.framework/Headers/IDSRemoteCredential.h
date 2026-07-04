/* Runtime dump - IDSRemoteCredential
 * Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSRemoteCredential : NSObject
{
    NSObject<OS_xpc_object> * _connection;
    int _retries;
    char _wantsRetries;
}

@property (nonatomic) char wantsRetries;

- (char)_disconnect;
- (void)dealloc;
- (char)_connect;
- (void)fetchRemotePasswordForUsername:(id)arg0 service:(NSObject *)arg1 outRequestID:(id *)arg2 completionBlock:(id /* block */)arg3;
- (void)requestRemotePasswordForUsername:(id)arg0 service:(NSObject *)arg1 badPassword:(char)arg2 showForgotPassword:(char)arg3 shouldRememberPassword:(char)arg4 outRequestID:(id *)arg5 completionBlock:(id /* block */)arg6;
- (void)fetchRemoteAuthTokenForUsername:(id)arg0 service:(NSObject *)arg1 outRequestID:(id *)arg2 completionBlock:(id /* block */)arg3;
- (void)requestRemoteAuthTokenForUsername:(id)arg0 service:(NSObject *)arg1 badPassword:(char)arg2 showForgotPassword:(char)arg3 outRequestID:(id *)arg4 completionBlock:(id /* block */)arg5;
- (void)fetchRemoteiMessageAndFaceTimeAccountInfoWithCompletionBlock:(id /* block */)arg0;
- (void)fetchRemoteAccountsOfServiceTypes:(NSArray *)arg0 withCompletionBlock:(id /* block */)arg1;
- (void)sendIDSLocalDeviceInfoRequestWithCompletionBlock:(id /* block */)arg0;
- (void)requestIDStatusForURIs:(id)arg0 service:(NSObject *)arg1 lightQuery:(char)arg2 allowQuery:(char)arg3 completionBlock:(id /* block */)arg4;
- (void)sendAccountSyncMessage:(NSString *)arg0 messageID:(long long)arg1 completionBlock:(id /* block */)arg2;
- (char)wantsRetries;
- (void)setWantsRetries:(char)arg0;
- (void)_disconnected;
- (void)_sendMessage:(NSString *)arg0 withCompletionBlock:(id /* block */)arg1;

@end
