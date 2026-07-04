/* Runtime dump - PLLargeImageLoader
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLLargeImageLoader : NSObject <PLPreheatItemSource>
{
    int _format;
}

@property (nonatomic) int format;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (PLLargeImageLoader *)initWithFormat:(int)arg0;
- (NSSet *)preheatItemForAsset:(NSSet *)arg0 format:(int)arg1 optimalSourcePixelSize:(struct CGSize)arg2 options:(unsigned int)arg3;
- (NSSet *)originalPreheatItemForAsset:(NSSet *)arg0 optimalSourcePixelSize:(struct CGSize)arg1 options:(unsigned int)arg2;
- (int)format;
- (void)setFormat:(int)arg0;

@end
