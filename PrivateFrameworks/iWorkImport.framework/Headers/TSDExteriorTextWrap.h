/* Runtime dump - TSDExteriorTextWrap
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDExteriorTextWrap : NSObject <NSCopying, NSMutableCopying>
{
    char _isHTMLWrap;
    int _type;
    int _direction;
    int _fitType;
    float _margin;
    float _alphaThreshold;
}

@property (readonly, nonatomic) char isHTMLWrap;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) int direction;
@property (readonly, nonatomic) int fitType;
@property (readonly, nonatomic) float margin;
@property (readonly, nonatomic) float alphaThreshold;

+ (TSDExteriorTextWrap *)exteriorTextWrap;
+ (TSDExteriorTextWrap *)exteriorTextWrapWithIsHTMLWrap:(char)arg0 type:(int)arg1 direction:(int)arg2 fitType:(int)arg3 margin:(float)arg4 alphaThreshold:(float)arg5;

- (float)alphaThreshold;
- (void)saveToArchive:(struct ExteriorTextWrapArchive *)arg0 archiver:(NSObject *)arg1;
- (TSDExteriorTextWrap *)initWithIsHTMLWrap:(char)arg0 type:(int)arg1 direction:(int)arg2 fitType:(int)arg3 margin:(float)arg4 alphaThreshold:(float)arg5;
- (char)isHTMLWrap;
- (int)fitType;
- (TSDExteriorTextWrap *)init;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (int)type;
- (TSDExteriorTextWrap *)copyWithZone:(struct _NSZone *)arg0;
- (int)direction;
- (TSDExteriorTextWrap *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (TSDExteriorTextWrap *)initWithArchive:(struct ExteriorTextWrapArchive *)arg0;
- (float)margin;

@end
