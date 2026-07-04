/* Runtime dump - ICCameraFolder
 * Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface ICCameraFolder : ICCameraItem
{
    void * _folderProperties;
    int _filesLock;
    int _foldersLock;
}

@property (readonly) NSArray * contents;

- (void)addFile:(NSString *)arg0;
- (void)dealloc;
- (NSString *)description;
- (NSArray *)contents;
- (NSString *)valueForUndefinedKey:(NSString *)arg0;
- (struct CGImage *)thumbnail;
- (char)hasThumbnail;
- (NSMutableArray *)folders;
- (void)deleteItem:(NSObject *)arg0;
- (void)addFolder:(ExFATCameraFolder *)arg0;
- (ICCameraFolder *)initWithName:(NSString *)arg0 parentFolder:(ICCameraFolder *)arg1 device:(ICCameraDevice *)arg2;
- (void)lockFiles;
- (void)unlockFiles;
- (void)lockFolders;
- (void)unlockFolders;
- (void)deleteFile:(NSString *)arg0;
- (void)deleteFolder:(id)arg0;
- (void)requestMetadata;
- (void)requestThumbnail;
- (NSDictionary *)metadata;
- (void)finalize;
- (NSArray *)files;

@end
