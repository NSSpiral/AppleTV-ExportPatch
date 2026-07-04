/* Runtime dump - WDShading
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDShading : NSObject <NSCopying>
{
    int mStyle;
    OITSUColor * mForegroundColor;
    OITSUColor * mBackgroundColor;
}

+ (UIColor *)autoForegroundColor;
+ (UIColor *)autoBackgroundColor;
+ (WDShading *)nullShading;

- (void)dealloc;
- (WDShading *)init;
- (char)isEqual:(NSObject *)arg0;
- (WDShading *)copyWithZone:(struct _NSZone *)arg0;
- (int)style;
- (void)setStyle:(int)arg0;
- (UIImage *)background;
- (void)setBackground:(UISearchBarBackground *)arg0;
- (id)foreground;
- (void)setForeground:(id)arg0;
- (void)setShading:(WDShading *)arg0;
- (char)isEqualToShading:(id)arg0;

@end
