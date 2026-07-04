/* Runtime dump - GQDPath
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDPath : NSObject
{
    char * mPathString;
}

- (char)horizontalFlip;
- (char)verticalFlip;
- (char *)pathStr;
- (struct CGPath *)createBezierPath;
- (char)hasVerticalFlip;
- (char)hasHorizontalFlip;
- (char)isRect;
- (void)dealloc;
- (char)isRectangular;

@end
