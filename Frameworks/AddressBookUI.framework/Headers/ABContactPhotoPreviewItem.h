/* Runtime dump - ABContactPhotoPreviewItem
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABContactPhotoPreviewItem : NSObject <QLPreviewItem>
{
    NSURL * _previewItemURL;
    NSString * _previewItemTitle;
}

@property (retain) NSURL * previewItemURL;
@property (retain) NSString * previewItemTitle;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSURL *)previewItemURL;
- (void)setPreviewItemURL:(NSURL *)arg0;
- (NSString *)previewItemTitle;
- (void)setPreviewItemTitle:(NSString *)arg0;

@end
