/* Runtime dump - ML3ChapterTOC
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3ChapterTOC : MLITChapterTOC
{
    ML3Track * _track;
}

- (void).cxx_destruct;
- (ML3ChapterTOC *)initWithChapterDataRef:(struct ChapterData *)arg0 track:(ML3Track *)arg1;

@end
