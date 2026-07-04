/* Runtime dump - CoreDAVBulkRequestsSetItem
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVBulkRequestsSetItem : CoreDAVItem
{
    CoreDAVBulkRequestsItem * _crudItem;
    CoreDAVBulkRequestsItem * _simpleItem;
}

@property (readonly, nonatomic) NSDictionary * dictRepresentation;
@property (retain, nonatomic) CoreDAVBulkRequestsItem * crudItem;
@property (retain, nonatomic) CoreDAVBulkRequestsItem * simpleItem;

+ (NSArray *)copyParseRules;

- (void)dealloc;
- (CoreDAVBulkRequestsSetItem *)init;
- (NSString *)description;
- (NSDictionary *)dictRepresentation;
- (CoreDAVBulkRequestsItem *)crudItem;
- (CoreDAVBulkRequestsItem *)simpleItem;
- (void)setCrudItem:(CoreDAVBulkRequestsItem *)arg0;
- (void)setSimpleItem:(CoreDAVBulkRequestsItem *)arg0;

@end
