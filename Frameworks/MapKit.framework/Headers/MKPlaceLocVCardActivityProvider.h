/* Runtime dump - MKPlaceLocVCardActivityProvider
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceLocVCardActivityProvider : MKPlaceActivityProvider
{
    CNContact * _contact;
}

@property (retain, nonatomic) CNContact * contact;

- (CNContact *)contact;
- (void)setContact:(CNContact *)arg0;
- (MKPlaceLocVCardActivityProvider *)initWithMapItem:(MKMapItem *)arg0 contact:(CNContact *)arg1;
- (void)_setRecord:(void *)arg0 property:(int)arg1 stringValue:(NSString *)arg2 label:(NSString *)arg3;
- (void).cxx_destruct;
- (NSObject *)activityViewControllerPlaceholderItem:(UIActivityViewController *)arg0;
- (NSObject *)activityViewController:(UIActivityViewController *)arg0 itemForActivityType:(NSString *)arg1;
- (NSString *)activityViewController:(UIActivityViewController *)arg0 dataTypeIdentifierForActivityType:(NSString *)arg1;
- (NSObject *)activityViewController:(BRController *)arg0 attachmentNameForActivityType:(NSObject *)arg1;

@end
