/* Runtime dump - PDPresentation
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDPresentation : OCDDocument
{
    NSMutableArray * mSlideMasters;
    NSMutableArray * mNotesMasters;
    NSMutableArray * mSlides;
    NSMutableArray * mBulletBlips;
    struct CGSize mSlideSize;
    struct CGSize mNotesSize;
    char mIsAutoPlay;
    char mIsCommentsVisible;
    char mIsLooping;
    char mIsKiosk;
    NSMutableArray * mCommentAuthors;
}

- (void)dealloc;
- (PDPresentation *)init;
- (void).cxx_construct;
- (struct CGSize)slideSize;
- (id)bulletBlips;
- (unsigned int)slideCount;
- (NSObject *)slideAtIndex:(unsigned int)arg0;
- (unsigned int)slideMasterCount;
- (NSObject *)slideMasterAtIndex:(unsigned int)arg0;
- (void)addSlideMaster:(PDSlideMaster *)arg0;
- (unsigned int)notesMasterCount;
- (NSObject *)notesMasterAtIndex:(unsigned int)arg0;
- (void)addNotesMaster:(PXNotesMaster *)arg0;
- (void)addSlide:(MPSlide *)arg0;
- (unsigned int)indexOfSlide:(id)arg0;
- (NSObject *)bulletBlipAtIndex:(long)arg0;
- (unsigned long)addBulletBlip:(id)arg0;
- (unsigned long)bulletBlipCount;
- (void)setSlideSize:(struct CGSize)arg0;
- (struct CGSize)notesSize;
- (void)setNotesSize:(struct CGSize)arg0;
- (char)isAutoPlay;
- (void)setIsAutoPlay:(char)arg0;
- (char)isCommentsVisible;
- (void)setIsCommentsVisible:(char)arg0;
- (char)isLooping;
- (void)setIsLooping:(char)arg0;
- (char)isKiosk;
- (void)setIsKiosk:(char)arg0;
- (unsigned int)commentAuthorCount;
- (NSObject *)commentAuthorAtIndex:(unsigned int)arg0;
- (void)addCommentAuthor:(PXCommentAuthor *)arg0;
- (void)flushUnusedMastersAndLayouts;
- (void)ensureDefaultLayoutsForMasters;
- (void)cacheGraphicStyleForDrawable:(id)arg0 colorContext:(NSObject *)arg1;
- (void)cacheGraphicStylesForSlideBase:(id)arg0;

@end
