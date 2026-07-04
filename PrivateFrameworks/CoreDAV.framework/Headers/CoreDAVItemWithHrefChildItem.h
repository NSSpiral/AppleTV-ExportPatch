/* Runtime dump - CoreDAVItemWithHrefChildItem
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVItemWithHrefChildItem : CoreDAVItem
{
    CoreDAVHrefItem * _href;
}

@property (retain, nonatomic) CoreDAVHrefItem * href;

+ (NSArray *)copyParseRules;

- (void)dealloc;
- (NSString *)description;
- (CoreDAVHrefItem *)href;
- (void)setHref:(CoreDAVHrefItem *)arg0;
- (void)write:(char *)arg0;

@end
