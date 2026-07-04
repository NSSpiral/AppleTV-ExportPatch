/* Runtime dump - ExFATCameraFolder
 * Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface ExFATCameraFolder : ICCameraFolder
{
    void * _exFATCameraFolderProperties;
}

@property (readonly) id object;
@property (readonly) struct timespec fsCreationTime;
@property (readonly) struct timespec fsModificationTime;
@property (readonly) long long fsSize;

- (void)dealloc;
- (NSObject *)object;
- (void)enumerateContent;
- (char)deleteItemFromCamera:(id)arg0;
- (struct timespec)fsCreationTime;
- (long long)fsSize;
- (struct timespec)fsModificationTime;
- (ExFATCameraFolder *)initWithName:(NSString *)arg0 parentFolder:(ICCameraFolder *)arg1 device:(NSObject *)arg2 object:(NSObject *)arg3 fsCreationTime:(struct timespec)arg4 fsModificationTime:(struct timespec)arg5 fsSize:(long long)arg6;
- (void)finalize;

@end
