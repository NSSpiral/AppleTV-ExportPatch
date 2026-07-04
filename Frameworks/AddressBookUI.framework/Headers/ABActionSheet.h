/* Runtime dump - ABActionSheet
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABActionSheet : UIActionSheet
{
    struct __CFArray * _tags;
    struct __CFArray * _tag2s;
    struct __CFArray * _tag3s;
    struct __CFArray * _tag4s;
    void * _ab_context;
}

@property (nonatomic) void * ab_context;

- (int)ab_addButtonWithTitle:(NSString *)arg0 tag:(int)arg1;
- (NSString *)ab_addButtonWithTitle:(NSString *)arg0 label:(NSString *)arg1 tag:(int)arg2;
- (NSString *)ab_addButtonWithTitle:(NSString *)arg0 label:(NSString *)arg1 tag:(int)arg2 tag2:(int)arg3;
- (NSString *)ab_addButtonWithTitle:(NSString *)arg0 label:(NSString *)arg1 tag:(int)arg2 tag2:(int)arg3 tag3:(void *)arg4;
- (NSString *)ab_addButtonWithTitle:(NSString *)arg0 label:(NSString *)arg1 tag:(int)arg2 tag2:(int)arg3 tag3:(void *)arg4 tag4:(void)arg5;
- (int)ab_tagAtIndex:(int)arg0;
- (int)ab_tag2AtIndex:(int)arg0;
- (void *)ab_tag3AtIndex:(SEL)arg0;
- (void *)ab_tag4AtIndex:(SEL)arg0;
- (int)ab_addButtonWithTitle:(NSString *)arg0 tag:(int)arg1 tag2:(int)arg2;
- (void *)ab_context;
- (void)setAb_context:(void *)arg0;
- (void)dealloc;
- (ABActionSheet *)init;
- (int)_addButtonWithTitle:(NSString *)arg0;
- (NSString *)_addButtonWithTitle:(NSString *)arg0 label:(NSString *)arg1;
- (ABActionSheet *)initWithTitle:(NSString *)arg0 delegate:(NSObject *)arg1 cancelButtonTitle:(NSString *)arg2 destructiveButtonTitle:(NSString *)arg3 otherButtonTitles:(id)arg4;

@end
