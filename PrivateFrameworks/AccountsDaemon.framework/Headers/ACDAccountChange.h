/* Runtime dump - ACDAccountChange
 * Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDAccountChange : NSObject
{
    int _changeType;
    ACAccount * _account;
    ACAccount * _oldAccount;
}

@property (nonatomic) int changeType;
@property (retain, nonatomic) ACAccount * account;
@property (retain, nonatomic) ACAccount * oldAccount;

+ (NSObject *)changeWithChangeType:(int)arg0 account:(ACAccount *)arg1 oldAccount:(ACAccount *)arg2;

- (void).cxx_destruct;
- (void)setOldAccount:(ACAccount *)arg0;
- (ACDAccountChange *)initWithChangeType:(int)arg0 account:(ACAccount *)arg1 oldAccount:(ACAccount *)arg2;
- (ACAccount *)oldAccount;
- (ACAccount *)account;
- (void)setAccount:(ACAccount *)arg0;
- (void)setChangeType:(int)arg0;
- (int)changeType;

@end
