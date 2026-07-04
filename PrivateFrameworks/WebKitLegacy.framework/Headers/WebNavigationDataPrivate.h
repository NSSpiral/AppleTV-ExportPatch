/* Runtime dump - WebNavigationDataPrivate
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebNavigationDataPrivate : NSObject
{
    NSString * url;
    NSString * title;
    NSURLRequest * originalRequest;
    NSURLResponse * response;
    char hasSubstituteData;
    NSString * clientRedirectSource;
}

- (void)dealloc;

@end
