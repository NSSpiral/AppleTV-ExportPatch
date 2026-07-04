/* Runtime dump - FTPasswordManager
 * Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@interface FTPasswordManager : NSObject
{
    NSMutableSet * _runningQueries;
    ACAccountStore * _accountStore;
}

+ (FTPasswordManager *)sharedInstance;
+ (NSObject *)_loginUserNotificationForService:(NSObject *)arg0 user:(struct __CFString *)arg1 isForBadPassword:(char)arg2 showForgetPassword:(char)arg3 shouldRememberPassword:(char)arg4;

- (void)dealloc;
- (FTPasswordManager *)init;
- (void)fetchAuthTokenForUsername:(id)arg0 service:(NSObject *)arg1 profileID:(NSString *)arg2 outRequestID:(id *)arg3 blockingly:(char)arg4 completionBlock:(id /* block */)arg5;
- (void)fetchAuthTokenForUsername:(id)arg0 service:(NSObject *)arg1 outRequestID:(id *)arg2 blockingly:(char)arg3 completionBlock:(id /* block */)arg4;
- (void)setPasswordForUsername:(id)arg0 service:(NSObject *)arg1 password:(NSString *)arg2 outRequestID:(id *)arg3 completionBlock:(id /* block */)arg4;
- (void)setAuthTokenForUsername:(id)arg0 service:(NSObject *)arg1 authToken:(NSString *)arg2 profileID:(NSString *)arg3 selfHandle:(id)arg4 outRequestID:(id *)arg5 completionBlock:(id /* block */)arg6;
- (char)supportsAuthTokenRequests;
- (void)requestAuthTokenForUsername:(id)arg0 service:(NSObject *)arg1 badPassword:(char)arg2 showForgotPassword:(char)arg3 outRequestID:(id *)arg4 completionBlock:(id /* block */)arg5;
- (void)setPairedAccountPasswordForUsername:(id)arg0 password:(NSString *)arg1 completionBlock:(id /* block */)arg2;
- (void)cancelRequestID:(NSObject *)arg0 serviceIdentifier:(NSString *)arg1;
- (void)fetchPasswordForUsername:(id)arg0 service:(NSObject *)arg1 outRequestID:(id *)arg2 blockingly:(char)arg3 completionBlock:(id /* block */)arg4;
- (void)requestPasswordForUsername:(id)arg0 service:(NSObject *)arg1 badPassword:(char)arg2 showForgotPassword:(char)arg3 shouldRememberPassword:(char)arg4 outRequestID:(id *)arg5 completionBlock:(id /* block */)arg6;

@end
