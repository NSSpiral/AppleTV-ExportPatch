/* Runtime dump - MRAsset
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRAsset : NSObject
{
    NSString * mPath;
}

@property (copy) NSString * path;

+ (NSString *)mrAssetWithPath:(NSString *)arg0;

- (void)dealloc;
- (NSString *)path;
- (void)setPath:(NSString *)arg0;
- (NSString *)workingPath;
- (NSObject *)workingPathForSize:(struct CGSize)arg0;
- (struct CGImage *)CGImageForSize:(struct CGSize)arg0;

@end
