/* Runtime dump - TSPDeepCopyMetadata
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDeepCopyMetadata : TSPObject
{
    NSDictionary * _objectUUIDToIdentifierDictionary;
    NSDictionary * _cachedDataMap;
    long long _rootObjectIdentifier;
    unsigned long long _version;
}

@property (readonly, nonatomic) long long rootObjectIdentifier;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) NSDictionary * objectUUIDToIdentifierDictionary;
@property (readonly, nonatomic) NSDictionary * cachedDataMap;

- (TSPDeepCopyMetadata *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (NSDictionary *)objectUUIDToIdentifierDictionary;
- (long long)rootObjectIdentifier;
- (TSPDeepCopyMetadata *)initWithRootObject:(NSObject *)arg0 version:(unsigned long long)arg1 objectUUIDToIdentifierDictionary:(NSDictionary *)arg2 cachedDataMap:(NSDictionary *)arg3;
- (NSDictionary *)cachedDataMap;
- (TSPDeepCopyMetadata *)initWithContext:(TSPObjectContext *)arg0;
- (unsigned long long)version;
- (void).cxx_destruct;

@end
