/* Runtime dump - PTPCameraStorage
 * Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPCameraStorage : PTPCameraFolder
{
    NSMutableArray * _tempArrayOfAllObjectHandles;
    NSMutableArray * _tempArrayOfAllObjectHandlesToBeIgnored;
}

- (void)dealloc;
- (NSMutableArray *)tempArrayOfAllObjectHandles;
- (NSMutableArray *)tempArrayOfAllObjectHandlesToBeIgnored;
- (void)refreshInfo;
- (PTPCameraStorage *)initWithStorageID:(unsigned long)arg0 device:(NSObject *)arg1;
- (void)prime;

@end
