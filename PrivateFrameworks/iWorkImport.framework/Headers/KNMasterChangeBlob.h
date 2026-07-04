/* Runtime dump - KNMasterChangeBlob
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNMasterChangeBlob : NSObject
{
    KNSlide * mSlide;
    KNSlideStyle * mSlideStyle;
    KNMasterSlide * mMaster;
    KNTitlePlaceholderInfo * mTitlePlaceholder;
    KNBodyPlaceholderInfo * mBodyPlaceholder;
    NSArray * mChildInfos;
}

@property (retain, nonatomic) KNSlide * slide;
@property (retain, nonatomic) KNSlideStyle * slideStyle;
@property (retain, nonatomic) KNMasterSlide * master;
@property (retain, nonatomic) KNTitlePlaceholderInfo * titlePlaceholder;
@property (retain, nonatomic) KNBodyPlaceholderInfo * bodyPlaceholder;
@property (retain, nonatomic) NSArray * childInfos;

+ (KNMasterChangeBlob *)blobWithSlide:(KNSlide *)arg0;

- (KNSlideStyle *)slideStyle;
- (void)saveToArchive:(struct MasterChangeBlobArchive *)arg0 archiver:(NSObject *)arg1;
- (KNMasterChangeBlob *)initWithArchive:(struct MasterChangeBlobArchive *)arg0 unarchiver:(struct MasterChangeBlobArchive)arg1;
- (NSArray *)childInfos;
- (void)setChildInfos:(NSArray *)arg0;
- (KNTitlePlaceholderInfo *)titlePlaceholder;
- (KNBodyPlaceholderInfo *)bodyPlaceholder;
- (void)setTitlePlaceholder:(KNTitlePlaceholderInfo *)arg0;
- (void)setBodyPlaceholder:(KNBodyPlaceholderInfo *)arg0;
- (void)setSlideStyle:(KNSlideStyle *)arg0;
- (void)dealloc;
- (NSString *)description;
- (void)setSlide:(KNSlide *)arg0;
- (void)setMaster:(KNMasterSlide *)arg0;
- (KNMasterSlide *)master;
- (KNSlide *)slide;

@end
