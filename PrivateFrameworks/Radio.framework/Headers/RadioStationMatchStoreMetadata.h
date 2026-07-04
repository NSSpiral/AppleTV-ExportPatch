/* Runtime dump - RadioStationMatchStoreMetadata
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioStationMatchStoreMetadata : RadioStationMatchMetadata
{
    NSNumber * _storeID;
}

@property (copy, nonatomic) NSNumber * storeID;

+ (NSString *)metadataKey;

- (NSNumber *)storeID;
- (void).cxx_destruct;
- (NSDictionary *)copyMetadataDictionary;
- (void)setStoreID:(NSNumber *)arg0;

@end
