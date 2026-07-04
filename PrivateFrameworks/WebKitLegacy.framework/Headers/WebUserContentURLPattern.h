/* Runtime dump - WebUserContentURLPattern
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebUserContentURLPattern : NSObject
{
    WebUserContentURLPatternPrivate * _private;
}

- (void)dealloc;
- (NSString *)scheme;
- (char)isValid;
- (NSString *)host;
- (char)matchesURL:(NSURL *)arg0;
- (WebUserContentURLPattern *)initWithPatternString:(NSString *)arg0;
- (char)matchesSubdomains;

@end
