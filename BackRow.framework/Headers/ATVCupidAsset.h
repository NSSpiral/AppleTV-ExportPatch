/* Runtime dump - ATVCupidAsset
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVCupidAsset : NSObject
{
    MSAsset * _asset;
    int _state;
    NSString * _assetID;
    NSDate * _dateContentCreated;
}

@property (retain) MSAsset * asset;
@property int state;
@property (copy) NSString * assetID;
@property (retain) NSDate * dateContentCreated;

- (NSString *)assetID;
- (void)setAssetID:(NSString *)arg0;
- (NSDate *)dateContentCreated;
- (void)setDateContentCreated:(NSDate *)arg0;
- (ATVCupidAsset *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (int)state;
- (void)setState:(int)arg0;
- (void).cxx_destruct;
- (MSAsset *)asset;
- (void)setAsset:(MSAsset *)arg0;

@end
