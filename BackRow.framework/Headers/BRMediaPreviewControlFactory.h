/* Runtime dump - BRMediaPreviewControlFactory
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRControlFactory;

@class BRControl, BRMediaType;
@interface BRMediaPreviewControlFactory : NSObject <BRControlFactory>
{
    BRMediaType * _missingType;
    char _deletterboxArtwork;
    char _shouldShowMetadata;
    char _showMetadataImmediately;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (BRMediaPreviewControlFactory *)filterProxies:(id)arg0;
+ (BRMediaPreviewControlFactory *)factory;

- (NSObject *)previewControlForImageProxy:(NSObject *)arg0;
- (BRControl *)controlForData:(NSData *)arg0 currentControl:(BRControl *)arg1 requestedBy:(BRControl *)arg2;
- (NSArray *)previewControlForAssets:(NSArray *)arg0;
- (id)previewControlForImageProxies:(id)arg0;
- (void)setMissingType:(BRMediaType *)arg0;
- (void)setPreviewShouldShowMetadata:(char)arg0;
- (void)setPreviewShouldShowMetadataImmediately:(char)arg0;
- (void)setShouldDeletterboxArtwork:(char)arg0;
- (NSArray *)_coverArtControllerForAssets:(NSArray *)arg0;
- (NSSet *)_metadataControllerForAsset:(NSSet *)arg0;
- (NSArray *)_paradeControllerForAssets:(NSArray *)arg0;
- (NSSet *)previewControlForAsset:(NSSet *)arg0;
- (id)updatePreviewControl:(BRControl *)arg0 imageProxies:(NSArray *)arg1;
- (BRMediaType *)missingType;
- (char)previewShouldShowMetadata;
- (char)previewShouldShowMetadataImmediately;
- (char)shouldDeletterboxArtwork;
- (void)dealloc;
- (BRMediaPreviewControlFactory *)init;

@end
