/* Runtime dump - MSPMediaSyncPackage
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MSPMediaSyncPackage : PBCodable <NSCopying>
{
    MSPMediaSyncError * _error;
    MSPMediaSyncHeader * _header;
    MSPMediaSyncOperation * _syncOperation;
    int _type;
    char _lastPackage;
    struct ? _has;
}

@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (nonatomic) char hasLastPackage;
@property (nonatomic) char lastPackage;
@property (readonly, nonatomic) char hasHeader;
@property (retain, nonatomic) MSPMediaSyncHeader * header;
@property (readonly, nonatomic) char hasSyncOperation;
@property (retain, nonatomic) MSPMediaSyncOperation * syncOperation;
@property (readonly, nonatomic) char hasError;
@property (retain, nonatomic) MSPMediaSyncError * error;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setType:(int)arg0;
- (int)type;
- (MSPMediaSyncPackage *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (MSPMediaSyncError *)error;
- (void)setHasType:(char)arg0;
- (char)hasType;
- (void)setHeader:(MSPMediaSyncHeader *)arg0;
- (void)setSyncOperation:(MSPMediaSyncOperation *)arg0;
- (void)setError:(MSPMediaSyncError *)arg0;
- (void)setLastPackage:(char)arg0;
- (void)setHasLastPackage:(char)arg0;
- (char)hasLastPackage;
- (char)hasHeader;
- (char)hasSyncOperation;
- (char)hasError;
- (char)lastPackage;
- (MSPMediaSyncHeader *)header;
- (MSPMediaSyncOperation *)syncOperation;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
