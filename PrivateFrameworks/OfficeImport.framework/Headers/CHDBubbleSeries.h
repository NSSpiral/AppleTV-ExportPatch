/* Runtime dump - CHDBubbleSeries
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDBubbleSeries : CHDSeries
{
    CHDData * mSizeData;
    BOOL mBubble3D;
    BOOL mInvertIfNegative;
    BOOL mShowBubbleSize;
}

- (void)dealloc;
- (BOOL)isShowBubbleSize;
- (void)setShowBubbleSize:(BOOL)arg0;
- (void)setCategoryData:(NSData *)arg0;
- (void)setSizeData:(NSData *)arg0;
- (void)setBubble3D:(BOOL)arg0;
- (void)setInvertIfNegative:(BOOL)arg0;
- (NSData *)sizeData;
- (BOOL)isBubble3D;
- (BOOL)isInvertIfNegative;

@end
