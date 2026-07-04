/* Runtime dump - VKPMatchingPair
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPMatchingPair : PBCodable <NSCopying>
{
    unsigned long long _attributeValue;
    VKPMatchingTree * _subTree;
}

@property (nonatomic) unsigned long long attributeValue;
@property (retain, nonatomic) VKPMatchingTree * subTree;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (VKPMatchingPair *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (VKPMatchingTree *)subTree;
- (void)setSubTree:(VKPMatchingTree *)arg0;
- (unsigned long long)attributeValue;
- (void)setAttributeValue:(unsigned long long)arg0;

@end
