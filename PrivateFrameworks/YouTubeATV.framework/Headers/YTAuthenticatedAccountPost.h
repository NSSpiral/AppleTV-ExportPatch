/* Runtime dump - YTAuthenticatedAccountPost
 * Image: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

@interface YTAuthenticatedAccountPost : NSObject <NSURLConnectionDelegate>
{
    id _delegate;
    NSMutableURLRequest * _postRequest;
    NSURLConnection * _connection;
    int _type;
    char _validResponse;
    NSMutableData * _rawData;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)removePlaylist:(ATVPlaylist *)arg0;
- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (void)_cleanup;
- (void)connection:(NSURLConnection *)arg0 didFailWithError:(NSError *)arg1;
- (void)connection:(NSURLConnection *)arg0 didReceiveData:(char)arg1;
- (void)connectionDidFinishLoading:(NSURLConnection *)arg0;
- (void)connection:(NSURLConnection *)arg0 didReceiveResponse:(char)arg1;
- (void)failWithError:(NSError *)arg0;
- (void)_didAuthenticate:(AWDIDSRegistrationAuthenticate *)arg0;
- (void)_failedToAuthenticate:(id)arg0;
- (void)_listenForAuthenticationNotifications:(char)arg0;
- (void)submitRequestOfType:(NSObject *)arg0;
- (void)submitRequest;
- (void)_deleteVideo:(id)arg0;
- (void)_removePS:(id)arg0;
- (void)setRating:(char)arg0 forVideo:(YTVideo *)arg1;
- (void)postComment:(id)arg0 forVideo:(YTVideo *)arg1;
- (void)fileComplaintForVideo:(id)arg0;
- (void)addVideoToFavorites:(id)arg0;
- (void)removeVideoFromFavorites:(id)arg0;
- (void)removeVideoFromPlaylist:(id)arg0;
- (void)unsubscribeToSubscription:(NSObject *)arg0;

@end
