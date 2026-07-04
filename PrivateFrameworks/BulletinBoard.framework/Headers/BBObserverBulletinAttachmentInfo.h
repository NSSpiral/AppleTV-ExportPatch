/* Runtime dump - BBObserverBulletinAttachmentInfo
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBObserverBulletinAttachmentInfo : NSObject
{
    NSMutableDictionary * _imageSizePairs;
    char _imagesFetched;
    char _sizesFetched;
    NSString * _imagesRecordID;
    NSString * _sizesRecordID;
}

@property (nonatomic) char imagesFetched;
@property (copy, nonatomic) NSString * imagesRecordID;
@property (nonatomic) char sizesFetched;
@property (copy, nonatomic) NSString * sizesRecordID;

- (void)dealloc;
- (BBObserverBulletinAttachmentInfo *)init;
- (struct CGSize)sizeForKey:(NSString *)arg0;
- (void)setSize:(struct CGSize)arg0 forKey:(NSString *)arg1;
- (void)noteImagesFetchedForRecordID:(NSObject *)arg0;
- (void)noteSizesFetchedForRecordID:(NSObject *)arg0;
- (char)isImagesFetchedForRecordID:(NSObject *)arg0;
- (char)isSizesFetchedForRecordID:(NSObject *)arg0;
- (NSString *)_pairForKey:(NSString *)arg0 create:(char)arg1;
- (void)setImagesFetched:(char)arg0;
- (void)setImagesRecordID:(NSString *)arg0;
- (char)imagesFetched;
- (NSString *)imagesRecordID;
- (void)setSizesFetched:(char)arg0;
- (void)setSizesRecordID:(NSString *)arg0;
- (char)sizesFetched;
- (NSString *)sizesRecordID;
- (NSString *)imageForKey:(NSString *)arg0;
- (void)setImage:(UIImage *)arg0 forKey:(NSString *)arg1;

@end
