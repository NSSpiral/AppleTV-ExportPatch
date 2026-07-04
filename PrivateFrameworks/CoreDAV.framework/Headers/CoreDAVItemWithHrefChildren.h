/* Runtime dump - CoreDAVItemWithHrefChildren
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVItemWithHrefChildren : CoreDAVItem
{
    NSMutableSet * _hrefs;
    CoreDAVItemWithNoChildren * _unauthenticated;
}

@property (retain, nonatomic) NSMutableSet * hrefs;
@property (retain, nonatomic) CoreDAVItemWithNoChildren * unauthenticated;

+ (NSArray *)copyParseRules;

- (void)dealloc;
- (NSString *)description;
- (id)hrefsAsFullURLs;
- (CoreDAVItemWithNoChildren *)unauthenticated;
- (NSMutableSet *)hrefs;
- (void)addHref:(id)arg0;
- (void)setHrefs:(NSMutableSet *)arg0;
- (void)setUnauthenticated:(CoreDAVItemWithNoChildren *)arg0;
- (id)hrefsAsOriginalURLs;
- (NSArray *)hrefsAsStrings;

@end
