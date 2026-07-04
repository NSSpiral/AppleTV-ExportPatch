/* Runtime dump - NSMetadataQueryResultGroup
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMetadataQueryResultGroup : NSObject
{
    id _private;
    id _private2;
    void * _reserved;
}

@property (readonly, copy) NSString * attribute;
@property (readonly, retain) id value;
@property (readonly, copy) NSArray * subgroups;
@property (readonly) unsigned int resultCount;
@property (readonly, copy) NSArray * results;

- (NSString *)attribute;
- (unsigned int)resultCount;
- (NSMetadataQueryResultGroup *)_init:(id)arg0 attributes:(NSDictionary *)arg1 index:(unsigned int)arg2 value:(NSObject *)arg3;
- (void)_addResult:(unsigned int)arg0;
- (NSObject *)resultAtIndex:(unsigned int)arg0;
- (NSArray *)subgroups;
- (void)_zapResultArray;
- (void)dealloc;
- (void *)value;
- (NSArray *)results;

@end
