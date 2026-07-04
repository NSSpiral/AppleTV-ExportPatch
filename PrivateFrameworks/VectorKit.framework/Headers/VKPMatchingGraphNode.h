/* Runtime dump - VKPMatchingGraphNode
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPMatchingGraphNode : PBCodable <NSCopying>
{
    struct ? _attributeValues;
    struct ? _nodeIndices;
    unsigned int _key;
    unsigned int _score;
    unsigned int _styleReference;
    struct ? _has;
}

@property (nonatomic) unsigned int key;
@property (readonly, nonatomic) unsigned int attributeValuesCount;
@property (readonly, nonatomic) unsigned long long * attributeValues;
@property (readonly, nonatomic) unsigned int nodeIndicesCount;
@property (readonly, nonatomic) unsigned int * nodeIndices;
@property (nonatomic) char hasStyleReference;
@property (nonatomic) unsigned int styleReference;
@property (nonatomic) unsigned int score;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (unsigned int)key;
- (VKPMatchingGraphNode *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setKey:(unsigned int)arg0;
- (unsigned int)score;
- (char)hasStyleReference;
- (unsigned int)styleReference;
- (unsigned int)attributeValuesCount;
- (unsigned long long *)attributeValues;
- (unsigned int *)nodeIndices;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (void)setScore:(unsigned int)arg0;
- (void)clearAttributeValues;
- (unsigned long long)attributeValuesAtIndex:(unsigned int)arg0;
- (void)addAttributeValues:(unsigned long long)arg0;
- (unsigned int)nodeIndicesCount;
- (void)clearNodeIndices;
- (unsigned int)nodeIndicesAtIndex:(unsigned int)arg0;
- (void)addNodeIndices:(unsigned int)arg0;
- (void)setAttributeValues:(unsigned long long *)arg0 count:(unsigned int)arg1;
- (void)setNodeIndices:(unsigned int *)arg0 count:(unsigned int)arg1;
- (void)setStyleReference:(unsigned int)arg0;
- (void)setHasStyleReference:(char)arg0;

@end
