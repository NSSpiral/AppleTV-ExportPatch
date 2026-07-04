/* Runtime dump - MFMessageURLConnectionDelegate
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMessageURLConnectionDelegate : NSObject <NSURLConnectionDelegate>
{
    NSMutableData * _responseBody;
    char _done;
    NSError * _error;
    NSURLResponse * _response;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)connection:(NSURLConnection *)arg0 didFailWithError:(NSError *)arg1;
- (void)connection:(NSURLConnection *)arg0 didReceiveData:(char)arg1;
- (void)connectionDidFinishLoading:(NSURLConnection *)arg0;
- (void)connection:(NSURLConnection *)arg0 didReceiveResponse:(char)arg1;

@end
