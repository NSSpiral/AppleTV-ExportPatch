/* Runtime dump - NSMetadataItem
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMetadataItem : NSObject
{
    id _item;
    void * _reserved;
}

@property (readonly, copy) NSArray * attributes;

- (void)_setQuery:(NSObject *)arg0;
- (struct WebBackForwardListItem *)_item;
- (NSDictionary *)valuesForAttributes:(NSDictionary *)arg0;
- (NSString *)valueForKey:(NSMutableDictionary *)arg0;
- (void)dealloc;
- (NSObject *)valueForAttribute:(NSObject *)arg0;
- (NSMetadataItem *)_init:(id)arg0;
- (NSArray *)attributes;

@end
