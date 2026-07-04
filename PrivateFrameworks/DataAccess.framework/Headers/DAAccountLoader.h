/* Runtime dump - DAAccountLoader
 * Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAAccountLoader : NSObject
{
    NSMutableDictionary * _acAccountTypeToAccountFrameworkSubpath;
    NSMutableDictionary * _acAccountTypeToAccountDaemonBundleSubpath;
    NSMutableDictionary * _acAccountTypeToClassNames;
    NSMutableDictionary * _acParentAccountTypeToChildAccountTypes;
}

@property (retain, nonatomic) NSMutableDictionary * acAccountTypeToAccountFrameworkSubpath;
@property (retain, nonatomic) NSMutableDictionary * acAccountTypeToAccountDaemonBundleSubpath;
@property (retain, nonatomic) NSMutableDictionary * acAccountTypeToClassNames;
@property (retain, nonatomic) NSMutableDictionary * acParentAccountTypeToChildAccountTypes;

+ (DAAccountLoader *)sharedInstance;

- (DAAccountLoader *)init;
- (void).cxx_destruct;
- (Class)daemonAppropriateAccountClassForACAccount:(NSObject *)arg0;
- (void)setAcAccountTypeToAccountFrameworkSubpath:(NSMutableDictionary *)arg0;
- (void)setAcAccountTypeToAccountDaemonBundleSubpath:(NSMutableDictionary *)arg0;
- (void)setAcAccountTypeToClassNames:(NSMutableDictionary *)arg0;
- (void)setAcParentAccountTypeToChildAccountTypes:(NSMutableDictionary *)arg0;
- (void)_addAccountInfo:(NSDictionary *)arg0 forFrameworkNamed:(id)arg1;
- (char)_loadFrameworkAtSubpath:(id)arg0;
- (void)loadFrameworkForACAccountType:(NSObject *)arg0;
- (void)loadDaemonBundleForACAccountType:(NSObject *)arg0;
- (Class)daemonAccountClassForACAccount:(NSObject *)arg0;
- (Class)clientAccountClassForACAccount:(NSObject *)arg0;
- (Class)accountClassForACAccount:(NSObject *)arg0;
- (Class)agentClassForACAccount:(NSObject *)arg0;
- (NSMutableDictionary *)acAccountTypeToAccountFrameworkSubpath;
- (NSMutableDictionary *)acAccountTypeToAccountDaemonBundleSubpath;
- (NSMutableDictionary *)acAccountTypeToClassNames;
- (NSMutableDictionary *)acParentAccountTypeToChildAccountTypes;

@end
