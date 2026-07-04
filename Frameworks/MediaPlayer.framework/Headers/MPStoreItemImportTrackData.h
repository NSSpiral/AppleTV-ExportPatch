/* Runtime dump - MPStoreItemImportTrackData
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreItemImportTrackData : ML3StoreItemTrackData
{
    NSArray * _importElements;
}

@property (readonly, nonatomic) NSArray * importElements;

+ (MPStoreItemImportTrackData *)_importPropertiesDictFromImportMetadataDict:(id)arg0;

- (NSArray *)importElements;
- (MPStoreItemImportTrackData *)initWithImportElements:(NSArray *)arg0;
- (id)_associatedElementForPropertyDict:(id)arg0;
- (void).cxx_destruct;
- (NSArray *)parsedStoreItemsImportProperties;

@end
