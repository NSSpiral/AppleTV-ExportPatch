/* Runtime dump - OACredential
 * Image: /System/Library/PrivateFrameworks/OAuth.framework/OAuth
 */

@interface OACredential : NSObject
{
    NSString * _consumerKey;
    NSString * _consumerSecret;
    NSString * _oauthToken;
    NSString * _oauthTokenSecret;
}

@property (copy, nonatomic) NSString * consumerKey;
@property (copy, nonatomic) NSString * consumerSecret;
@property (copy, nonatomic) NSString * oauthToken;
@property (copy, nonatomic) NSString * oauthTokenSecret;

- (void)setConsumerKey:(NSString *)arg0;
- (void)setConsumerSecret:(NSString *)arg0;
- (NSString *)oauthTokenSecret;
- (void)setOauthTokenSecret:(NSString *)arg0;
- (void)dealloc;
- (NSString *)oauthToken;
- (void)setOauthToken:(NSString *)arg0;
- (NSString *)signingKey;
- (NSString *)consumerKey;
- (NSString *)consumerSecret;

@end
