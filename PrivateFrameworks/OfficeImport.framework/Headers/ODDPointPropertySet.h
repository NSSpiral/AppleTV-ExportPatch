/* Runtime dump - ODDPointPropertySet
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ODDPointPropertySet : NSObject
{
    NSString * mLayoutTypeId;
    NSString * mPresentationName;
    NSString * mPresentationStyleLabel;
    int mPresentationStyleIndex;
    int mPresentationStyleCount;
    NSObject * mPresentationAssociatedId;
    char mCustomVerticalFlip;
    double mCustomScaleX;
    double mCustomScaleY;
    double mCustomOffsetX;
    double mCustomOffsetY;
}

- (void)dealloc;
- (NSObject *)layoutTypeId;
- (void)setPresentationName:(NSString *)arg0;
- (NSString *)presentationName;
- (NSString *)presentationStyleLabel;
- (int)presentationStyleIndex;
- (double)customScaleX;
- (double)customScaleY;
- (double)customOffsetX;
- (double)customOffsetY;
- (void)setLayoutTypeId:(NSObject *)arg0;
- (void)setPresentationStyleLabel:(NSString *)arg0;
- (void)setPresentationStyleIndex:(int)arg0;
- (void)setPresentationStyleCount:(int)arg0;
- (NSObject *)presentationAssociatedId;
- (void)setPresentationAssociatedId:(NSObject *)arg0;
- (char)customVerticalFlip;
- (void)setCustomVerticalFlip:(char)arg0;
- (void)setCustomScaleX:(double)arg0;
- (void)setCustomScaleY:(double)arg0;
- (void)setCustomOffsetX:(double)arg0;
- (void)setCustomOffsetY:(double)arg0;
- (int)presentationStyleCount;

@end
