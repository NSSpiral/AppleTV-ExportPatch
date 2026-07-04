/* Runtime dump - YTSubscriptionsVideoDataSource
 * Image: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

@interface YTSubscriptionsVideoDataSource : YTVideoDataSource
{
    NSString * _subscriptionURL;
    char _requiresAuth;
}

- (void)reloadData;
- (void)setSubscriptionURL:(NSString *)arg0 requiresAuthentication:(char)arg1;

@end
