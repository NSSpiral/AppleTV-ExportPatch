/* Runtime dump - HSLoginRequest
 * Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSLoginRequest : HSRequest

+ (HSLoginRequest *)supportedVideoQualities;

- (HSLoginRequest *)init;
- (HSLoginRequest *)initWithAction:(NSString *)arg0;
- (NSURLResponse *)canonicalResponseForResponse:(NSURLResponse *)arg0;

@end
