/* Runtime dump - GQDBGSlide
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDBGSlide : GQDBGAbstractSlide
{
    GQDBGMasterSlide * mMaster;
    GQDWPLayoutFrame * mNoteFrame;
}

- (NSObject *)noteFrame;
- (void)dealloc;
- (GQDBGSlide *)init;
- (KNMasterSlide *)master;

@end
