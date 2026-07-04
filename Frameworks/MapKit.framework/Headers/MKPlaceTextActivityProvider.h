/* Runtime dump - MKPlaceTextActivityProvider
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceTextActivityProvider : MKPlaceActivityProvider <MKActivityItemSource>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSObject *)activityViewControllerPlaceholderItem:(UIActivityViewController *)arg0;
- (NSObject *)activityViewController:(UIActivityViewController *)arg0 itemForActivityType:(NSString *)arg1;
- (NSString *)activityViewController:(UIActivityViewController *)arg0 subjectForActivityType:(NSString *)arg1;

@end
