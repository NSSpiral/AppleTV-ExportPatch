/* Runtime dump - MSCameraFolder
 * Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface MSCameraFolder : ICCameraFolder
{
    void * _msCameraFolderProperties;
}

@property (readonly) unsigned long long fsSN;
@property (readonly) struct timespec fsCreationTime;
@property (readonly) struct timespec fsModificationTime;
@property (readonly) long long fsSize;

- (void)dealloc;
- (void)enumerateContent;
- (char)deleteItemFromCamera:(id)arg0;
- (MSCameraFolder *)initWithName:(NSString *)arg0 parentFolder:(ICCameraFolder *)arg1 device:(NSObject *)arg2 fsSN:(unsigned long long)arg3 fsCreationTime:(struct timespec)arg4 fsModificationTime:(struct timespec)arg5 fsSize:(long long)arg6 fsFlags:(unsigned int)arg7;
- (unsigned long long)fsSN;
- (struct timespec)fsCreationTime;
- (long long)fsSize;
- (NSString *)folderMatchingPath:(NSString *)arg0;
- (struct timespec)fsModificationTime;
- (NSString *)itemMatchingName:(NSString *)arg0 fsSN:(unsigned long long)arg1 fsCreationTime:(struct timespec *)arg2 fsSize:(long long)arg3;
- (void)finalize;

@end
