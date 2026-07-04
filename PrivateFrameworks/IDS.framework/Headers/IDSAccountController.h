/* Runtime dump - IDSAccountController
 * Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSAccountController : NSObject
{
    _IDSAccountController * _internal;
}

@property (readonly, retain, nonatomic) NSSet * accounts;

- (_IDSAccountController *)_internal;
- (void)dealloc;
- (void)addAccount:(NSObject *)arg0;
- (void)removeAccount:(NSObject *)arg0;
- (NSString *)serviceName;
- (IDSAccountController *)initWithService:(NSObject *)arg0;
- (void)addDelegate:(NSObject *)arg0 queue:(NSObject *)arg1;
- (NSSet *)accounts;
- (void)removeDelegate:(NSObject *)arg0;
- (NSObject *)_initWithService:(NSObject *)arg0 onIDSQueue:(char)arg1;
- (NSObject *)accountWithLoginID:(NSString *)arg0 service:(NSObject *)arg1;
- (NSObject *)accountWithUniqueID:(NSObject *)arg0;
- (void)setupAccountWithLoginID:(NSString *)arg0 aliases:(NSArray *)arg1 password:(NSString *)arg2 completionHandler:(id /* block */)arg3;
- (void)setupAccountWithLoginID:(NSString *)arg0 password:(NSString *)arg1 completionHandler:(id /* block */)arg2;
- (void)setupAccountWithLoginID:(NSString *)arg0 authToken:(NSString *)arg1 profileID:(NSString *)arg2 selfHandle:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setupAccountWithLoginID:(NSString *)arg0 authToken:(NSString *)arg1 profileID:(NSString *)arg2 selfHandle:(id)arg3 aliases:(NSArray *)arg4 completionHandler:(id /* block */)arg5;
- (void)setupAccountWithSetupParameters:(NSDictionary *)arg0 aliases:(NSArray *)arg1 completionHandler:(id /* block */)arg2;
- (NSObject *)_initWithService:(NSObject *)arg0;
- (void)disableAccount:(NSObject *)arg0;
- (void)enableAccount:(NSObject *)arg0;
- (NSSet *)enabledAccounts;
- (void)_removeAccount:(NSObject *)arg0;

@end
