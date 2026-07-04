/* Runtime dump - ALAssetsFilter
 * Image: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
 */

@interface ALAssetsFilter : NSObject
{
    id _internal;
}

@property (retain, nonatomic) ALAssetsFilterInternal * internal;

+ (struct __CFDictionary *)allPhotos;
+ (ALAssetsFilter *)allVideos;
+ (NSArray *)allAssets;

- (void)_setFilter:(int)arg0;
- (ALAssetsFilterInternal *)internal;
- (int)_filter;
- (void)dealloc;
- (ALAssetsFilter *)init;
- (void)setInternal:(ALAssetsFilterInternal *)arg0;

@end
