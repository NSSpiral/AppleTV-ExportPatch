/* Runtime dump - CoreDAVPropStatItem
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVPropStatItem : CoreDAVItem
{
    CoreDAVLeafItem * _status;
    CoreDAVItem * _prop;
    CoreDAVErrorItem * _errorItem;
    CoreDAVLeafItem * _responseDescription;
}

@property (retain, nonatomic) CoreDAVLeafItem * status;
@property (retain, nonatomic) CoreDAVItem * prop;
@property (retain, nonatomic) CoreDAVErrorItem * errorItem;
@property (retain, nonatomic) CoreDAVLeafItem * responseDescription;

+ (NSArray *)copyParseRules;

- (void)dealloc;
- (CoreDAVPropStatItem *)init;
- (NSString *)description;
- (CoreDAVLeafItem *)status;
- (void)setStatus:(CoreDAVLeafItem *)arg0;
- (CoreDAVErrorItem *)errorItem;
- (CoreDAVLeafItem *)responseDescription;
- (void)setErrorItem:(CoreDAVErrorItem *)arg0;
- (void)setResponseDescription:(CoreDAVLeafItem *)arg0;
- (CoreDAVItem *)prop;
- (void)setProp:(CoreDAVItem *)arg0;

@end
