/* Runtime dump - YTImageLoad
 * Image: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

@interface YTImageLoad : NSObject <NSURLConnectionDelegate>
{
    NSURL * _URL;
    NSURLConnection * _connection;
    NSMutableData * _imageData;
    NSString * _videoID;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)start;
- (void)connection:(NSURLConnection *)arg0 didFailWithError:(NSError *)arg1;
- (void)connection:(NSURLConnection *)arg0 didReceiveData:(char)arg1;
- (void)connectionDidFinishLoading:(NSURLConnection *)arg0;
- (void)_createImage;
- (void)_loadFinished;

@end
