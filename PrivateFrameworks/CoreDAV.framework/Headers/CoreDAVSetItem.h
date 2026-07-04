/* Runtime dump - CoreDAVSetItem
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVSetItem : CoreDAVItem
{
    CoreDAVItem * _prop;
}

@property (retain, nonatomic) CoreDAVItem * prop;

+ (NSArray *)copyParseRules;

- (void)dealloc;
- (CoreDAVSetItem *)init;
- (NSString *)description;
- (CoreDAVItem *)prop;
- (void)setProp:(CoreDAVItem *)arg0;

@end
