/* Runtime dump - CoreDAVBulkRequestsSupportedItem
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVBulkRequestsSupportedItem : CoreDAVItem
{
    CoreDAVItem * _supported;
}

@property (retain, nonatomic) CoreDAVItem * supported;

+ (NSArray *)copyParseRules;

- (void)dealloc;
- (CoreDAVBulkRequestsSupportedItem *)init;
- (NSString *)description;
- (void)setSupported:(CoreDAVItem *)arg0;
- (CoreDAVItem *)supported;

@end
