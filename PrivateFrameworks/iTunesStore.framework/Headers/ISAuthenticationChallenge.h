/* Runtime dump - ISAuthenticationChallenge
 * Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISAuthenticationChallenge : NSObject
{
    NSString * _localizedMessage;
    NSString * _localizedTitle;
}

@property (retain) NSString * localizedMessage;
@property (retain) NSString * localizedTitle;
@property (readonly) char hasPassword;
@property (readonly, retain) NSString * password;
@property (readonly, retain) NSString * user;
@property (readonly) int failureCount;
@property (readonly) char userNameIsEditable;
@property (readonly) char userNameIsEmail;
@property (readonly) <NSURLAuthenticationChallengeSender> * sender;

- (char)hasPassword;
- (void)setLocalizedTitle:(NSString *)arg0;
- (void)dealloc;
- (<NSURLAuthenticationChallengeSender> *)sender;
- (NSString *)localizedTitle;
- (NSString *)password;
- (NSString *)user;
- (int)failureCount;
- (NSString *)localizedMessage;
- (void)setLocalizedMessage:(NSString *)arg0;
- (void)cancelAuthentication;
- (void)useCredential:(NSObject *)arg0;
- (char)userNameIsEditable;
- (char)userNameIsEmail;

@end
