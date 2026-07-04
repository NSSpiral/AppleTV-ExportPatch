/* Runtime dump - YTCaptionsRequest
 * Image: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

@interface YTCaptionsRequest : YTXMLHTTPRequest
{
    <YTCaptionsRequestDelegate> * _delegate;
    NSMutableArray * _captions;
    YTVideo * _video;
}

- (void)dealloc;
- (void)failWithError:(NSError *)arg0;
- (YTVideo *)video;
- (int)parseData:(NSData *)arg0;
- (void)didParseData;
- (void)didAuthenticate:(char)arg0;
- (void)_requestCaptionsFromURL:(NSURL *)arg0;
- (YTCaptionsRequest *)initRequestingCaptionsForVideo:(id)arg0 withDelegate:(<YTCaptionsRequestDelegate> *)arg1;

@end
