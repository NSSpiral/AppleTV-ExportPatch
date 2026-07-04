/* Runtime dump - BRChapterUtilities
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface BRChapterUtilities : NSObject

+ (long)chapterIndexForTime:(double)arg0 chapters:(NSArray *)arg1 startSearchFrom:(long)arg2;
+ (unsigned int)chapterGroupCountForMediaAsset:(NSSet *)arg0;
+ (char)mediaAsset:(<BRMediaAsset> *)arg0 hasChapterGroupAtIndex:(unsigned int)arg1;
+ (NSSet *)mediaAsset:(<BRMediaAsset> *)arg0 chapterGroupAtIndex:(unsigned int)arg1;
+ (unsigned int)chapterGroupCountForMediaItem:(NSObject *)arg0;
+ (char)mediaItem:(NSObject *)arg0 hasChapterGroupAtIndex:(unsigned int)arg1;
+ (NSObject *)mediaItem:(NSObject *)arg0 chapterGroupAtIndex:(unsigned int)arg1;

@end
