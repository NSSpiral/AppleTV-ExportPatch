/* Runtime dump - WMPictureMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WMPictureMapper : CMDrawableMapper
{
    WDPicture * wdPicture;
}

- (void)mapAt:(NSObject *)arg0 withState:(NSObject *)arg1;
- (void)setBoundingBox;
- (WMPictureMapper *)initWithWDPicture:(WDPicture *)arg0 parent:(NSObject *)arg1;
- (void)mapBounds;

@end
