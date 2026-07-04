/* Runtime dump - WKWebProcessBundleParameters
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKWebProcessBundleParameters : NSObject
{
    struct RetainPtr<NSMutableDictionary> _parameters;
}

- (NSString *)valueForKey:(NSMutableDictionary *)arg0;
- (WKWebProcessBundleParameters *)initWithDictionary:(NSDictionary *)arg0;
- (void).cxx_construct;
- (void).cxx_destruct;
- (void)setParameter:(ICSRoleParameter *)arg0 forKey:(NSString *)arg1;

@end
