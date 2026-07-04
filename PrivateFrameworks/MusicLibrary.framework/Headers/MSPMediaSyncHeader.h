/* Runtime dump - MSPMediaSyncHeader
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MSPMediaSyncHeader : PBCodable <NSCopying>
{
    int _syncType;
    int _totalPackages;
    struct ? _has;
}

@property (nonatomic) char hasTotalPackages;
@property (nonatomic) int totalPackages;
@property (nonatomic) char hasSyncType;
@property (nonatomic) int syncType;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (MSPMediaSyncHeader *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setTotalPackages:(int)arg0;
- (void)setHasTotalPackages:(char)arg0;
- (char)hasTotalPackages;
- (void)setSyncType:(int)arg0;
- (void)setHasSyncType:(char)arg0;
- (char)hasSyncType;
- (int)totalPackages;
- (int)syncType;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
