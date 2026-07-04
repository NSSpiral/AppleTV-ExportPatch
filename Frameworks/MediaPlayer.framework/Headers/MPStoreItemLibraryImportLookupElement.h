/* Runtime dump - MPStoreItemLibraryImportLookupElement
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreItemLibraryImportLookupElement : MPStoreItemLibraryImportElement
{
    SSLookupItem * _storeItem;
    NSDictionary * _lookupDictionary;
}

@property (readonly, nonatomic) NSDictionary * lookupDictionary;

- (MPStoreItemLibraryImportLookupElement *)initWithLookupDictionary:(NSDictionary *)arg0 additionalTrackMetadata:(NSDictionary *)arg1;
- (SSLookupItem *)storeItem;
- (void).cxx_destruct;
- (NSDictionary *)lookupDictionary;

@end
