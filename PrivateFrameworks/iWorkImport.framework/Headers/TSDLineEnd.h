/* Runtime dump - TSDLineEnd
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDLineEnd : NSObject <NSCopying, TSDMixing>
{
    struct CGPath * mPath;
    struct CGPath * mWrapPath;
    struct CGPoint mEndPoint;
    char mIsFilled;
    NSString * mIdentifier;
    int mLineJoin;
}

@property (readonly, nonatomic) struct CGPath * path;
@property (readonly, nonatomic) struct CGPath * wrapPath;
@property (readonly, nonatomic) struct CGPoint endPoint;
@property (readonly, nonatomic) char isFilled;
@property (readonly, nonatomic) char isNone;
@property (readonly, nonatomic) NSString * identifier;
@property (readonly, nonatomic) int lineJoin;

+ (TSDLineEnd *)instanceWithArchive:(struct LineEndArchive *)arg0 unarchiver:(struct LineEndArchive)arg1;
+ (NSObject *)lineEndWithType:(int)arg0;
+ (NSString *)lineEndWithPath:(struct CGPath *)arg0 endPoint:(struct CGPoint)arg1 isFilled:(char)arg2 identifier:(NSString *)arg3;
+ (TSDLineEnd *)simpleArrow;
+ (TSDLineEnd *)filledCircle;
+ (TSDLineEnd *)filledDiamond;
+ (TSDLineEnd *)openArrow;
+ (TSDLineEnd *)filledArrow;
+ (TSDLineEnd *)filledSquare;
+ (TSDLineEnd *)openSquare;
+ (TSDLineEnd *)openCircle;
+ (TSDLineEnd *)invertedArrow;
+ (TSDLineEnd *)none;
+ (NSString *)lineEndWithIdentifier:(NSString *)arg0;
+ (NSString *)lineEndWithPath:(struct CGPath *)arg0 wrapPath:(struct CGPath *)arg1 endPoint:(struct CGPoint)arg2 isFilled:(char)arg3 identifier:(NSString *)arg4;
+ (NSString *)line;

- (void)saveToArchive:(struct LineEndArchive *)arg0 archiver:(NSObject *)arg1;
- (TSDLineEnd *)initWithArchive:(struct LineEndArchive *)arg0 unarchiver:(struct LineEndArchive)arg1;
- (NSObject *)mixedObjectWithFraction:(float)arg0 ofObject:(NSObject *)arg1;
- (int)mixingTypeWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (TSDLineEnd *)initWithPath:(struct CGPath *)arg0 wrapPath:(struct CGPath *)arg1 endPoint:(struct CGPoint)arg2 isFilled:(char)arg3 identifier:(NSString *)arg4 lineJoin:(int)arg5;
- (TSDLineEnd *)initWithPath:(struct CGPath *)arg0 endPoint:(struct CGPoint)arg1 isFilled:(char)arg2 identifier:(NSString *)arg3;
- (struct CGImage *)newLineEndImageOnRight:(char)arg0 forContentsScale:(float)arg1 withSize:(struct CGSize)arg2;
- (struct CGPath *)wrapPath;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)identifier;
- (struct CGPath *)path;
- (TSDLineEnd *)copyWithZone:(struct _NSZone *)arg0;
- (char)isNone;
- (struct CGPoint)endPoint;
- (char)isFilled;
- (int)lineJoin;

@end
