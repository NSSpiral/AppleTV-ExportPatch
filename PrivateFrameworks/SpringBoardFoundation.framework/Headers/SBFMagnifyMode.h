/* Runtime dump - SBFMagnifyMode
 * Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFMagnifyMode : NSObject <NSCopying>
{
    NSString * _name;
    float _zoomFactor;
    struct CGSize _size;
}

@property (nonatomic) struct CGSize size;
@property (retain, nonatomic) NSString * name;
@property (nonatomic) float zoomFactor;

+ (SBFMagnifyMode *)currentMagnifyMode;
+ (NSObject *)magnifyModeWithSize:(struct CGSize)arg0 name:(NSString *)arg1;

- (void)setZoomFactor:(float)arg0;
- (float)zoomFactor;
- (void)dealloc;
- (struct CGSize)size;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (SBFMagnifyMode *)copyWithZone:(struct _NSZone *)arg0;
- (void)setSize:(struct CGSize)arg0;

@end
