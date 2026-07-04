/* Runtime dump - ATVMusicStoreControlPopulator
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVMusicStoreControlPopulator : NSObject
{
    unsigned int _matchOrder;
}

@property (readonly) unsigned int matchOrder;

+ (char)canHandleData:(NSData *)arg0;

- (NSData *)buttonForData:(NSData *)arg0;
- (NSData *)listRowForData:(NSData *)arg0;
- (unsigned int)matchOrder;
- (NSData *)mainMenuButtonForData:(NSData *)arg0;
- (NSData *)mediaPreviewControlForData:(NSData *)arg0;
- (NSData *)pagedViewForData:(NSData *)arg0;
- (NSData *)shelfForData:(NSData *)arg0;
- (NSData *)gridForData:(NSData *)arg0;
- (NSData *)listForData:(NSData *)arg0;
- (float)buttonHeightForData:(NSData *)arg0;
- (float)listRowHeightForData:(NSData *)arg0;
- (float)mediaPreviewHeightForData:(NSData *)arg0;
- (float)shelfHeightForData:(NSData *)arg0;
- (float)gridHeightForData:(NSData *)arg0;
- (float)listHeightForData:(NSData *)arg0;
- (NSData *)coverArtURLForData:(NSData *)arg0 thumbnail:(char)arg1;
- (NSData *)placeholderImageForData:(NSData *)arg0;
- (float)_shelfTitleWidthScaleForCollectionType:(NSObject *)arg0 featured:(char)arg1 moreInfoContent:(char)arg2 showTitleAndSubtitle:(char)arg3 showAllTitles:(char)arg4 related:(char)arg5;
- (float)_shelfTitleVerticalOffsetForCollectionType:(NSObject *)arg0 featured:(char)arg1 topShelf:(char)arg2 related:(char)arg3 showTitleAndSubtitle:(char)arg4 showAllTitles:(char)arg5;
- (NSData *)placeholderImageForShelfData:(NSData *)arg0;
- (float)_shelfWidthForData:(NSData *)arg0;
- (float)_shelfBoxTitleHeightForCollectionType:(NSObject *)arg0 featured:(char)arg1 related:(char)arg2;
- (float)pagedViewHeightForData:(NSData *)arg0;
- (NSData *)placeholderImageForMenuItemData:(NSData *)arg0;
- (NSObject *)playButtonEnabledMenuItem;
- (ATVMusicStoreControlPopulator *)init;

@end
