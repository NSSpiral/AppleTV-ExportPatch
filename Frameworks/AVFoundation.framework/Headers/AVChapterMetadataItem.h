/* Runtime dump - AVChapterMetadataItem
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVChapterMetadataItem : AVMetadataItem
{
    AVChapterMetadataItemInternal * _privChapter;
}

- (NSString *)dataType;
- (NSSet *)_initWithAsset:(NSSet *)arg0 chapterGroupIndex:(long)arg1 chapterIndex:(long)arg2 chapterType:(int)arg3 locale:(NSObject *)arg4 chapterDataType:(NSString *)arg5 time:(struct ?)arg6 duration:(struct ?)arg7;
- (void)_addFigAssetNotifications;
- (void)_removeFigAssetNotifications;
- (void)_ensureValueLoadedSync;
- (void)_setValueStatus:(int)arg0 figErrorCode:(long)arg1;
- (int)_valueStatus;
- (void)_takeValueFrom:(NSObject *)arg0;
- (char)_valueForKeyDependsOnMetadataValue:(id)arg0;
- (long)_chapterGroupIndex;
- (long)_chapterIndex;
- (void)dealloc;
- (AVChapterMetadataItem *)init;
- (NSString *)description;
- (struct ?)duration;
- (NSString *)key;
- (void *)value;
- (AVChapterMetadataItem *)copyWithZone:(struct _NSZone *)arg0;
- (struct ?)time;
- (AVChapterMetadataItem *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (NSLocale *)locale;
- (NSString *)commonKey;
- (NSDictionary *)extraAttributes;
- (int)statusOfValueForKey:(NSString *)arg0 error:(id *)arg1;
- (void)loadValuesAsynchronouslyForKeys:(NSArray *)arg0 completionHandler:(id /* block */)arg1;
- (void)finalize;
- (void)cancelLoading;
- (NSString *)keySpace;

@end
