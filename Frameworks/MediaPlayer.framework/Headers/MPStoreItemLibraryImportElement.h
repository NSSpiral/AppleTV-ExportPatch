/* Runtime dump - MPStoreItemLibraryImportElement
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreItemLibraryImportElement : NSObject
{
    NSDictionary * _additionalTrackMetadata;
    long long _storeItemID;
}

@property (readonly, nonatomic) long long storeItemID;
@property (readonly, nonatomic) NSDictionary * additionalTrackMetadata;

- (long long)storeItemID;
- (MPStoreItemLibraryImportElement *)initWithStoreItemID:(long long)arg0 additionalTrackMetadata:(NSDictionary *)arg1;
- (GKStoreItemInternal *)storeItem;
- (NSDictionary *)additionalTrackMetadata;
- (void).cxx_destruct;

@end
