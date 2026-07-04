/* Runtime dump - PMPresentationMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PMPresentationMapper : CMMapper <CMMapperRoot>
{
    int mWidth;
    PDPresentation * mPresentation;
    NSMutableArray * mSlideNames;
    NSMutableArray * mSlideGuids;
    NSString * mResourceUrlPrefix;
    NSString * mResourceUrlProtocol;
    CMArchiveManager * mArchiver;
    OIXMLDocument * mXhtmlDoc;
    OIXMLElement * mBodyElement;
    unsigned int mNextCommit;
    unsigned int mCurrentSlide;
    char mHasPushedFirstSlides;
    float mSlideOriginY;
}

- (void)dealloc;
- (CMArchiveManager *)archiver;
- (OADBlip *)blipAtIndex:(unsigned int)arg0;
- (struct CGSize)pageSizeForDevice;
- (NSString *)documentTitle;
- (void)mapDefaultCssStylesAt:(id)arg0;
- (void)startMappingWithState:(NSObject *)arg0;
- (void)mapElement:(NSObject *)arg0 atIndex:(unsigned int)arg1 withState:(NSObject *)arg2 isLastElement:(char)arg3;
- (void)finishMappingWithState:(NSObject *)arg0;
- (struct CGSize)slideSize;
- (void)setHtmlDocumentSizeInArchiver;
- (void)_pushEmptySlideWithMessage:(NSString *)arg0;
- (PMPresentationMapper *)initWithPDPresentation:(PDPresentation *)arg0 archiver:(NSObject *)arg1;

@end
