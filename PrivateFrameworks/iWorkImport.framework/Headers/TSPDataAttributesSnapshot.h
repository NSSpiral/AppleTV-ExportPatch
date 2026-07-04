/* Runtime dump - TSPDataAttributesSnapshot
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDataAttributesSnapshot : NSObject
{
    NSDictionary * _attributesMap;
}

+ (NSString *)newSnapshotForContext:(NSObject *)arg0;

- (NSData *)attributesForData:(NSData *)arg0;
- (TSPDataAttributesSnapshot *)initWithAttributesMap:(NSDictionary *)arg0;
- (TSPDataAttributesSnapshot *)init;
- (void).cxx_destruct;

@end
