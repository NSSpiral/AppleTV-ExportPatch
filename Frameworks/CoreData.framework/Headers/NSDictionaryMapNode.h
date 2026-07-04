/* Runtime dump - NSDictionaryMapNode
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSDictionaryMapNode : NSStoreMapNode <NSCoding>
{
    id * _attributes;
    id _attributesAsEncoded;
}

+ (void)initialize;

- (void)_doAttributeDecoding;
- (NSDictionaryMapNode *)initWithValues:(id *)arg0 objectID:(NSManagedObjectID *)arg1;
- (NSString *)valueForKey:(NSMutableDictionary *)arg0;
- (void)dealloc;
- (NSDictionaryMapNode *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (id *)attributeValues;

@end
