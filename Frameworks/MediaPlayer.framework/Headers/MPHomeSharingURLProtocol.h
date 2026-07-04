/* Runtime dump - MPHomeSharingURLProtocol
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPHomeSharingURLProtocol : NSURLProtocol

+ (char)canInitWithRequest:(NSURLRequest *)arg0;
+ (void)initialize;
+ (NSURLRequest *)canonicalRequestForRequest:(NSURLRequest *)arg0;

- (void)startLoading;
- (void)stopLoading;

@end
