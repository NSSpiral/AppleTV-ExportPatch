/* Runtime dump - RadioStationMatchLibraryAlbumMetadata
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioStationMatchLibraryAlbumMetadata : RadioStationMatchMetadata
{
    NSString * _albumName;
    NSNumber * _albumStoreID;
    NSNumber * _representativeCloudID;
}

@property (copy, nonatomic) NSString * albumName;
@property (copy, nonatomic) NSNumber * albumStoreID;
@property (copy, nonatomic) NSNumber * representativeCloudID;

+ (NSString *)metadataKey;

- (NSNumber *)albumStoreID;
- (void).cxx_destruct;
- (void)setAlbumName:(NSString *)arg0;
- (NSString *)albumName;
- (NSDictionary *)copyMetadataDictionary;
- (void)setAlbumStoreID:(NSNumber *)arg0;
- (NSNumber *)representativeCloudID;
- (void)setRepresentativeCloudID:(NSNumber *)arg0;

@end
