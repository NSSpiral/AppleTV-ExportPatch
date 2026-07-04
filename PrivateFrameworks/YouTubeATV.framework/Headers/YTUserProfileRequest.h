/* Runtime dump - YTUserProfileRequest
 * Image: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

@interface YTUserProfileRequest : YTXMLHTTPRequest
{
    <YTUserProfileRequestDelegate> * _delegate;
    YTUserProfile * _profile;
}

- (void)dealloc;
- (void)failWithError:(NSError *)arg0;
- (YTUserProfileRequest *)initWithDelegate:(<YTUserProfileRequestDelegate> *)arg0;
- (int)parseData:(NSData *)arg0;
- (void)didParseData;
- (void)requestProfileForCurrentUser;
- (void)requestProfileForUsername:(id)arg0;

@end
