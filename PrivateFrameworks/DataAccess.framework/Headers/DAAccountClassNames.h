/* Runtime dump - DAAccountClassNames
 * Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAAccountClassNames : NSObject
{
    NSString * _accountClassName;
    NSString * _clientAccountClassName;
    NSString * _daemonAccountClassName;
    NSString * _agentClassName;
}

@property (retain, nonatomic) NSString * accountClassName;
@property (retain, nonatomic) NSString * clientAccountClassName;
@property (retain, nonatomic) NSString * daemonAccountClassName;
@property (retain, nonatomic) NSString * agentClassName;

- (NSString *)description;
- (void).cxx_destruct;
- (void)setAccountClassName:(NSString *)arg0;
- (void)setClientAccountClassName:(NSString *)arg0;
- (void)setDaemonAccountClassName:(NSString *)arg0;
- (void)setAgentClassName:(NSString *)arg0;
- (NSString *)accountClassName;
- (NSString *)clientAccountClassName;
- (NSString *)daemonAccountClassName;
- (NSString *)agentClassName;

@end
