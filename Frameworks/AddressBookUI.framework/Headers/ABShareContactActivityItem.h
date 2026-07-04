/* Runtime dump - ABShareContactActivityItem
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABShareContactActivityItem : NSObject <UIActivityItemSource, UIActivityItemSourceAttachment>
{
    CNContact * _contact;
}

@property (retain, nonatomic) CNContact * contact;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (ABShareContactActivityItem *)initWithContact:(CNContact *)arg0;
- (CNContact *)contact;
- (void)setContact:(CNContact *)arg0;
- (void)dealloc;
- (NSObject *)activityViewControllerPlaceholderItem:(UIActivityViewController *)arg0;
- (NSObject *)activityViewController:(BRController *)arg0 itemForActivityType:(NSString *)arg1;
- (NSString *)activityViewController:(BRController *)arg0 subjectForActivityType:(NSString *)arg1;
- (NSObject *)activityViewController:(BRController *)arg0 dataTypeIdentifierForActivityType:(NSObject *)arg1;
- (NSObject *)activityViewController:(BRController *)arg0 thumbnailImageForActivityType:(NSObject *)arg1 suggestedSize:(struct CGSize)arg2;
- (NSObject *)activityViewController:(BRController *)arg0 attachmentNameForActivityType:(NSObject *)arg1;

@end
