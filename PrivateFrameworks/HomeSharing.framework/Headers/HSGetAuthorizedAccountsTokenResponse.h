/* Runtime dump - HSGetAuthorizedAccountsTokenResponse
 * Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSGetAuthorizedAccountsTokenResponse : HSResponse
{
    NSData * tokenData;
}

@property (copy, nonatomic) NSData * tokenData;

- (void).cxx_destruct;
- (void)setTokenData:(NSData *)arg0;
- (NSData *)tokenData;

@end
