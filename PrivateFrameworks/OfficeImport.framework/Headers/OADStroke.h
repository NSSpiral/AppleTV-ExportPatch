/* Runtime dump - OADStroke
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADStroke : OADProperties <NSCopying>
{
    OADColor * mColor;
    OADFill * mFill;
    OADDash * mDash;
    OADLineJoin * mJoin;
    OADLineEnd * mHead;
    OADLineEnd * mTail;
    float mWidth;
    unsigned char mCap;
    unsigned char mCompoundType;
    unsigned char mPenAlignment;
    id mIsColorOverridden;
    id mIsCompoundTypeOverridden;
    id mIsCapOverridden;
    id mIsWidthOverridden;
    id mIsJoinOverridden;
    id mIsDashOverridden;
    id mIsFillOverridden;
    id mIsPenAlignmentOverridden;
}

@property (retain, nonatomic) OADLineEnd * head;
@property (retain, nonatomic) OADLineEnd * tail;

+ (OADStroke *)defaultProperties;
+ (OADStroke *)nullStroke;
+ (OADStroke *)blackStroke;

- (void)dealloc;
- (OADStroke *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (OADStroke *)copyWithZone:(struct _NSZone *)arg0;
- (EDFill *)fill;
- (float)width;
- (UIColor *)color;
- (void)setColor:(UIColor *)arg0;
- (void)setWidth:(float)arg0;
- (char)isWidthOverridden;
- (char)isColorOverridden;
- (char)isFillOverridden;
- (char)isDashOverridden;
- (id)dash;
- (char)isCompoundTypeOverridden;
- (int)compoundType;
- (void)setFill:(TSDFill *)arg0;
- (OADLineEnd *)tail;
- (void)setCap:(int)arg0;
- (void)setCompoundType:(int)arg0;
- (void)setPenAlignment:(int)arg0;
- (void)setDash:(id)arg0;
- (void)setJoin:(int)arg0;
- (void)setStyleColor:(UIColor *)arg0;
- (char)isCapOverridden;
- (int)cap;
- (OADStroke *)initWithDefaults;
- (void)setHead:(OADLineEnd *)arg0;
- (void)setTail:(OADLineEnd *)arg0;
- (int)join;
- (char)isJoinOverridden;
- (char)isPenAlignmentOverridden;
- (int)penAlignment;
- (void)setParent:(NSObject *)arg0;
- (OADLineEnd *)head;

@end
