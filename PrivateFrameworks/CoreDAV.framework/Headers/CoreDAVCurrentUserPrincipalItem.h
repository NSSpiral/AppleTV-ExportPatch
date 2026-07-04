/* Runtime dump - CoreDAVCurrentUserPrincipalItem
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVCurrentUserPrincipalItem : CoreDAVItem
{
    CoreDAVHrefItem * _href;
    CoreDAVItemWithNoChildren * _unauthenticated;
}

@property (retain, nonatomic) CoreDAVHrefItem * href;
@property (retain, nonatomic) CoreDAVItemWithNoChildren * unauthenticated;

+ (NSArray *)copyParseRules;

- (void)dealloc;
- (CoreDAVCurrentUserPrincipalItem *)init;
- (NSString *)description;
- (CoreDAVHrefItem *)href;
- (void)setHref:(CoreDAVHrefItem *)arg0;
- (CoreDAVItemWithNoChildren *)unauthenticated;
- (void)setUnauthenticated:(CoreDAVItemWithNoChildren *)arg0;

@end
