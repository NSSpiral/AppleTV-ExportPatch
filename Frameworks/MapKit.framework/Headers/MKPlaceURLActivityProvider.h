/* Runtime dump - MKPlaceURLActivityProvider
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceURLActivityProvider : MKPlaceActivityProvider <MKActivityItemSource, MKActivityItemSocialSource>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSObject *)activityViewControllerPlaceholderItem:(UIActivityViewController *)arg0;
- (NSObject *)activityViewController:(UIActivityViewController *)arg0 itemForActivityType:(NSString *)arg1;
- (NSString *)activityViewController:(UIActivityViewController *)arg0 subjectForActivityType:(NSString *)arg1;
- (UIImage *)activityViewController:(UIActivityViewController *)arg0 thumbnailImageForActivityType:(NSString *)arg1 suggestedSize:(struct CGSize)arg2;
- (UIImage *)activityViewController:(UIActivityViewController *)arg0 thumbnailForActivityType:(NSString *)arg1;
- (int)activityViewController:(UIActivityViewController *)arg0 attachmentULRTypeForActivityType:(NSString *)arg1;

@end
