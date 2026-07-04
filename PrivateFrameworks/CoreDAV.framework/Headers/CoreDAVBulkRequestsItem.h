/* Runtime dump - CoreDAVBulkRequestsItem
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVBulkRequestsItem : CoreDAVItem
{
    CoreDAVLeafItem * _maxResourcesItem;
    CoreDAVLeafItem * _maxSizeItem;
    NSMutableSet * _supportedItems;
}

@property (readonly, nonatomic) NSDictionary * dictRepresentation;
@property (retain, nonatomic) CoreDAVLeafItem * maxResourcesItem;
@property (retain, nonatomic) CoreDAVLeafItem * maxSizeItem;
@property (readonly, nonatomic) NSSet * supportedItems;
@property (readonly, nonatomic) int maxResources;
@property (readonly, nonatomic) int maxSize;
@property (readonly, nonatomic) char supportsInsert;
@property (readonly, nonatomic) char supportsUpdate;
@property (readonly, nonatomic) char supportsDelete;

+ (NSArray *)copyParseRules;

- (void)dealloc;
- (CoreDAVBulkRequestsItem *)init;
- (NSString *)description;
- (int)maxSize;
- (NSDictionary *)dictRepresentation;
- (int)maxResources;
- (void)setMaxResourcesItem:(CoreDAVLeafItem *)arg0;
- (void)setMaxSizeItem:(CoreDAVLeafItem *)arg0;
- (void)addSupportedItem:(NSObject *)arg0;
- (char)supportsInsert;
- (char)supportsUpdate;
- (char)supportsDelete;
- (char)supportsItemWithNameSpace:(NSString *)arg0 name:(NSString *)arg1;
- (CoreDAVLeafItem *)maxResourcesItem;
- (CoreDAVLeafItem *)maxSizeItem;
- (NSSet *)supportedItems;

@end
