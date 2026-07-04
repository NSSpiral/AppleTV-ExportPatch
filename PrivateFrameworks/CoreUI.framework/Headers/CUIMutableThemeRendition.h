/* Runtime dump - CUIMutableThemeRendition
 * Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIMutableThemeRendition : CUIThemeRendition
{
    struct _renditionkeytoken * _renditionKey;
    struct CGImage * _image;
    CUIRenditionSliceInformation * _sliceInformation;
    CUIRenditionMetrics * _renditionMetrics;
}

- (void)dealloc;
- (void)setName:(NSString *)arg0;
- (struct _renditionkeytoken *)key;
- (NSMutableArray *)metrics;
- (CUIMutableThemeRendition *)initWithCGImage:(struct CGImage *)arg0 withDescription:(NSString *)arg1 forKey:(struct _renditionkeytoken *)arg2;
- (struct CGImage *)unslicedImage;
- (CUIRenditionSliceInformation *)sliceInformation;

@end
