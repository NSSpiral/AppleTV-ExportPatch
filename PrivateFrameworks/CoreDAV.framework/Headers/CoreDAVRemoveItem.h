/* Runtime dump - CoreDAVRemoveItem
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVRemoveItem : CoreDAVItem
{
    CoreDAVItem * _prop;
}

@property (retain, nonatomic) CoreDAVItem * prop;

+ (NSArray *)copyParseRules;

- (void)dealloc;
- (CoreDAVRemoveItem *)init;
- (NSString *)description;
- (CoreDAVItem *)prop;
- (void)setProp:(CoreDAVItem *)arg0;

@end
