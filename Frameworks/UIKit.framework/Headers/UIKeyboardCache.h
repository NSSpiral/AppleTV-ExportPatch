/* Runtime dump - UIKeyboardCache
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardCache : NSObject
{
    CPBitmapStore * _store;
    NSSet * _layouts;
    char _isCommitting;
}

+ (UIKeyboardCache *)sharedInstance;
+ (char)enabled;

- (void)dealloc;
- (UIKeyboardCache *)init;
- (void)commitTransaction;
- (void)clearNonPersistentCache;
- (void)updateCacheForInputModes:(NSArray *)arg0;
- (NSObject *)displayImagesForView:(NSObject *)arg0 fromLayout:(UICollectionViewLayout *)arg1 imageFlags:(struct ?)arg2;
- (struct CGImage *)cachedCompositeImageForCacheKeys:(NSArray *)arg0 fromLayout:(UICollectionViewLayout *)arg1 opacities:(id)arg2;
- (struct CGImage *)cachedImageForKey:(NSString *)arg0 fromLayout:(UICollectionViewLayout *)arg1;
- (void)displayView:(ABPersonNameDisplayView *)arg0 imageWidth:(float)arg1 fromLayout:(UICollectionViewLayout *)arg2;
- (NSArray *)uniqueLayoutsFromInputModes:(NSArray *)arg0;
- (void)displayView:(ABPersonNameDisplayView *)arg0 fromLayout:(UICollectionViewLayout *)arg1;

@end
