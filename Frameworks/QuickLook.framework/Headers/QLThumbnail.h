/* Runtime dump - QLThumbnail
 * Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLThumbnail : NSObject
{
    NSURL * _url;
}

@property (retain) NSURL * url;

+ (QLThumbnail *)sharedQueue;
+ (QLThumbnail *)defaultDescriptors;

- (id)thumbnailCreationOperationForUseMode:(unsigned int)arg0 descriptor:(NSObject *)arg1;
- (char)provideImages:(id)arg0 error:(/* block */ id)arg1;
- (NSURL *)url;
- (void)setUrl:(NSURL *)arg0;
- (QLThumbnail *)initWithURL:(NSString *)arg0;
- (UIImage *)imageForUseMode:(unsigned int)arg0 descriptor:(NSObject *)arg1 generateIfNeeded:(char)arg2 contentRect:(struct CGRect *)arg3 error:(struct CGSize)arg4;

@end
