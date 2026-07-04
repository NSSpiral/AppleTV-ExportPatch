/* Runtime dump - TSDFrameImageCache
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDFrameImageCache : NSObject
{
    NSMutableArray * mEntries;
}

+ (TSDFrameImageCache *)sharedFrameImageCache;

- (void)p_didReceiveMemoryWarning:(id)arg0;
- (struct CGImage *)newCachedImageForFrame:(NSObject *)arg0 size:(struct CGSize)arg1 viewScale:(float)arg2 forCALayer:(char)arg3 mask:(char)arg4;
- (struct CGImage *)setCachedImage:(struct CGImage *)arg0 forFrame:(NSObject *)arg1 size:(struct CGSize)arg2 viewScale:(float)arg3 forCALayer:(char)arg4 mask:(char)arg5;
- (NSObject *)p_newEntryForFrame:(NSObject *)arg0 size:(struct CGSize)arg1 viewScale:(float)arg2 createIfNeeded:(char)arg3;
- (void)dealloc;
- (TSDFrameImageCache *)init;

@end
