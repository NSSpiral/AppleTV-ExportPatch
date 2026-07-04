/* Runtime dump - RadioStationMatchLibraryArtistMetadata
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioStationMatchLibraryArtistMetadata : RadioStationMatchMetadata
{
    NSString * _artistName;
    NSNumber * _artistStoreID;
    NSNumber * _representativeCloudID;
}

@property (copy, nonatomic) NSString * artistName;
@property (copy, nonatomic) NSNumber * artistStoreID;
@property (copy, nonatomic) NSNumber * representativeCloudID;

+ (NSString *)metadataKey;

- (NSNumber *)artistStoreID;
- (void).cxx_destruct;
- (NSString *)artistName;
- (void)setArtistName:(NSString *)arg0;
- (NSDictionary *)copyMetadataDictionary;
- (NSNumber *)representativeCloudID;
- (void)setRepresentativeCloudID:(NSNumber *)arg0;
- (void)setArtistStoreID:(NSNumber *)arg0;

@end
