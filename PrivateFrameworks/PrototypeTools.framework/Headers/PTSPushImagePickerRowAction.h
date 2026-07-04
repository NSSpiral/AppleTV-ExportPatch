/* Runtime dump - PTSPushImagePickerRowAction
 * Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSPushImagePickerRowAction : PTSPushViewControllerRowAction
{
    NSString * _imageDirectoryPath;
}

@property (copy, nonatomic) NSString * imageDirectoryPath;

+ (NSString *)actionWithImageDirectoryPath:(NSString *)arg0;

- (PTSPushImagePickerRowAction *)init;
- (PTSPushImagePickerRowAction *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (void)setImageDirectoryPath:(NSString *)arg0;
- (NSString *)imageDirectoryPath;

@end
