/* Runtime dump - SBWallpaperImage
 * Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBWallpaperImage : UIImage
{
    int _variant;
    NSData * _data;
}

@property (readonly, nonatomic) int variant;
@property (readonly, nonatomic) NSData * data;

+ (SBWallpaperImage *)cachedWallpaperDataForVariant:(int)arg0;
+ (struct CGImage *)_newBlackWallpaperImage;
+ (void)preheatWallpaperDataForVariant:(int)arg0;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (NSData *)data;
- (SBWallpaperImage *)initWithVariant:(int)arg0;
- (int)variant;

@end
