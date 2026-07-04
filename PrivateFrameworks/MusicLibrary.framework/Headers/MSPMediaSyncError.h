/* Runtime dump - MSPMediaSyncError
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MSPMediaSyncError : PBCodable <NSCopying>
{
    int _errorCode;
    NSString * _errorDescription;
    struct ? _has;
}

@property (readonly, nonatomic) char hasErrorDescription;
@property (retain, nonatomic) NSString * errorDescription;
@property (nonatomic) char hasErrorCode;
@property (nonatomic) int errorCode;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (MSPMediaSyncError *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setErrorDescription:(NSString *)arg0;
- (char)hasErrorDescription;
- (void)setErrorCode:(int)arg0;
- (void)setHasErrorCode:(char)arg0;
- (char)hasErrorCode;
- (NSString *)errorDescription;
- (int)errorCode;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
