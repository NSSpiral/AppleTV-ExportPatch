/* Runtime dump - RadioStationMatchLibraryTrackMetadata
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioStationMatchLibraryTrackMetadata : RadioStationMatchMetadata
{
    NSString * _albumArtistName;
    NSString * _albumName;
    NSString * _artistName;
    NSString * _composerName;
    NSString * _copyright;
    NSNumber * _discCount;
    NSNumber * _discNumber;
    NSNumber * _fileSize;
    NSString * _genreName;
    NSNumber * _compilation;
    NSNumber * _duration;
    NSString * _kind;
    NSString * _name;
    NSNumber * _storeAdamID;
    NSNumber * _storeCloudID;
    NSNumber * _trackCount;
    NSNumber * _trackNumber;
    NSNumber * _year;
}

@property (copy, nonatomic) NSString * albumArtistName;
@property (copy, nonatomic) NSString * albumName;
@property (copy, nonatomic) NSString * artistName;
@property (copy, nonatomic) NSString * composerName;
@property (copy, nonatomic) NSString * copyright;
@property (copy, nonatomic) NSNumber * discCount;
@property (copy, nonatomic) NSNumber * discNumber;
@property (copy, nonatomic) NSNumber * fileSize;
@property (copy, nonatomic) NSString * genreName;
@property (copy, nonatomic) NSNumber * compilation;
@property (copy, nonatomic) NSNumber * duration;
@property (copy, nonatomic) NSString * kind;
@property (copy, nonatomic) NSString * name;
@property (copy, nonatomic) NSNumber * storeAdamID;
@property (copy, nonatomic) NSNumber * storeCloudID;
@property (copy, nonatomic) NSNumber * trackCount;
@property (copy, nonatomic) NSNumber * trackNumber;
@property (copy, nonatomic) NSNumber * year;

+ (NSString *)metadataKey;

- (NSNumber *)discCount;
- (NSNumber *)storeAdamID;
- (NSString *)albumArtistName;
- (void)setStoreAdamID:(NSNumber *)arg0;
- (NSNumber *)duration;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)setDuration:(NSNumber *)arg0;
- (void).cxx_destruct;
- (NSNumber *)year;
- (void)setYear:(NSNumber *)arg0;
- (NSString *)kind;
- (void)setKind:(NSString *)arg0;
- (void)setDiscNumber:(NSNumber *)arg0;
- (void)setTrackNumber:(NSNumber *)arg0;
- (NSNumber *)discNumber;
- (NSNumber *)trackNumber;
- (NSString *)artistName;
- (void)setArtistName:(NSString *)arg0;
- (void)setCompilation:(NSNumber *)arg0;
- (id)isCompilation;
- (NSString *)composerName;
- (NSString *)genreName;
- (NSNumber *)trackCount;
- (void)setCopyright:(NSString *)arg0;
- (NSString *)copyright;
- (NSNumber *)fileSize;
- (void)setFileSize:(NSNumber *)arg0;
- (void)setAlbumName:(NSString *)arg0;
- (NSString *)albumName;
- (NSDictionary *)copyMetadataDictionary;
- (void)setAlbumArtistName:(NSString *)arg0;
- (void)setDiscCount:(NSNumber *)arg0;
- (void)setGenreName:(NSString *)arg0;
- (NSNumber *)storeCloudID;
- (void)setStoreCloudID:(NSNumber *)arg0;
- (void)setTrackCount:(NSNumber *)arg0;
- (void)setComposerName:(NSString *)arg0;

@end
