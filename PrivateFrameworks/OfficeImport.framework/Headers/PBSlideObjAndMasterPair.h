/* Runtime dump - PBSlideObjAndMasterPair
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PBSlideObjAndMasterPair : NSObject
{
    PDSlide * mSlide;
    int mMasterId;
}

+ (PBSlideObjAndMasterPair *)createPair:(id)arg0 masterId:(int)arg1;

- (void)dealloc;
- (void)setSlide:(MPSlide *)arg0 masterId:(int)arg1;
- (MCSlide *)slide;
- (int)masterId;

@end
