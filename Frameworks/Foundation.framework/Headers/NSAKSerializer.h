/* Runtime dump - NSAKSerializer
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSAKSerializer : NSObject
{
    id ss;
}

- (unsigned int)serializeData:(NSData *)arg0;
- (unsigned int)serializeList:(NSArray *)arg0;
- (unsigned int)serializePropertyList:(NSArray *)arg0;
- (unsigned int)serializeString:(NSString *)arg0;
- (unsigned int)serializeListItemIn:(id)arg0 at:(unsigned int)arg1;
- (unsigned int)serializeObject:(NSObject *)arg0;
- (unsigned int)serializePListKeyIn:(id)arg0 key:(NSString *)arg1 value:(NSObject *)arg2;
- (unsigned int)serializePListValueIn:(id)arg0 key:(NSString *)arg1 value:(NSObject *)arg2;
- (NSAKSerializer *)initForSerializerStream:(NSObject *)arg0;
- (NSObject *)serializerStream;
- (void)dealloc;

@end
