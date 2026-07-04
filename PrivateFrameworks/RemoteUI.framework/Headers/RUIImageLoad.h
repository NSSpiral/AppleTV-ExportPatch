/* Runtime dump - RUIImageLoad
 * Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUIImageLoad : NSObject <NSURLConnectionDelegate>
{
    NSURL * _URL;
    NSURLConnection * _connection;
    NSMutableData * _imageData;
    char _invalidResponse;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)start;
- (void)connection:(NSURLConnection *)arg0 didFailWithError:(char)arg1;
- (void)connection:(NSURLConnection *)arg0 didReceiveData:(char)arg1;
- (void)connectionDidFinishLoading:(NSURLConnection *)arg0;
- (void)connection:(NSURLConnection *)arg0 didReceiveResponse:(char)arg1;
- (void).cxx_destruct;
- (void)_createImage;
- (void)_loadFinished;
- (char)receivedValidResponse:(NSURLResponse *)arg0;

@end
