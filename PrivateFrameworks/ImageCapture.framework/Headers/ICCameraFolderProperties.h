/* Runtime dump - ICCameraFolderProperties
 * Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface ICCameraFolderProperties : NSObject
{
    NSMutableArray * _files;
    NSMutableArray * _folders;
}

@property (retain) NSMutableArray * files;
@property (retain) NSMutableArray * folders;

- (void)dealloc;
- (NSMutableArray *)folders;
- (void)setFolders:(NSMutableArray *)arg0;
- (void)finalize;
- (NSMutableArray *)files;
- (void)setFiles:(NSMutableArray *)arg0;

@end
