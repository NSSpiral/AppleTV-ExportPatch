/* Runtime dump - ABContactListPhotoView
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABContactListPhotoView : UIView
{
    UIImageView * _contactImageView;
    ABStyleProvider * _styleProvider;
    ABUIPerson * _person;
}

@property (retain, nonatomic) ABStyleProvider * styleProvider;
@property (retain, nonatomic) ABUIPerson * person;
@property (nonatomic) void * record;

- (ABStyleProvider *)styleProvider;
- (void)setStyleProvider:(ABStyleProvider *)arg0;
- (ABContactListPhotoView *)initWithFrame:(struct CGRect)arg0 styleProvider:(struct CGSize)arg1;
- (UIImage *)_framedPhoto;
- (ABContactListPhotoView *)initWithFrame:(struct CGRect)arg0 UIStyle:(struct CGSize)arg1;
- (ABContactListPhotoView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg0;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (struct CGSize)intrinsicContentSize;
- (ABUIPerson *)person;
- (void)setPerson:(ABUIPerson *)arg0;
- (void *)record;
- (void)setRecord:(void *)arg0;

@end
