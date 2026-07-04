/* Runtime dump - MPStoreItemOfferAsset
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreItemOfferAsset : NSObject
{
    NSDictionary * _lookupDictionary;
}

@property (readonly, copy, nonatomic) NSDictionary * lookupDictionary;
@property (readonly, nonatomic) double duration;
@property (readonly, copy, nonatomic) NSString * flavor;
@property (readonly, nonatomic) double previewDuration;
@property (readonly, copy, nonatomic) NSURL * previewURL;
@property (readonly, nonatomic) long long size;

- (NSString *)flavor;
- (double)previewDuration;
- (NSURL *)previewURL;
- (long long)size;
- (double)duration;
- (void).cxx_destruct;
- (NSDictionary *)lookupDictionary;
- (MPStoreItemOfferAsset *)initWithLookupDictionary:(NSDictionary *)arg0;

@end
