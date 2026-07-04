/* Runtime dump - QLThumbnailAddition
 * Image: /System/Library/PrivateFrameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

@interface QLThumbnailAddition : NSObject
{
    NSURL * _additionURL;
    long long _additionURLSandboxToken;
    NSDictionary * _metadata;
    GSAddition * _addition;
    NSDictionary * _thumbnailDataDictionary;
}

@property (retain) NSURL * additionURL;
@property (retain) NSDictionary * metadata;
@property (retain) NSDictionary * thumbnailDataDictionary;

+ (char)associateThumbnailsForDocumentAtURL:(NSURL *)arg0 withDocumentAtURL:(NSURL *)arg1 error:(id *)arg2;
+ (char)associateImage:(struct CGImage *)arg0 metadata:(NSDictionary *)arg1 withURL:(NSString *)arg2 error:(id *)arg3;
+ (char)associateThumbnailImagesDictionary:(NSDictionary *)arg0 serializedQuickLookMetadata:(NSDictionary *)arg1 withDocumentAtURL:(NSURL *)arg2 error:(id *)arg3;
+ (char)associateThumbnailImagesDictionary:(NSDictionary *)arg0 serializedQuickLookMetadata:(NSDictionary *)arg1 withImmutableDocument:(char)arg2 atURL:(NSURL *)arg3 error:(id *)arg4;
+ (char)hasThumbnailOnImmutableDocumentAtURL:(NSURL *)arg0;
+ (QLThumbnailAddition *)plistInExtendedAttributeNamed:(char *)arg0 flags:(unsigned long long)arg1 onFileDescriptor:(int)arg2 error:(id *)arg3;
+ (char)_hitAdditionsOnURLUsingDaemon:(id)arg0 error:(id *)arg1;
+ (NSDictionary *)imageNameFor1024ThumbnailInMetadataDictionary:(NSDictionary *)arg0;
+ (NSObject *)imageNameForThumbnailInImageSource:(struct CGImageSource *)arg0;
+ (NSURL *)imageNameFor1024ThumbnailAtURL:(NSURL *)arg0 metadataDictionary:(NSDictionary *)arg1;
+ (char)_hitAdditionsOnURL:(NSURL *)arg0 error:(id *)arg1;
+ (char)makeAdditionFromStagingURL:(NSURL *)arg0 metadata:(NSDictionary *)arg1 inStorage:(NSStorage *)arg2 error:(id *)arg3;
+ (char)storeThumbnailDataDictionary:(NSDictionary *)arg0 metadata:(NSDictionary *)arg1 asExtendedAttributeOnURL:(NSURL *)arg2 error:(id *)arg3;
+ (NSDictionary *)_additionCreationInfo;
+ (char)imageContainsAlphaForOtherImages:(struct CGImage *)arg0;
+ (char)imageContainsAlpha:(struct CGImage *)arg0;
+ (char)_removedAdditionsOnURLUsingDaemon:(id)arg0;
+ (char)_removeAdditionsOnURLDirectly:(id)arg0 error:(id *)arg1;
+ (char)_removeAdditionsOnURLUsingDaemon:(id)arg0 error:(id *)arg1;
+ (char)_removedAdditionsOnURL:(NSURL *)arg0;
+ (Class)imageClassWithError:(id *)arg0;
+ (char)removeAdditionsOnURL:(NSURL *)arg0 error:(id *)arg1;
+ (char)associateThumbnailsForDocumentAtURL:(NSURL *)arg0 withImmutableDocument:(char)arg1 atURL:(NSURL *)arg2 error:(id *)arg3;
+ (NSData *)imageNameFor1024ThumbnailData:(NSData *)arg0 metadataDictionary:(NSDictionary *)arg1;
+ (NSURL *)thumbnailsDictionaryForURL:(NSURL *)arg0 error:(id *)arg1;
+ (char)setThumbnailsDictionary:(NSDictionary *)arg0 forURL:(NSURL *)arg1 error:(id *)arg2;

- (QLThumbnailAddition *)initWithAdditionsPresentOnURL:(NSURL *)arg0 error:(id *)arg1;
- (struct CGImage *)thumbnailWithMaximumDimension:(float)arg0 properties:(id *)arg1 flavor:(int *)arg2 contentRect:(struct CGRect *)arg3;
- (void)dealloc;
- (void)setMetadata:(NSDictionary *)arg0;
- (NSDictionary *)metadata;
- (void)setAdditionURL:(NSURL *)arg0;
- (void)setThumbnailDataDictionary:(NSDictionary *)arg0;
- (NSURL *)additionURL;
- (NSString *)thumbnailURLForKey:(NSString *)arg0;
- (char)_initWithXattrsPresentOnURL:(NSURL *)arg0 error:(id *)arg1;
- (char)_initWithAdditionsPresentOnURLDirectly:(id)arg0 error:(id *)arg1;
- (char)_initWithAdditionsPresentOnURLUsingDaemon:(id)arg0 error:(id *)arg1;
- (NSString *)thumbnailDataForKey:(NSString *)arg0;
- (NSError *)thumbnailsDictionaryWithError:(id *)arg0;
- (NSDictionary *)thumbnailDataDictionary;
- (void *)cacheVersion;

@end
