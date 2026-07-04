/* Runtime dump - MLITChapterTOC
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MLITChapterTOC : MLChapterTOC
{
    unsigned int _totalTimeInMS;
    struct ChapterData * _chapterDataRef;
    unsigned int * _picCookieIndexMap;
    unsigned int * _urlCookieIndexMap;
    unsigned int * _nameCookieIndexMap;
}

+ (void)enumerateArtworkCacheIDsInFlattenedChapterData:(NSData *)arg0 usingBlock:(id /* block */)arg1;
+ (void)enumerateChapterTimesInFlattenedChapterData:(NSData *)arg0 usingBlock:(id /* block */)arg1;
+ (unsigned int * *)_chapterDataCookieIndexMapForProperty:(SEL)arg0 ofChapterTOC:(int)arg1;

- (void)dealloc;
- (MLITChapterTOC *)initWithChapterDataRef:(struct ChapterData *)arg0 totalTimeInMS:(unsigned int)arg1;
- (struct ChapterData *)chapterDataRef;
- (unsigned int)countOfGroupsForProperty:(int)arg0;
- (unsigned int *)_cachedCookieIndexMapForProperty:(int)arg0 createIfNecessary:(char)arg1;
- (unsigned int)chapterIndexForGroupIndex:(unsigned int)arg0 groupingProperty:(int)arg1;
- (unsigned int)totalTimeInMS;
- (unsigned int)timeLocationInMSOfChapterAtIndex:(unsigned int)arg0;
- (unsigned int)groupIndexForChapterIndex:(unsigned int)arg0 groupingProperty:(int)arg1;
- (NSSet *)urlTitleTrimmingCharacterSet;
- (unsigned int)countOfChapters;
- (unsigned int)durationInMSOfGroupAtIndex:(unsigned int)arg0 groupingProperty:(int)arg1;
- (unsigned int)groupIndexAtTimeLocationInMS:(unsigned int)arg0 groupingProperty:(int)arg1;
- (unsigned int)timeLocationInMSOfGroupAtIndex:(unsigned int)arg0 groupingProperty:(int)arg1;
- (NSObject *)titlePropertyOfChapterAtIndex:(unsigned int)arg0;
- (NSObject *)urlTitlePropertyOfChapterAtIndex:(unsigned int)arg0;
- (NSObject *)urlPropertyOfChapterAtIndex:(unsigned int)arg0;

@end
