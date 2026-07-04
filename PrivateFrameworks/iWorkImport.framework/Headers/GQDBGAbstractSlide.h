/* Runtime dump - GQDBGAbstractSlide
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDBGAbstractSlide : NSObject
{
    GQDSStylesheet * mStylesheet;
    GQDSStyle * mSlideStyle;
    GQDBGTitlePlaceholder * mTitlePlaceholder;
    GQDBGBodyPlaceholder * mBodyPlaceholder;
    GQDBGObjectPlaceholder * mObjectPlaceholder;
    GQDBGSlideNumberPlaceholder * mSlideNumberPlaceholder;
    char mHidden;
    char * mID;
    char mCallGenerator;
}

- (KNSlideStyle *)slideStyle;
- (int)readAttributesForSlide:(struct _xmlTextReader *)arg0;
- (char *)ID;
- (void)dealloc;
- (char)isHidden;
- (VKStylesheet *)stylesheet;

@end
