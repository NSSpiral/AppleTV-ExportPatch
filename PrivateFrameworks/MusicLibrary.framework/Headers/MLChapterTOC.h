/* Runtime dump - MLChapterTOC
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MLChapterTOC : NSObject

- (struct ChapterData *)chapterDataRef;
- (unsigned int)countOfGroupsForProperty:(int)arg0;
- (unsigned int)chapterIndexForGroupIndex:(unsigned int)arg0 groupingProperty:(int)arg1;
- (unsigned int)timeLocationInMSOfChapterAtIndex:(unsigned int)arg0;
- (unsigned int)chapterIndexAtTimeLocationInMS:(unsigned int)arg0;
- (unsigned int)groupIndexForChapterIndex:(unsigned int)arg0 groupingProperty:(int)arg1;
- (unsigned int)countOfChapters;
- (unsigned int)durationInMSOfGroupAtIndex:(unsigned int)arg0 groupingProperty:(int)arg1;
- (unsigned int)groupIndexAtTimeLocationInMS:(unsigned int)arg0 groupingProperty:(int)arg1;
- (unsigned int)timeLocationInMSOfGroupAtIndex:(unsigned int)arg0 groupingProperty:(int)arg1;
- (NSObject *)titlePropertyOfChapterAtIndex:(unsigned int)arg0;
- (NSObject *)urlTitlePropertyOfChapterAtIndex:(unsigned int)arg0;
- (NSObject *)urlPropertyOfChapterAtIndex:(unsigned int)arg0;
- (char)hasDataForProperty:(int)arg0;

@end
