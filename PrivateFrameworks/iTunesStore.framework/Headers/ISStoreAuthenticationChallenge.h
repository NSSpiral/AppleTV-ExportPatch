/* Runtime dump - ISStoreAuthenticationChallenge
 * Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISStoreAuthenticationChallenge : ISAuthenticationChallenge
{
    int _failureCount;
    char _hasPassword;
    NSString * _password;
    <NSURLAuthenticationChallengeSender> * _sender;
    NSString * _user;
    char _userNameIsEditable;
}

@property int failureCount;
@property char hasPassword;
@property (retain) NSString * password;
@property <NSURLAuthenticationChallengeSender> * sender;
@property (retain) NSString * user;
@property char userNameIsEditable;

- (char)hasPassword;
- (void)dealloc;
- (ISStoreAuthenticationChallenge *)init;
- (<NSURLAuthenticationChallengeSender> *)sender;
- (void)setSender:(<NSURLAuthenticationChallengeSender> *)arg0;
- (NSString *)password;
- (NSString *)user;
- (void)setPassword:(NSString *)arg0;
- (void)setUser:(NSString *)arg0;
- (int)failureCount;
- (void)setFailureCount:(int)arg0;
- (char)userNameIsEditable;
- (char)userNameIsEmail;
- (void)setUserNameIsEditable:(char)arg0;
- (void)setHasPassword:(char)arg0;

@end
