/* Runtime dump - CoreDAVPrincipalItem
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVPrincipalItem : CoreDAVItem
{
    CoreDAVHrefItem * _href;
    CoreDAVItemWithNoChildren * _all;
    CoreDAVItemWithNoChildren * _authenticated;
    CoreDAVItemWithNoChildren * _unauthenticated;
    CoreDAVItem * _property;
    CoreDAVItemWithNoChildren * _selfItem;
}

@property (retain, nonatomic) CoreDAVHrefItem * href;
@property (retain, nonatomic) CoreDAVItemWithNoChildren * all;
@property (retain, nonatomic) CoreDAVItemWithNoChildren * authenticated;
@property (retain, nonatomic) CoreDAVItemWithNoChildren * unauthenticated;
@property (retain, nonatomic) CoreDAVItem * property;
@property (retain, nonatomic) CoreDAVItemWithNoChildren * selfItem;

+ (NSArray *)copyParseRules;

- (void)dealloc;
- (CoreDAVPrincipalItem *)init;
- (NSString *)description;
- (CoreDAVHrefItem *)href;
- (void)setHref:(CoreDAVHrefItem *)arg0;
- (NSString *)hashString;
- (void)setAuthenticated:(CoreDAVItemWithNoChildren *)arg0;
- (void)write:(char *)arg0;
- (CoreDAVItemWithNoChildren *)unauthenticated;
- (void)setAll:(CoreDAVItemWithNoChildren *)arg0;
- (void)setUnauthenticated:(CoreDAVItemWithNoChildren *)arg0;
- (void)setSelfItem:(CoreDAVItemWithNoChildren *)arg0;
- (CoreDAVItemWithNoChildren *)all;
- (CoreDAVItemWithNoChildren *)authenticated;
- (CoreDAVItemWithNoChildren *)selfItem;
- (CoreDAVPrincipalItem *)initTypeIsAll;
- (CoreDAVPrincipalItem *)initTypeIsHREFWithURL:(NSString *)arg0;
- (CoreDAVPrincipalItem *)initTypeIsProperty:(NSObject *)arg0;
- (CoreDAVPrincipalItem *)initTypeIsAuthenticated;
- (CoreDAVPrincipalItem *)initTypeIsUnauthenticated;
- (CoreDAVPrincipalItem *)initTypeIsSelf;
- (CoreDAVItem *)property;
- (void)setProperty:(CoreDAVItem *)arg0;

@end
