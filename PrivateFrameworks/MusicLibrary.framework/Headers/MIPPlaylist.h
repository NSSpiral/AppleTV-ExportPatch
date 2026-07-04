/* Runtime dump - MIPPlaylist
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MIPPlaylist : PBCodable <NSCopying>
{
    long long _storeId;
    NSMutableArray * _childIdentifiers;
    NSString * _cloudGlobalId;
    int _distinguishedKind;
    MIPMultiverseIdentifier * _geniusSeedTrackIdentifier;
    NSMutableArray * _items;
    NSString * _name;
    MIPMultiverseIdentifier * _parentIdentifier;
    MIPSmartPlaylistInfo * _smartPlaylistInfo;
    int _sortType;
    int _type;
    char _hidden;
    char _reversedSorting;
    struct ? _has;
}

@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) NSString * name;
@property (nonatomic) char hasStoreId;
@property (nonatomic) long long storeId;
@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (nonatomic) char hasHidden;
@property (nonatomic) char hidden;
@property (readonly, nonatomic) char hasSmartPlaylistInfo;
@property (retain, nonatomic) MIPSmartPlaylistInfo * smartPlaylistInfo;
@property (nonatomic) char hasSortType;
@property (nonatomic) int sortType;
@property (nonatomic) char hasReversedSorting;
@property (nonatomic) char reversedSorting;
@property (readonly, nonatomic) char hasParentIdentifier;
@property (retain, nonatomic) MIPMultiverseIdentifier * parentIdentifier;
@property (readonly, nonatomic) char hasGeniusSeedTrackIdentifier;
@property (retain, nonatomic) MIPMultiverseIdentifier * geniusSeedTrackIdentifier;
@property (nonatomic) char hasDistinguishedKind;
@property (nonatomic) int distinguishedKind;
@property (readonly, nonatomic) char hasCloudGlobalId;
@property (retain, nonatomic) NSString * cloudGlobalId;
@property (retain, nonatomic) NSMutableArray * childIdentifiers;
@property (retain, nonatomic) NSMutableArray * items;

- (void)setHidden:(char)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)setType:(int)arg0;
- (int)type;
- (MIPPlaylist *)copyWithZone:(struct _NSZone *)arg0;
- (NSMutableArray *)items;
- (void)setItems:(NSMutableArray *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)addItems:(NSArray *)arg0;
- (void).cxx_destruct;
- (unsigned int)itemsCount;
- (void)setStoreId:(long long)arg0;
- (void)setHasStoreId:(char)arg0;
- (char)hasStoreId;
- (long long)storeId;
- (void)addChildIdentifiers:(id)arg0;
- (void)setSmartPlaylistInfo:(MIPSmartPlaylistInfo *)arg0;
- (void)setGeniusSeedTrackIdentifier:(MIPMultiverseIdentifier *)arg0;
- (void)setCloudGlobalId:(NSString *)arg0;
- (unsigned int)childIdentifiersCount;
- (void)clearChildIdentifiers;
- (NSObject *)childIdentifiersAtIndex:(unsigned int)arg0;
- (void)clearItems;
- (NSObject *)itemsAtIndex:(unsigned int)arg0;
- (void)setHasType:(char)arg0;
- (char)hasType;
- (void)setHasHidden:(char)arg0;
- (char)hasHidden;
- (char)hasSmartPlaylistInfo;
- (void)setSortType:(int)arg0;
- (void)setHasSortType:(char)arg0;
- (char)hasSortType;
- (void)setReversedSorting:(char)arg0;
- (void)setHasReversedSorting:(char)arg0;
- (char)hasReversedSorting;
- (char)hasParentIdentifier;
- (char)hasGeniusSeedTrackIdentifier;
- (void)setDistinguishedKind:(int)arg0;
- (void)setHasDistinguishedKind:(char)arg0;
- (char)hasDistinguishedKind;
- (char)hasCloudGlobalId;
- (MIPSmartPlaylistInfo *)smartPlaylistInfo;
- (int)sortType;
- (char)reversedSorting;
- (MIPMultiverseIdentifier *)geniusSeedTrackIdentifier;
- (int)distinguishedKind;
- (NSString *)cloudGlobalId;
- (NSMutableArray *)childIdentifiers;
- (void)setChildIdentifiers:(NSMutableArray *)arg0;
- (MIPMultiverseIdentifier *)parentIdentifier;
- (void)setParentIdentifier:(MIPMultiverseIdentifier *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (char)hasName;
- (char)hidden;

@end
