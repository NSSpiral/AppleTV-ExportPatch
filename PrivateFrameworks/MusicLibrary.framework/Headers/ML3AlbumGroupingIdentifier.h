/* Runtime dump - ML3AlbumGroupingIdentifier
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3AlbumGroupingIdentifier : NSObject <NSCopying>
{
    char _compilation;
    NSData * _groupingKey;
    NSString * _feedURL;
    int _seasonNumber;
    long long _albumArtistPersistentID;
}

@property (readonly, nonatomic) long long albumArtistPersistentID;
@property (readonly, nonatomic) NSData * groupingKey;
@property (readonly, nonatomic) NSString * feedURL;
@property (readonly, nonatomic) int seasonNumber;
@property (readonly, nonatomic) char compilation;
@property (readonly, nonatomic) NSData * keyValue;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (ML3AlbumGroupingIdentifier *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (int)seasonNumber;
- (char)compilation;
- (ML3AlbumGroupingIdentifier *)initWithAlbumArtistPersistentID:(long long)arg0 groupingKey:(NSData *)arg1 feedURL:(NSString *)arg2 seasonNumber:(int)arg3 compilation:(char)arg4;
- (NSData *)groupingKey;
- (long long)albumArtistPersistentID;
- (NSData *)keyValue;
- (NSString *)feedURL;

@end
