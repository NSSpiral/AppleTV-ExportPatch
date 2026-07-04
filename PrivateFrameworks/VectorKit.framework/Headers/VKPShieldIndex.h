/* Runtime dump - VKPShieldIndex
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPShieldIndex : PBCodable <NSCopying>
{
    NSMutableArray * _entries;
    NSMutableArray * _textEntries;
}

@property (retain, nonatomic) NSMutableArray * entries;
@property (retain, nonatomic) NSMutableArray * textEntries;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (VKPShieldIndex *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (NSMutableArray *)entries;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (NSObject *)artworkIdentifierForShieldType:(long long)arg0 textSpecificIdentifiers:(id *)arg1;
- (NSObject *)defaultArtworkIdentifierForFeatureType:(int)arg0;
- (NSMutableArray *)textEntries;
- (void)setEntries:(NSMutableArray *)arg0;
- (void)setTextEntries:(NSMutableArray *)arg0;
- (void)addEntries:(NSArray *)arg0;
- (void)addTextEntries:(NSArray *)arg0;
- (unsigned int)entriesCount;
- (void)clearEntries;
- (NSObject *)entriesAtIndex:(unsigned int)arg0;
- (unsigned int)textEntriesCount;
- (void)clearTextEntries;
- (NSObject *)textEntriesAtIndex:(unsigned int)arg0;

@end
