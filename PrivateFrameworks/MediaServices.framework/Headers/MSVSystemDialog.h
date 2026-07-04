/* Runtime dump - MSVSystemDialog
 * Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVSystemDialog : NSObject
{
    NSMutableArray * _textFields;
    struct __CFUserNotification * _presentedUserNotification;
    struct __CFRunLoopSource * _activeRunLoopSource;
    id _pendingCompletion;
    MSVSystemDialogOptions * _options;
}

@property (readonly, nonatomic) MSVSystemDialogOptions * options;
@property (readonly, nonatomic) NSArray * textFields;
@property (nonatomic) struct __CFUserNotification * presentedUserNotification;
@property (nonatomic) struct __CFRunLoopSource * activeRunLoopSource;
@property (copy, nonatomic) id pendingCompletion;

+ (NSDictionary *)systemDialogWithOptions:(MSVSystemDialogOptions *)arg0;
+ (NSDictionary *)passwordAlertWithOptions:(MSVSystemDialogOptions *)arg0;

- (void)dealloc;
- (NSArray *)textFields;
- (MSVSystemDialogOptions *)options;
- (void).cxx_destruct;
- (MSVSystemDialog *)initWithOptions:(MSVSystemDialogOptions *)arg0;
- (void)addTextField:(UITextField *)arg0;
- (void)setPresentedUserNotification:(struct __CFUserNotification *)arg0;
- (void)setPendingCompletion:(id /* block */)arg0;
- (void)setActiveRunLoopSource:(struct __CFRunLoopSource *)arg0;
- (struct __CFUserNotification *)presentedUserNotification;
- (struct __CFRunLoopSource *)activeRunLoopSource;
- (id /* block */)pendingCompletion;
- (void)addTextFieldWithTitle:(NSString *)arg0 secure:(char)arg1;
- (void)clearTextFields;
- (void)presentWithCompletion:(id /* block */)arg0;

@end
