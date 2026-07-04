/* Runtime dump - SSVMediaSocialPostAttachment
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVMediaSocialPostAttachment : NSObject <NSCopying, SSXPCCoding>
{
    NSString * _albumIdentifier;
    NSArray * _artists;
    NSData * _assetData;
    NSURL * _assetURL;
    NSString * _attachmentDescription;
    NSString * _categoryName;
    NSMutableDictionary * _childAttachments;
    char _deletesAssetWhenFinished;
    char _explicitContent;
    double _previewFrameTimestamp;
    NSString * _subtitle;
    NSString * _title;
    NSString * _uti;
}

@property (copy, nonatomic) NSArray * artists;
@property (copy, nonatomic) NSString * albumIdentifier;
@property (copy, nonatomic) NSString * attachmentDescription;
@property (copy, nonatomic) NSString * categoryName;
@property (nonatomic) char explicitContent;
@property (copy, nonatomic) NSString * subtitle;
@property (copy, nonatomic) NSString * title;
@property (copy, nonatomic) NSData * assetData;
@property (copy, nonatomic) NSURL * assetURL;
@property (readonly, nonatomic) int attachmentType;
@property (copy, nonatomic) NSString * UTI;
@property (nonatomic) char deletesAssetWhenFinished;
@property (nonatomic) double previewFrameTimestamp;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSDictionary *)copyXPCEncoding;
- (SSVMediaSocialPostAttachment *)initWithXPCEncoding:(NSString *)arg0;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (SSVMediaSocialPostAttachment *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)subtitle;
- (void)setSubtitle:(NSString *)arg0;
- (void).cxx_destruct;
- (NSString *)UTI;
- (void)setUTI:(NSSet *)arg0;
- (void)setAssetData:(NSData *)arg0;
- (NSData *)assetData;
- (char)isExplicitContent;
- (void)setExplicitContent:(char)arg0;
- (NSURL *)assetURL;
- (NSString *)categoryName;
- (void)setCategoryName:(NSString *)arg0;
- (void)setAlbumIdentifier:(NSString *)arg0;
- (void)setArtists:(NSArray *)arg0;
- (void)setAssetURL:(NSURL *)arg0;
- (void)setAttachmentDescription:(NSString *)arg0;
- (void)setDeletesAssetWhenFinished:(char)arg0;
- (void)setPreviewFrameTimestamp:(double)arg0;
- (int)attachmentType;
- (id)childAttachmentForRelationship:(id)arg0;
- (void)enumerateChildAttachmentsUsingBlock:(id /* block */)arg0;
- (void)setChildAttachment:(NSObject *)arg0 forRelationship:(OCXRelationship *)arg1;
- (NSString *)albumIdentifier;
- (NSArray *)artists;
- (NSString *)attachmentDescription;
- (double)previewFrameTimestamp;
- (char)deletesAssetWhenFinished;

@end
