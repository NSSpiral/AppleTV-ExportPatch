/* Runtime dump - VKPMatchingTree
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPMatchingTree : PBCodable <NSCopying>
{
    unsigned int _key;
    unsigned int _score;
    unsigned int _styleReference;
    NSMutableArray * _subTrees;
    struct ? _has;
}

@property (nonatomic) unsigned int key;
@property (retain, nonatomic) NSMutableArray * subTrees;
@property (nonatomic) char hasStyleReference;
@property (nonatomic) unsigned int styleReference;
@property (nonatomic) unsigned int score;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (unsigned int)key;
- (VKPMatchingTree *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setKey:(unsigned int)arg0;
- (unsigned int)score;
- (char)hasStyleReference;
- (unsigned int)styleReference;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (NSMutableArray *)subTrees;
- (void)setScore:(unsigned int)arg0;
- (void)setStyleReference:(unsigned int)arg0;
- (void)setHasStyleReference:(char)arg0;
- (void)setSubTrees:(NSMutableArray *)arg0;
- (void)addSubTree:(id)arg0;
- (unsigned int)subTreesCount;
- (void)clearSubTrees;
- (NSObject *)subTreeAtIndex:(unsigned int)arg0;

@end
