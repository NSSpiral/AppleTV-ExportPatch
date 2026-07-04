/* Runtime dump - PTPCameraFolder
 * Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPCameraFolder : ICCameraFolder
{
    void * _ptpCameraFolderProperties;
    NSString * _path;
}

@property (readonly) unsigned int type;
@property (readonly) unsigned long storageID;
@property (readonly) unsigned long objHandle;
@property (copy) id info;
@property (retain) NSString * path;

- (void)dealloc;
- (NSString *)description;
- (unsigned int)type;
- (NSString *)path;
- (GEOPhotoInfo *)info;
- (void)setPath:(NSString *)arg0;
- (void)setInfo:(NSDictionary *)arg0;
- (void)enumerateContent;
- (char)deleteItemFromCamera:(id)arg0;
- (unsigned long)objHandle;
- (id)itemForObjectHandle:(unsigned long)arg0;
- (id)folderForObjectHandle:(unsigned long)arg0;
- (unsigned long)storageID;
- (id)folderForObjectHandleCreatingIfNeeded:(unsigned long)arg0 addUsedObjectIDs:(id)arg1 numFoldersCreated:(int *)arg2;
- (PTPCameraFolder *)initWithName:(NSString *)arg0 parentFolder:(ICCameraFolder *)arg1 device:(NSObject *)arg2 type:(unsigned int)arg3 storageID:(unsigned long)arg4 objectHandle:(unsigned long)arg5;
- (char)hasDCIMParent;
- (void)refreshInfo;
- (void)finalize;

@end
