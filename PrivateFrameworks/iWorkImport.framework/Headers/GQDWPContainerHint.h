/* Runtime dump - GQDWPContainerHint
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDWPContainerHint : NSObject
{
    long mPageIndex;
    long mCIndex;
    long mSIndex;
    long mLIndex;
    long mAnchorLocation;
    double mAttachmentPosition;
    struct CGRect mFrame;
}

- (int)readAttributesFromReader:(struct _xmlTextReader *)arg0;
- (long)cIndex;
- (double)attachmentPosition;
- (long)anchorLocation;
- (GQDWPContainerHint *)initWithPageIndex:(long)arg0 cIndex:(long)arg1 sIndex:(long)arg2 lIndex:(long)arg3 anchorLocation:(long)arg4 frame:(struct CGRect)arg5;
- (long)sIndex;
- (long)lIndex;
- (struct CGRect)frame;
- (void).cxx_construct;
- (long)pageIndex;

@end
