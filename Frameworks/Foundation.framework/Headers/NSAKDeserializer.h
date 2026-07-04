/* Runtime dump - NSAKDeserializer
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSAKDeserializer : NSObject
{
    id ds;
}

- (NSData *)deserializeNewData;
- (NSArray *)deserializeNewList;
- (NSDictionary *)deserializeNewPList;
- (NSString *)deserializeNewString;
- (NSData *)deserializeData:(NSData *)arg0;
- (NSString *)deserializeString:(NSString *)arg0;
- (NSArray *)deserializeList:(NSArray *)arg0;
- (id)deserializeListItemIn:(id)arg0 at:(unsigned int)arg1 length:(unsigned int)arg2;
- (NSObject *)deserializeNewObject;
- (NSDictionary *)deserializePList:(NSArray *)arg0;
- (id)deserializePListKeyIn:(id)arg0;
- (id)deserializePListValueIn:(id)arg0 key:(NSString *)arg1 length:(unsigned int)arg2;
- (NSString *)deserializeNewKeyString;
- (NSAKDeserializer *)initForDeserializerStream:(NSObject *)arg0;
- (NSObject *)deserializerStream;
- (void)dealloc;

@end
