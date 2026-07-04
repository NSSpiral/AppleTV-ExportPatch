/* Runtime dump - CPBitmapStore
 * Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@interface CPBitmapStore : NSObject
{
    NSString * _path;
    NSString * _imagePath;
    NSCache * _cache;
    int _version;
    NSString * _versionPath;
    NSObject<OS_dispatch_queue> * _serialQueueRemoveImagesBackground;
    NSObject<OS_dispatch_queue> * _serialQueueRemoveImagesDefault;
    char _lockOnRead;
}

@property (readonly, nonatomic) int version;
@property (nonatomic) char lockOnRead;
@property (nonatomic) unsigned int cacheItemLimit;

- (id)allGroups;
- (void)dealloc;
- (void)commitTransaction;
- (int)setVersion:(int)arg0;
- (int)version;
- (CPBitmapStore *)initWithPath:(NSString *)arg0 version:(int)arg1;
- (void)purge;
- (struct CGImage *)copyImageForKey:(NSString *)arg0 inGroup:(NSObject *)arg1;
- (void)storeImageForKey:(NSString *)arg0 inGroup:(NSObject *)arg1 opaque:(char)arg2 image:(struct CGImage *)arg3;
- (void)removeImagesInGroups:(id)arg0 completion:(id /* block */)arg1;
- (void)setLockOnRead:(char)arg0;
- (void)setCacheItemLimit:(unsigned int)arg0;
- (void)storeImageDataForKey:(NSString *)arg0 inGroup:(NSObject *)arg1 withSize:(struct CGSize)arg2 opaque:(char)arg3 scale:(float)arg4 data:(NSData *)arg5;
- (struct CGImage *)copyAndStoreImageForKey:(NSString *)arg0 inGroup:(NSObject *)arg1 withSize:(struct CGSize)arg2 opaque:(char)arg3 scale:(float)arg4 draw:(id)arg5;
- (void)storeGrayscaleImageDataForKey:(NSString *)arg0 inGroup:(NSObject *)arg1 withSize:(struct CGSize)arg2 opaque:(char)arg3 scale:(float)arg4 data:(NSData *)arg5;
- (unsigned int)imageCount;
- (NSString *)imageNameForKey:(NSString *)arg0 inGroup:(NSObject *)arg1;
- (NSString *)cacheNumberForKey:(NSString *)arg0;
- (char)findImageWithKey:(NSString *)arg0 inGroup:(NSObject *)arg1 andInfo:(struct _img *)arg2;
- (void *)openAndMmap:(id)arg0 withInfo:(struct _img *)arg1;
- (char)lockOnRead;
- (unsigned int)memContentOffset;
- (char)saveImageWithKey:(NSString *)arg0 inGroup:(NSObject *)arg1 andInfo:(struct _img *)arg2;
- (struct CGImage *)_copyAndStoreImageForKey:(NSString *)arg0 inGroup:(NSObject *)arg1 withSize:(struct CGSize)arg2 format:(int)arg3 scale:(float)arg4 fillMem:(id)arg5 alternateCompletion:(/* block */ id)arg6;
- (NSString *)_versionPath;
- (unsigned int)cacheItemLimit;
- (struct CGImage *)copyImageForKey:(NSString *)arg0;
- (void)commitTxn;
- (void)removeImagesInGroups:(id)arg0;
- (NSString *)imagePath;

@end
