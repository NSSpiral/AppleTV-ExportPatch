/* Runtime dump - CSIHelper
 * Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CSIHelper : NSObject
{
    struct _slice slice;
    NSData * csiData;
    struct _csibitmap * bmp;
    int renditionLock;
    _CUIThemePixelRendition * rendition;
    _CSIRenditionBlockData * sharedBlockDataBGRX;
    _CSIRenditionBlockData * sharedBlockDataRGBX;
    NSString * blockDataCacheKeyBGRX;
    NSString * blockDataCacheKeyRGBX;
    unsigned long sourceRowbytes;
}

@end
