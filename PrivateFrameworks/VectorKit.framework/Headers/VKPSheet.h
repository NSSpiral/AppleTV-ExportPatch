/* Runtime dump - VKPSheet
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPSheet : PBCodable <NSCopying>
{
    VKPGlobalProperties * _globalProperties;
    unsigned int _mapTypeSupport;
    NSMutableArray * _matchingGraphNodes;
    VKPMatchingTree * _matchingTree;
    unsigned int _matchingTreeVersion;
    NSMutableArray * _styles;
    unsigned int _version;
    struct ? _has;
}

@property (retain, nonatomic) NSMutableArray * styles;
@property (nonatomic) char hasVersion;
@property (nonatomic) unsigned int version;
@property (readonly, nonatomic) char hasGlobalProperties;
@property (retain, nonatomic) VKPGlobalProperties * globalProperties;
@property (readonly, nonatomic) char hasMatchingTree;
@property (retain, nonatomic) VKPMatchingTree * matchingTree;
@property (nonatomic) char hasMatchingTreeVersion;
@property (nonatomic) unsigned int matchingTreeVersion;
@property (retain, nonatomic) NSMutableArray * matchingGraphNodes;
@property (nonatomic) char hasMapTypeSupport;
@property (nonatomic) unsigned int mapTypeSupport;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (VKPSheet *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setVersion:(unsigned int)arg0;
- (unsigned int)version;
- (void)setStyles:(NSMutableArray *)arg0;
- (void)setGlobalProperties:(VKPGlobalProperties *)arg0;
- (void)setMatchingTree:(VKPMatchingTree *)arg0;
- (void)setMatchingGraphNodes:(NSMutableArray *)arg0;
- (void)addStyle:(struct __CFString *)arg0;
- (void)addMatchingGraphNodes:(id)arg0;
- (unsigned int)stylesCount;
- (void)clearStyles;
- (NSObject *)styleAtIndex:(unsigned int)arg0;
- (unsigned int)matchingGraphNodesCount;
- (void)clearMatchingGraphNodes;
- (NSObject *)matchingGraphNodesAtIndex:(unsigned int)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (void)setHasVersion:(char)arg0;
- (char)hasVersion;
- (char)hasGlobalProperties;
- (char)hasMatchingTree;
- (void)setMatchingTreeVersion:(unsigned int)arg0;
- (void)setHasMatchingTreeVersion:(char)arg0;
- (char)hasMatchingTreeVersion;
- (void)setMapTypeSupport:(unsigned int)arg0;
- (void)setHasMapTypeSupport:(char)arg0;
- (char)hasMapTypeSupport;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (NSMutableArray *)styles;
- (VKPGlobalProperties *)globalProperties;
- (VKPMatchingTree *)matchingTree;
- (unsigned int)matchingTreeVersion;
- (NSMutableArray *)matchingGraphNodes;
- (unsigned int)mapTypeSupport;

@end
