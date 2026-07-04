/* Runtime dump - CoreDAVPrincipalSearchPropertyItem
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVPrincipalSearchPropertyItem : CoreDAVItem
{
    CoreDAVItem * _prop;
    CoreDAVLeafItem * _descriptionItem;
}

@property (retain, nonatomic) CoreDAVItem * prop;
@property (retain, nonatomic) CoreDAVLeafItem * descriptionItem;

+ (NSArray *)copyParseRules;

- (void)dealloc;
- (CoreDAVPrincipalSearchPropertyItem *)init;
- (NSString *)description;
- (CoreDAVItem *)prop;
- (CoreDAVLeafItem *)descriptionItem;
- (void)setProp:(CoreDAVItem *)arg0;
- (void)setDescriptionItem:(CoreDAVLeafItem *)arg0;

@end
