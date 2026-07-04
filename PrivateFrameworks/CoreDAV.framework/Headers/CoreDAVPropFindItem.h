/* Runtime dump - CoreDAVPropFindItem
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVPropFindItem : CoreDAVItem
{
    CoreDAVItemWithNoChildren * _propName;
    CoreDAVItemWithNoChildren * _allProp;
    CoreDAVItem * _include;
    CoreDAVItem * _prop;
}

@property (retain, nonatomic) CoreDAVItemWithNoChildren * propName;
@property (retain, nonatomic) CoreDAVItemWithNoChildren * allProp;
@property (retain, nonatomic) CoreDAVItem * include;
@property (retain, nonatomic) CoreDAVItem * prop;

+ (NSArray *)copyParseRules;

- (void)dealloc;
- (CoreDAVPropFindItem *)init;
- (NSString *)description;
- (CoreDAVItem *)prop;
- (void)setProp:(CoreDAVItem *)arg0;
- (CoreDAVItemWithNoChildren *)propName;
- (CoreDAVItemWithNoChildren *)allProp;
- (CoreDAVItem *)include;
- (void)setPropName:(CoreDAVItemWithNoChildren *)arg0;
- (void)setAllProp:(CoreDAVItemWithNoChildren *)arg0;
- (void)setInclude:(CoreDAVItem *)arg0;

@end
