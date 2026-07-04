/* Runtime dump - OADCachedDrawableStyle
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADCachedDrawableStyle : NSObject
{
    int mFillCategory;
    unsigned int mFillIndex;
    unsigned int mStrokeIndex;
    unsigned int mShadowIndex;
    unsigned char mReflectionOpacity;
    unsigned int mTextStyleIndex;
}

@property (readonly, nonatomic) int fillCategory;
@property (readonly, nonatomic) unsigned int fillIndex;
@property (readonly, nonatomic) unsigned int strokeIndex;
@property (readonly, nonatomic) unsigned int shadowIndex;
@property (readonly, nonatomic) unsigned char reflectionOpacity;
@property (readonly, nonatomic) unsigned int textStyleIndex;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (OADCachedDrawableStyle *)initWithFillCategory:(int)arg0 mFillIndex:(unsigned int)arg1 strokeIndex:(unsigned int)arg2 shadowIndex:(unsigned int)arg3 reflectionOpacity:(unsigned char)arg4 textStyleIndex:(unsigned int)arg5;
- (int)fillCategory;
- (unsigned int)fillIndex;
- (unsigned int)strokeIndex;
- (unsigned int)shadowIndex;
- (unsigned char)reflectionOpacity;
- (unsigned int)textStyleIndex;

@end
