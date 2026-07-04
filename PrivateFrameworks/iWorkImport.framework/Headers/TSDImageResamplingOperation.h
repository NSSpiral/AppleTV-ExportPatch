/* Runtime dump - TSDImageResamplingOperation
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDImageResamplingOperation : NSObject
{
    TSDImageProvider * mImageProvider;
    struct CGSize mDesiredSize;
    NSString * mDisplayName;
    struct CGPath * mMaskingPath;
    TSPObjectContext * mObjectContext;
}

@property (copy, nonatomic) NSString * displayName;
@property (retain, nonatomic) TSPObjectContext * objectContext;
@property (nonatomic) struct CGPath * maskingPath;
@property (retain, nonatomic) TSDImageProvider * imageProvider;
@property (nonatomic) struct CGSize desiredSize;

- (TSDImageResamplingOperation *)initWithImageProvider:(TSDImageProvider *)arg0 desiredSize:(struct CGSize)arg1;
- (void)setObjectContext:(TSPObjectContext *)arg0;
- (void)setMaskingPath:(struct CGPath *)arg0;
- (NSDictionary *)performResampleOperationWithResampleOptions:(unsigned int)arg0 bitmapContextOptions:(unsigned int)arg1;
- (TSPObjectContext *)objectContext;
- (TSDImageProvider *)imageProvider;
- (struct CGPath *)maskingPath;
- (void)setImageProvider:(TSDImageProvider *)arg0;
- (void)dealloc;
- (TSDImageResamplingOperation *)init;
- (struct CGSize)desiredSize;
- (void)setDesiredSize:(struct CGSize)arg0;
- (NSString *)displayName;
- (void)setDisplayName:(NSString *)arg0;

@end
