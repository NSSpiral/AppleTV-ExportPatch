/* Runtime dump - NSHTTPURLRequestParameters
 * Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSHTTPURLRequestParameters : NSObject
{
    NSString * method;
    NSMutableDictionary * fields;
    NSArray * extraCookies;
    NSData * data;
    unsigned int pageNotFoundCacheLifetime;
    char shouldHandleCookies;
    char _pad1;
    char _pad2;
    char _pad3;
}

- (void)dealloc;
- (NSHTTPURLRequestParameters *)initWithCoder:(NSCoder *)arg0;
- (NSHTTPURLRequestParameters *)init;

@end
