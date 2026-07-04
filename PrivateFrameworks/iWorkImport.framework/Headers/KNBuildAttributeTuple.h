/* Runtime dump - KNBuildAttributeTuple
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNBuildAttributeTuple : TSPObject <NSCopying>
{
    NSString * _property;
    KNBuildAttributeValue * _attributeValue;
    KNBuildChunkIdentifier * _buildChunkIdentifier;
    NSUUID * _buildId;
    char _definedAttributeValue;
    char _definedBuildChunkIdentifier;
    char _definedBuildId;
}

@property (readonly, nonatomic) KNBuild * build;
@property (readonly, nonatomic) KNBuildChunk * chunk;
@property (readonly, nonatomic) char isBuildTuple;
@property (readonly, nonatomic) char isChunkTuple;
@property (readonly, nonatomic) NSString * property;
@property (readonly, nonatomic) KNBuildAttributeValue * value;

+ (KNBuildAttributeTuple *)tupleWithChunk:(KNBuildChunk *)arg0 property:(NSString *)arg1 value:(KNBuildAttributeValue *)arg2;
+ (KNBuildAttributeTuple *)tupleForBuild:(id)arg0 property:(NSString *)arg1 value:(KNBuildAttributeValue *)arg2;
+ (KNBuildAttributeTuple *)tupleWithChunk:(KNBuildChunk *)arg0 referent:(unsigned int)arg1;

- (KNBuildAttributeTuple *)initWithChunk:(KNBuildChunk *)arg0 property:(NSString *)arg1 value:(KNBuildAttributeValue *)arg2;
- (KNBuildAttributeTuple *)initWithBuild:(KNBuild *)arg0 property:(NSString *)arg1 value:(KNBuildAttributeValue *)arg2;
- (KNBuildAttributeTuple *)initWithBuild:(KNBuild *)arg0 chunk:(KNBuildChunk *)arg1 property:(NSString *)arg2 value:(KNBuildAttributeValue *)arg3;
- (char)isBuildTuple;
- (char)isChunkTuple;
- (KNBuild *)build;
- (NSString *)description;
- (KNBuildAttributeValue *)value;
- (KNBuildAttributeTuple *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)property;
- (KNBuildChunk *)chunk;

@end
