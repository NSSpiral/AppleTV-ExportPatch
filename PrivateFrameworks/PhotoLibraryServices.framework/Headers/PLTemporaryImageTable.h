/* Runtime dump - PLTemporaryImageTable
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLTemporaryImageTable : NSObject
{
    PLImageTable * _imageTable;
    unsigned int _nextTableEntryIndex;
    NSMutableArray * _itemIndexToThumbEntryMapping;
    NSString * _imageTablePath;
    int _imageFormat;
}

- (void)dealloc;
- (void)reset;
- (void)_cleanup;
- (void)removeItemAtIndex:(unsigned int)arg0;
- (unsigned int)_imageTableIndexForItemIndex:(unsigned int)arg0;
- (PLTemporaryImageTable *)initWithWithPath:(NSString *)arg0 imageFormat:(int)arg1;
- (void)setImage:(UIImage *)arg0 videoDuration:(id)arg1 forItemAtIndex:(unsigned int)arg2;
- (NSObject *)dataForItemAtIndex:(unsigned int)arg0 widthOut:(int *)arg1 heightOut:(int *)arg2 bytesPerRowOut:(int *)arg3 dataWidthOut:(int *)arg4 dataHeightOut:(int *)arg5 imageDataOffset:(int *)arg6;
- (NSObject *)imageForItemAtIndex:(unsigned int)arg0;
- (void)insertItemAtIndex:(unsigned int)arg0;

@end
