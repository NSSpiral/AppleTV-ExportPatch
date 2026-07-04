/* Runtime dump - TSTLayoutContentCachedKey
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTLayoutContentCachedKey : NSObject <NSCopying>
{
    NSString * mString;
    float mWidth;
    float mHeight;
    TSWPParagraphStyle * mParagraphStyle;
    char mCellWraps;
    int mValueType;
    struct UIEdgeInsets mPaddingInsets;
    int mVerticalAlignment;
    int mWritingDirection;
}

@property (readonly, nonatomic) NSString * string;
@property (readonly, nonatomic) float width;
@property (readonly, nonatomic) float height;
@property (readonly, nonatomic) TSWPParagraphStyle * paragraphStyle;
@property (readonly, nonatomic) char cellWraps;
@property (readonly, nonatomic) int valueType;
@property (readonly, nonatomic) struct UIEdgeInsets paddingInsets;
@property (readonly, nonatomic) int verticalAlignment;
@property (readonly, nonatomic) int writingDirection;

- (TSWPParagraphStyle *)paragraphStyle;
- (char)cellWraps;
- (struct UIEdgeInsets)paddingInsets;
- (TSTLayoutContentCachedKey *)initWithString:(NSString *)arg0 width:(float)arg1 height:(float)arg2 paragraphStyle:(TSWPParagraphStyle *)arg3 cellWraps:(char)arg4 valueType:(int)arg5 paddingInsets:(struct UIEdgeInsets)arg6 verticalAlignment:(int)arg7 writingDirection:(int)arg8;
- (char)isEqualToLayoutContentCachedKey:(NSString *)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (TSTLayoutContentCachedKey *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)string;
- (float)width;
- (float)height;
- (int)writingDirection;
- (int)verticalAlignment;
- (int)valueType;

@end
