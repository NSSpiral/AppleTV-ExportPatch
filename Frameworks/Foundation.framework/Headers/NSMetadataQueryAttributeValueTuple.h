/* Runtime dump - NSMetadataQueryAttributeValueTuple
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMetadataQueryAttributeValueTuple : NSObject
{
    id _attr;
    id _value;
    unsigned int _count;
    void * _reserved;
}

@property (readonly, copy) NSString * attribute;
@property (readonly, retain) id value;
@property (readonly) unsigned int count;

- (NSString *)attribute;
- (NSMetadataQueryAttributeValueTuple *)_init:(id)arg0 attribute:(NSString *)arg1 value:(NSObject *)arg2 count:(unsigned int)arg3;
- (void)dealloc;
- (unsigned int)count;
- (void *)value;

@end
