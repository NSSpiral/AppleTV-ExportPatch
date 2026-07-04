/* Runtime dump - PTSDuplicateRowsActivity
 * Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSDuplicateRowsActivity : UICopyToPasteboardActivity
{
    NSMutableArray * _rows;
}

- (NSString *)activityType;
- (NSString *)activityTitle;
- (void).cxx_destruct;
- (char)canPerformWithActivityItems:(NSArray *)arg0;
- (void)performActivity;
- (UIImage *)activityImage;
- (void)prepareWithActivityItems:(NSArray *)arg0;
- (void)_duplicateSettings:(NSDictionary *)arg0 inGroup:(NSObject *)arg1;

@end
