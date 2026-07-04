/* Runtime dump - TSDImageProvider
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDImageProvider : NSObject
{
    int mLoadState;
    TSPData * mImageData;
    int mRetainCount;
    int mOwnerCount;
    TSUFlushingManager * mFlushingManager;
    int mInterest;
}

+ (TSDImageProvider *)allocWithZone:(struct _NSZone *)arg0;

- (TSDImageProvider *)initWithImageData:(NSData *)arg0;
- (struct CGSize)dpiAdjustedNaturalSize;
- (void)i_commonInit;
- (int)interest;
- (void)addInterest;
- (void)removeInterest;
- (void)addOwner;
- (void)ownerAccess;
- (void)removeOwner;
- (TSDImageProvider *)retain;
- (void)release;
- (void)dealloc;
- (unsigned int)retainCount;
- (void)flush;
- (char)isValid;
- (struct CGSize)naturalSize;
- (void)drawImageInContext:(struct CGContext *)arg0 rect:(struct CGRect)arg1;
- (NSData *)imageData;
- (void)setFlushingManager:(NSObject *)arg0;
- (char)hasFlushableContent;
- (char)isError;

@end
