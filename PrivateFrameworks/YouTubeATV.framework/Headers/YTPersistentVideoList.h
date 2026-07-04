/* Runtime dump - YTPersistentVideoList
 * Image: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

@interface YTPersistentVideoList : NSObject
{
    NSString * _categoryName;
    NSMutableArray * _videos;
}

+ (NSString *)persistPathWithCategoryName:(NSString *)arg0;

- (void)dealloc;
- (void)removeFromDisk;
- (void)persist;
- (NSMutableArray *)videos;
- (void)addVideo:(YTVideo *)arg0;
- (YTPersistentVideoList *)initWithCategoryName:(NSString *)arg0;

@end
