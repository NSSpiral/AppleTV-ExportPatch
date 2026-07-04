/* Runtime dump - MIPLibraryIdentifier
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MIPLibraryIdentifier : PBCodable <NSCopying>
{
    long long _libraryId;
    NSString * _libraryName;
    struct ? _has;
}

@property (readonly, nonatomic) char hasLibraryName;
@property (retain, nonatomic) NSString * libraryName;
@property (nonatomic) char hasLibraryId;
@property (nonatomic) long long libraryId;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (MIPLibraryIdentifier *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setLibraryName:(NSString *)arg0;
- (char)hasLibraryName;
- (void)setLibraryId:(long long)arg0;
- (void)setHasLibraryId:(char)arg0;
- (char)hasLibraryId;
- (NSString *)libraryName;
- (long long)libraryId;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
