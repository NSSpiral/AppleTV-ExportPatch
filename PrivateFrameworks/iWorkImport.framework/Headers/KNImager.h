/* Runtime dump - KNImager
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNImager : TSDImager <TSDConnectedInfoReplacing>
{
    unsigned int mSlideNumber;
    KNAbstractSlide * mSlide;
    char mShouldShowInstructionalText;
}

@property (nonatomic) unsigned int slideNumber;
@property (nonatomic) KNAbstractSlide * slide;
@property (nonatomic) char shouldShowInstructionalText;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)shouldShowInstructionalText;
- (KNImager *)initWithDocumentRoot:(NSObject *)arg0;
- (NSDictionary *)infoToConnectToForConnectionLineConnectedToInfo:(NSDictionary *)arg0;
- (unsigned int)slideNumber;
- (void)setSlideNumber:(unsigned int)arg0;
- (void)setShouldShowInstructionalText:(char)arg0;
- (void)setSlide:(KNAbstractSlide *)arg0;
- (KNAbstractSlide *)slide;

@end
